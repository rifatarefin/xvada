import importlib.util
import queue
import unittest
from pathlib import Path
from unittest import mock

try:
    import lark  # noqa: F401
    import tqdm  # noqa: F401
except ModuleNotFoundError as exc:
    raise unittest.SkipTest(f"X-VADA evaluation dependencies unavailable: {exc}")


SCRIPT = Path(__file__).parents[1] / "eval.py"
SPEC = importlib.util.spec_from_file_location("xvada_eval_limits", SCRIPT)
assert SPEC and SPEC.loader
EVAL = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(EVAL)


class FakeResource:
    RLIM_INFINITY = -1
    RLIMIT_AS = 1
    RLIMIT_DATA = 2
    RLIMIT_RSS = 3

    def __init__(self, failures=(), hard=-1):
        self.failures = set(failures)
        self.limits = {
            self.RLIMIT_AS: (self.RLIM_INFINITY, hard),
            self.RLIMIT_DATA: (self.RLIM_INFINITY, hard),
            self.RLIMIT_RSS: (self.RLIM_INFINITY, hard),
        }

    def getrlimit(self, resource_id):
        return self.limits[resource_id]

    def setrlimit(self, resource_id, limits):
        if resource_id in self.failures:
            raise ValueError("backend rejected limit")
        self.limits[resource_id] = limits


class RejectingParser:
    def parse(self, _example):
        raise EVAL.UnexpectedInput()


class BrokenParser:
    def parse(self, _example):
        raise RuntimeError("parser implementation broke")


class MemoryLimitTests(unittest.TestCase):
    def test_limiter_falls_back_when_rlimit_as_rejects_on_macos_shape(self):
        resource = FakeResource(failures={FakeResource.RLIMIT_AS})
        record = EVAL._install_memory_limit(64, resource_module=resource)
        self.assertEqual(record["backend"], "RLIMIT_DATA")
        self.assertEqual(record["requested_bytes"], 64 * 1024 * 1024)
        self.assertEqual(record["applied_soft_bytes"], 64 * 1024 * 1024)
        self.assertEqual(record["preserved_hard_limit"], resource.RLIM_INFINITY)

    def test_limiter_preserves_and_obeys_existing_hard_limit(self):
        hard = 32 * 1024 * 1024
        resource = FakeResource(hard=hard)
        record = EVAL._install_memory_limit(64, resource_module=resource)
        self.assertEqual(record["applied_soft_bytes"], hard)
        self.assertEqual(resource.getrlimit(resource.RLIMIT_AS), (hard, hard))

    def test_limiter_fails_closed_when_no_backend_applies(self):
        resource = FakeResource(
            failures={
                FakeResource.RLIMIT_AS,
                FakeResource.RLIMIT_DATA,
                FakeResource.RLIMIT_RSS,
            }
        )
        with self.assertRaisesRegex(EVAL.MemoryLimiterUnavailable, "RLIMIT_AS"):
            EVAL._install_memory_limit(64, resource_module=resource)

    def test_worker_separates_rejection_parser_failure_and_limiter_failure(self):
        cases = (
            (RejectingParser(), "parse_rejection"),
            (BrokenParser(), "parser_error"),
        )
        for parser, expected in cases:
            with self.subTest(expected=expected):
                result = queue.Queue()
                with mock.patch.object(EVAL, "_install_memory_limit", return_value={}):
                    EVAL._parse_with_limits_worker(
                        parser, "case", 64, "RLIMIT_DATA", result
                    )
                self.assertEqual(result.get_nowait()[0], expected)

        result = queue.Queue()
        with mock.patch.object(
            EVAL,
            "_install_memory_limit",
            side_effect=EVAL.MemoryLimiterUnavailable("no limiter"),
        ):
            EVAL._parse_with_limits_worker(
                RejectingParser(), "case", 64, "RLIMIT_DATA", result
            )
        self.assertEqual(result.get_nowait()[0], "limiter_error")

    def test_parse_requires_a_successful_preflight_backend(self):
        with self.assertRaisesRegex(EVAL.MemoryLimiterUnavailable, "preflight"):
            EVAL.parse_with_limits(RejectingParser(), "case", memory_mb=64)


if __name__ == "__main__":
    unittest.main()

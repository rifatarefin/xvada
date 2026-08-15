import json
import sys
import tempfile
import time
import types
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
if str(ROOT) not in sys.path:
    sys.path.insert(0, str(ROOT))

# These focused adapter tests do not exercise CachingOracle/Lark. Keep them
# runnable in a minimal Python environment used by repository CI.
try:
    import lark  # noqa: F401
except ModuleNotFoundError:
    lark_stub = types.ModuleType("lark")
    lark_stub.Lark = object
    sys.modules["lark"] = lark_stub

from oracle import (  # noqa: E402
    ExternalOracle,
    OracleInfrastructureError,
    ParseException,
    PersistentExternalOracle,
)
from start import check_recall  # noqa: E402


ONE_SHOT = r"""
import sys
import time
from pathlib import Path

value = Path(sys.argv[1]).read_text(encoding="utf-8")
if value == "accept":
    raise SystemExit(0)
if value == "reject":
    raise SystemExit(1)
if value == "slow":
    time.sleep(2)
    raise SystemExit(0)
raise SystemExit(2)
"""


PERSISTENT = r"""
import json
import sys
import time
from pathlib import Path

state_path = Path(sys.argv[1])
for line in sys.stdin:
    request = json.loads(line)
    value = request["template"]
    if value == "crash":
        raise SystemExit(2)
    if value == "slow":
        time.sleep(2)
        response = {"accept": True}
    elif value == "partial":
        sys.stdout.write('{"accept":')
        sys.stdout.flush()
        time.sleep(2)
        print("true}", flush=True)
        continue
    elif value == "malformed":
        print("not-json", flush=True)
        continue
    elif value == "duplicate":
        print('{"accept":true,"accept":false}', flush=True)
        continue
    elif value == "unexpected":
        print('{"accept":true,"extra":1}', flush=True)
        continue
    elif value == "nonfinite":
        print('{"accept":NaN}', flush=True)
        continue
    elif value == "nonobject":
        print('[]', flush=True)
        continue
    elif value == "recover":
        if state_path.exists():
            response = {"accept": True}
        else:
            state_path.write_text("retry", encoding="utf-8")
            print("not-json", flush=True)
            continue
    else:
        response = {"accept": value == "accept"}
    print(json.dumps(response), flush=True)
"""


NON_READING_PERSISTENT = r"""
import time
time.sleep(30)
"""


class OracleTests(unittest.TestCase):
    def setUp(self):
        self.temporary_directory = tempfile.TemporaryDirectory()
        self.root = Path(self.temporary_directory.name)
        self.failure_dir = self.root / "failures"
        self.one_shot = self.root / "one_shot.py"
        self.one_shot.write_text(ONE_SHOT, encoding="utf-8")
        self.persistent = self.root / "persistent.py"
        self.persistent.write_text(PERSISTENT, encoding="utf-8")
        self.state = self.root / "persistent.state"
        self.non_reader = self.root / "non_reader.py"
        self.non_reader.write_text(NON_READING_PERSISTENT, encoding="utf-8")

    def tearDown(self):
        self.temporary_directory.cleanup()

    def one_shot_oracle(self, **kwargs):
        return ExternalOracle(
            [sys.executable, str(self.one_shot)],
            failure_dir=self.failure_dir,
            **kwargs,
        )

    def persistent_oracle(self, **kwargs):
        return PersistentExternalOracle(
            [sys.executable, "-u", str(self.persistent), str(self.state)],
            failure_dir=self.failure_dir,
            **kwargs,
        )

    def failure_records(self):
        return sorted(self.failure_dir.glob("*.json"))

    def test_filename_protocol_caches_only_membership_decisions(self):
        oracle = self.one_shot_oracle(max_retries=0)

        self.assertTrue(oracle.parse("accept"))
        self.assertTrue(oracle.parse("accept"))
        with self.assertRaises(ParseException):
            oracle.parse("reject")
        with self.assertRaises(ParseException):
            oracle.parse("reject")

        self.assertEqual(oracle.real_calls, 2)
        self.assertEqual(oracle.cache_set, {"accept": True, "reject": False})
        self.assertEqual(self.failure_records(), [])

    def test_filename_timeout_retries_then_raises_without_caching(self):
        oracle = self.one_shot_oracle(timeout=0.05, max_retries=1)

        with self.assertRaises(OracleInfrastructureError):
            oracle.parse("slow")

        self.assertEqual(oracle.real_calls, 2)
        self.assertNotIn("slow", oracle.cache_set)
        records = self.failure_records()
        self.assertEqual(len(records), 1)
        payload = json.loads(records[0].read_text(encoding="utf-8"))
        self.assertEqual(payload["attempts"], 2)
        self.assertEqual(payload["protocol"], "filename")

        with self.assertRaises(OracleInfrastructureError):
            oracle.parse("slow")
        self.assertEqual(oracle.real_calls, 4)

    def test_filename_crash_is_infrastructure_failure(self):
        oracle = self.one_shot_oracle(max_retries=0)

        with self.assertRaises(OracleInfrastructureError):
            oracle.parse("crash")

        self.assertNotIn("crash", oracle.cache_set)
        self.assertEqual(len(self.failure_records()), 1)

    def test_persistent_protocol_caches_only_membership_decisions(self):
        oracle = self.persistent_oracle(max_retries=0)
        try:
            self.assertTrue(oracle.parse("accept"))
            self.assertTrue(oracle.parse("accept"))
            with self.assertRaises(ParseException):
                oracle.parse("reject")
            with self.assertRaises(ParseException):
                oracle.parse("reject")

            self.assertEqual(oracle.real_calls, 2)
            self.assertEqual(oracle.cache_set, {"accept": True, "reject": False})
        finally:
            oracle.close()

    def test_persistent_malformed_response_retries_then_raises(self):
        for value in (
            "crash",
            "malformed",
            "duplicate",
            "unexpected",
            "nonfinite",
            "nonobject",
        ):
            with self.subTest(value=value):
                oracle = self.persistent_oracle(max_retries=1)
                try:
                    with self.assertRaises(OracleInfrastructureError):
                        oracle.parse(value)

                    self.assertEqual(oracle.real_calls, 2)
                    self.assertNotIn(value, oracle.cache_set)
                    records = self.failure_records()
                    self.assertEqual(len(records), 1)
                    payload = json.loads(records[0].read_text(encoding="utf-8"))
                    self.assertEqual(payload["protocol"], "persistent-jsonl")
                finally:
                    oracle.close()
                for record in self.failure_records():
                    record.unlink()

    def test_persistent_timeout_retries_then_raises_without_caching(self):
        for value in ("slow", "partial"):
            with self.subTest(value=value):
                oracle = self.persistent_oracle(timeout=0.05, max_retries=1)
                try:
                    with self.assertRaises(OracleInfrastructureError):
                        oracle.parse(value)

                    self.assertEqual(oracle.real_calls, 2)
                    self.assertNotIn(value, oracle.cache_set)
                    self.assertEqual(len(self.failure_records()), 1)
                finally:
                    oracle.close()
                for record in self.failure_records():
                    record.unlink()

    def test_persistent_protocol_can_recover_within_retry_bound(self):
        oracle = self.persistent_oracle(max_retries=1)
        try:
            self.assertTrue(oracle.parse("recover"))
            self.assertEqual(oracle.real_calls, 2)
            self.assertEqual(oracle.cache_set["recover"], True)
            self.assertEqual(self.failure_records(), [])
        finally:
            oracle.close()

    def test_persistent_request_write_obeys_timeout_and_quarantine_is_bounded(self):
        oracle = PersistentExternalOracle(
            [sys.executable, "-u", str(self.non_reader)],
            timeout=0.05,
            max_retries=0,
            failure_dir=self.failure_dir,
        )
        value = "x" * (4 * 1024 * 1024)
        started = time.monotonic()
        try:
            with self.assertRaises(OracleInfrastructureError):
                oracle.parse(value)
        finally:
            oracle.close()

        self.assertLess(time.monotonic() - started, 1.0)
        self.assertNotIn(value, oracle.cache_set)
        records = self.failure_records()
        self.assertEqual(len(records), 1)
        payload = json.loads(records[0].read_text(encoding="utf-8"))
        self.assertEqual(payload["input_bytes"], len(value))
        self.assertEqual(len(payload["template_preview"]), 4096)
        self.assertTrue(payload["template_truncated"])
        self.assertLess(records[0].stat().st_size, 8192)

    def test_grammar_checks_propagate_oracle_infrastructure_failures(self):
        class SampleGrammar:
            @staticmethod
            def sample_positives(_count, _depth):
                return ["candidate"]

        class FailedInfrastructure:
            @staticmethod
            def parse(_candidate):
                raise OracleInfrastructureError("oracle crashed")

        class RejectedCandidate:
            @staticmethod
            def parse(_candidate):
                raise ParseException("not in the language")

        with self.assertRaises(OracleInfrastructureError):
            check_recall(FailedInfrastructure(), SampleGrammar())
        self.assertFalse(check_recall(RejectedCandidate(), SampleGrammar()))


if __name__ == "__main__":
    unittest.main()

import argparse
import json
import multiprocessing as mp
import platform
from pathlib import Path
import random, sys, os, time, string
from typing import Dict, List

from tqdm import tqdm

from parse_tree import ParseTree, ParseNode
from grammar import Grammar, Rule
from start import get_times, START
from lark import Lark
from lark.exceptions import UnexpectedInput
from oracle import (
    CachingOracle,
    ExternalOracle,
    OracleInfrastructureError,
    ParseException,
    PersistentExternalOracle,
)
from token_expansion import expand_tokens
"""
High-level command line to launch Arvada evaluation.
 
"""
random.seed(0)
PRECISION_SIZE=1000
ANTLR4_OUTPUT=True
MEMORY_SAFE_RECALL=False


class MemoryLimiterUnavailable(RuntimeError):
    """Raised when --memory-safe cannot establish its promised memory bound."""


class RecallEvaluationInfrastructureError(RuntimeError):
    """Raised when a recall case has no trustworthy accept/reject result."""


def _install_memory_limit(memory_mb, preferred_backend=None, resource_module=None):
    """Install and verify one portable soft address/data/RSS limit.

    Only the soft limit is changed; the existing hard limit is preserved.  A
    backend that exists but rejects setrlimit (notably RLIMIT_AS on some macOS
    builds) is skipped rather than being misreported as a parser rejection.
    """
    if memory_mb is None or memory_mb <= 0:
        raise MemoryLimiterUnavailable("memory_mb must be a positive integer")
    if resource_module is None:
        try:
            import resource as resource_module
        except ImportError as exc:
            raise MemoryLimiterUnavailable("resource module is unavailable") from exc

    requested_bytes = int(memory_mb) * 1024 * 1024
    candidates = []
    for name in ("RLIMIT_AS", "RLIMIT_DATA", "RLIMIT_RSS"):
        if hasattr(resource_module, name):
            candidates.append((name, getattr(resource_module, name)))
    if preferred_backend is not None:
        candidates = [item for item in candidates if item[0] == preferred_backend]
        if not candidates:
            raise MemoryLimiterUnavailable(
                f"requested limiter backend {preferred_backend!r} is unavailable"
            )

    errors = []
    infinity = getattr(resource_module, "RLIM_INFINITY", -1)
    for name, resource_id in candidates:
        try:
            _current_soft, current_hard = resource_module.getrlimit(resource_id)
            applied = requested_bytes
            if current_hard != infinity and current_hard >= 0:
                applied = min(applied, current_hard)
            if applied <= 0:
                raise ValueError(f"non-positive applicable soft limit {applied}")
            resource_module.setrlimit(resource_id, (applied, current_hard))
            verified_soft, verified_hard = resource_module.getrlimit(resource_id)
            if verified_soft != applied or verified_hard != current_hard:
                raise OSError(
                    "setrlimit verification mismatch: "
                    f"expected {(applied, current_hard)!r}, got {(verified_soft, verified_hard)!r}"
                )
            return {
                "platform": platform.platform(),
                "backend": name,
                "requested_bytes": requested_bytes,
                "applied_soft_bytes": applied,
                "preserved_hard_limit": current_hard,
            }
        except (ValueError, OSError) as exc:
            errors.append(f"{name}:{type(exc).__name__}:{exc}")
    detail = "; ".join(errors) if errors else "no RLIMIT_AS/RLIMIT_DATA/RLIMIT_RSS backend"
    raise MemoryLimiterUnavailable(f"platform={platform.platform()}; {detail}")


def _memory_limiter_preflight_worker(memory_mb, result_queue):
    try:
        record = _install_memory_limit(memory_mb)
        allocation_bytes = min(1024 * 1024, max(4096, record["applied_soft_bytes"] // 1024))
        planted = bytearray(allocation_bytes)
        planted[0] = 1
        planted[-1] = 1
        record["allocation_control"] = {
            "status": "pass",
            "allocated_bytes": allocation_bytes,
        }
        result_queue.put(("ok", record))
    except (MemoryLimiterUnavailable, MemoryError) as exc:
        result_queue.put(("limiter_error", f"{type(exc).__name__}:{exc}"))


def preflight_memory_limiter(memory_mb=None, timeout_seconds=30):
    """Verify --memory-safe in one child before any recall denominator is used."""
    memory_mb = memory_mb or get_default_recall_memory_mb()
    try:
        ctx = mp.get_context("fork")
    except ValueError as exc:
        raise MemoryLimiterUnavailable("multiprocessing fork context is unavailable") from exc
    result_queue = ctx.Queue()
    process = ctx.Process(
        target=_memory_limiter_preflight_worker,
        args=(memory_mb, result_queue),
    )
    process.start()
    process.join(timeout_seconds)
    if process.is_alive():
        process.terminate()
        process.join()
        raise MemoryLimiterUnavailable("memory limiter preflight timed out")
    if process.exitcode != 0:
        raise MemoryLimiterUnavailable(f"memory limiter preflight child exited {process.exitcode}")
    try:
        status, detail = result_queue.get(timeout=1)
    except Exception as exc:
        raise MemoryLimiterUnavailable("memory limiter preflight returned no result") from exc
    if status != "ok":
        raise MemoryLimiterUnavailable(str(detail))
    return detail


def _parse_with_limits_worker(
    parser, example, memory_mb, limiter_backend, result_queue
):
    try:
        _install_memory_limit(memory_mb, preferred_backend=limiter_backend)
    except MemoryLimiterUnavailable as e:
        result_queue.put(("limiter_error", repr(e)))
        return
    try:
        parser.parse(example)
        result_queue.put(("ok", None))
    except MemoryError as e:
        result_queue.put(("memory_error", repr(e)))
    except UnexpectedInput as e:
        result_queue.put(("parse_rejection", repr(e)))
    except Exception as e:
        result_queue.put(("parser_error", f"{type(e).__name__}:{e!r}"))


def get_default_recall_memory_mb(fraction=0.9, reserve_mb=512, min_mb=256, fallback_mb=1024):
    """
    Returns the memory limit (in MB) to use for recall parsing.
    Uses most of the available memory, leaving reserve_mb for the OS.
    """
    try:
        with open("/proc/meminfo") as f:
            for line in f:
                if line.startswith("MemAvailable:"):
                    available_kb = int(line.split()[1])
                    available_mb = available_kb // 1024
                    allowed_mb = int(available_mb * fraction) - reserve_mb
                    return max(allowed_mb, min_mb)
    except Exception:
        pass
    return fallback_mb


def parse_with_limits(
    parser,
    example,
    timeout_seconds=300,
    memory_mb=None,
    limiter_backend=None,
):
    """
    Parse a single recall example in an isolated child process.

    This prevents an out-of-memory parse from killing the entire evaluation
    process. Only a Lark ``UnexpectedInput`` is a recall miss. Limiter,
    timeout, child, memory, and parser failures abort evaluation as
    infrastructure errors so they cannot silently lower recall.
    """
    memory_mb = memory_mb or get_default_recall_memory_mb()
    if limiter_backend is None:
        raise MemoryLimiterUnavailable(
            "parse_with_limits requires a successful preflight limiter backend"
        )

    ctx = mp.get_context("fork")
    result_queue = ctx.Queue()
    process = ctx.Process(
        target=_parse_with_limits_worker,
        args=(parser, example, memory_mb, limiter_backend, result_queue),
    )
    process.start()
    process.join(timeout_seconds)

    if process.is_alive():
        process.terminate()
        process.join()
        raise RecallEvaluationInfrastructureError("recall parse timed out")

    if process.exitcode != 0:
        raise RecallEvaluationInfrastructureError(
            f"recall parse child exited {process.exitcode}"
        )

    try:
        status, detail = result_queue.get(timeout=1)
    except Exception as exc:
        raise RecallEvaluationInfrastructureError(
            "recall parse child returned no result"
        ) from exc

    if status == "ok":
        return True, None
    if status == "parse_rejection":
        return False, detail
    if status == "limiter_error":
        raise MemoryLimiterUnavailable(str(detail))
    raise RecallEvaluationInfrastructureError(f"{status}: {detail}")

def grammar_stats(grammar: Grammar):
    """
    Computes NT/ T count, rule alternatives, avg rule length, sum of rule lengths, longest rule distance
    """
    nt_count = len(grammar.rules) - 1  # exclude the dummy start rule

    rule_alternatives = sum(len(rule.bodies) for rule in grammar.rules.values()) - 1
    total_rule_length = sum(len(body) for rule in grammar.rules.values() for body in rule.bodies) - 1
    avg_rule_length = total_rule_length / rule_alternatives if rule_alternatives > 0 else 0

    terminals = set()
    for rule in grammar.rules.values():
        for body in rule.bodies:
            for symbol in body:
                if '"' in symbol:
                    terminals.add(symbol)

    longest_rule_distance = grammar.max_rule_distance()

    return {
        "nonterminal_count": nt_count,
        "terminal_count": len(terminals),
        "rule_alternatives": rule_alternatives,
        "avg_rule_length": avg_rule_length,
        "total_rule_length": total_rule_length,
        "longest_rule_distance": longest_rule_distance,
    }


def main_internal(external_folder, log_file, random_guides=False):
    """
    `external_folder`: the base folder for the benchmark, which contains:
      - random-guides: dir of random guide examples
      - guides: dir of minimal guide examples
      - test_set: dir of held-out test examples
      - parse_bench_name: the parser command (oracle). assume bench_name is the
        base (i.e. without parent directories) name of external_folder
    `log_file`: where to write results
    `fast`: use internal caching oracle created with the Lark grammar, instead
            of the external command
    `random_guides`: learn from the guide examples in random-guides instead of guides
    """
    import os
    bench_name = os.path.basename(external_folder)
    test_folder = os.path.join(external_folder, "test_set")
    parser_command = os.path.join(external_folder, f"parse_{bench_name}")
    
    main(parser_command, log_file, test_folder)

def main(
    oracle_cmd,
    log_file_name,
    test_examples_folder,
    persistent_oracle=False,
    oracle_timeout=None,
    oracle_max_retries=None,
    oracle_failure_dir=None,
):
    oracle_class = PersistentExternalOracle if persistent_oracle else ExternalOracle
    oracle_options = {}
    if oracle_timeout is not None:
        oracle_options["timeout"] = oracle_timeout
    if oracle_max_retries is not None:
        oracle_options["max_retries"] = oracle_max_retries
    if oracle_failure_dir is not None:
        oracle_options["failure_dir"] = oracle_failure_dir
    oracle = oracle_class(oracle_cmd, **oracle_options)


    real_recall_set = []
    for filename in os.listdir(test_examples_folder):
        full_filename = os.path.join(test_examples_folder, filename)
        test_raw = open(full_filename).read()
        real_recall_set.append(test_raw)
        # TODO: make an option to try


    # Create the log file and write positive and negative examples to it
    # Also write the initial starting grammar to the file
    with open(log_file_name + ".eval", 'w+') as f:
        start_time = time.time()
        import pickle
        learned_grammar = Grammar(START)
        grammar_dict : Dict[str, Rule] = pickle.load(open(log_file_name + ".gramdict", "rb"))
        for key, rule in grammar_dict.items():
            print(rule)
            learned_grammar.add_rule(rule)
        longest_rule_distance = learned_grammar.max_rule_distance()
        print(f"Longest rule distance: {longest_rule_distance}", file=f)
        print(f"Longest rule distance: {longest_rule_distance}")

        try:
            print("Loading grammar")
            learned_grammar.parser()
            print('\n\nInitial grammar loaded:\n%s' % str(learned_grammar), file=f)
            if ANTLR4_OUTPUT:
                dir_name = os.path.dirname(log_file_name)
                bench_name = os.path.basename(log_file_name)
                bench_name = ''.join(c for c in bench_name if c not in string.punctuation)
                lan = Path(dir_name)
                root_dir = lan.parent.parent
                antlr_file = os.path.join(root_dir, "antlr_grammars", lan.name, bench_name + ".g4")
                antlr_dir = os.path.dirname(antlr_file)
                os.makedirs(antlr_dir, exist_ok=True)
                with open(antlr_file, 'w') as antlr_f:
                    antlr_f.write(learned_grammar.to_antlr4(bench_name)) # todo: remove indirect left recursion
                    antlr_f.close()
                print(f"ANTLR4 grammar written to {antlr_file}")
        except Exception as e:
            print('\n\nLoaded grammar does not compile! %s' % str(e), file=f)
            print(learned_grammar, file=f)
            print(e)
            raise RecallEvaluationInfrastructureError(
                f"learned grammar does not compile: {type(e).__name__}: {e}"
            ) from e
        parser: Lark = learned_grammar.parser()
        precision_set = learned_grammar.sample_positives(PRECISION_SIZE, max(longest_rule_distance, 5))

        num_precision_parsed = 0

        print(f"Precision set (size {len(precision_set)}):", file=f)
        print(f"Precision set (size {len(precision_set)}):")
        print("Eval of precision:")
        for example in tqdm(precision_set):
            try:
                oracle.parse(example)
                print(example, "<----- PASSED", file=f)
                num_precision_parsed += 1
            except OracleInfrastructureError:
                raise
            except ParseException as e:
                print(example, f" <----- FAILURE ({e})", file=f)
                continue

        precision = num_precision_parsed / len(precision_set)
        print(f'Precision: {precision}')
        example_gen_time = time.time()
        num_recall_parsed = 0
        limiter_record = None
        recall_memory_mb = None
        if MEMORY_SAFE_RECALL:
            recall_memory_mb = get_default_recall_memory_mb()
            try:
                limiter_record = preflight_memory_limiter(recall_memory_mb)
            except MemoryLimiterUnavailable as exc:
                message = f"memory_limiter_unavailable: {exc}"
                print(message, file=f)
                print(message, file=sys.stderr)
                raise
            limiter_line = json.dumps(
                {"memory_safe_recall_preflight": limiter_record},
                sort_keys=True,
                separators=(",", ":"),
            )
            print(limiter_line, file=f)
            print(limiter_line)

        if real_recall_set is not None:
            print(f"Recall set (size {len(real_recall_set)}):", file=f)
            print(f"Recall set (size {len(real_recall_set)}):")
            print("Recall eval:")
            for example in tqdm(real_recall_set):
                try:
                    if MEMORY_SAFE_RECALL:
                        parsed, reason = parse_with_limits(
                            parser,
                            example,
                            memory_mb=recall_memory_mb,
                            limiter_backend=limiter_record["backend"],
                        )
                        if not parsed:
                            print(example, f" <----- FAILURE ({reason})", file=f)
                            continue
                    else:
                        parser.parse(example)
                    print(example,"<----- PASSED", file=f)
                    num_recall_parsed += 1
                except UnexpectedInput as e:
                    print(example, f" <----- FAILURE ({e})", file=f)
                    continue
                except (MemoryLimiterUnavailable, RecallEvaluationInfrastructureError):
                    raise
                except Exception as e:
                    raise RecallEvaluationInfrastructureError(
                        f"unexpected parser evaluation failure: {type(e).__name__}: {e}"
                    ) from e
            recall = num_recall_parsed / len(real_recall_set)
            f1 = 2 * (recall * precision) / (recall + precision) if (recall + precision) > 0 else 0
            print(f'Recall: {recall}, Precision: {precision}, F-1: {f1}', file=f)
            print(f'Recall: {recall}, Precision: {precision}, F-1: {f1}')
        else:
            print(
                f'Recall: [no test set provided], Precision: {num_precision_parsed / len(precision_set)}',
                file=f)
            print(
                f'Recall: [no test set provided], Precision: {num_precision_parsed / len(precision_set)}')

        print(f'Example gen time: {example_gen_time - start_time}', file=f)
        print(f'Scoring time: {time.time() - example_gen_time}', file=f)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    
    parser.add_argument(
        'oracle_cmd',
        help=('oracle executable: filename mode invokes `oracle_cmd filename` '
              '(exit 0 accept, 1 reject); --persistent-oracle selects JSONL mode'),
        type=str,
    )
    parser.add_argument('examples_dir', help='folder containing the test (recall) examples', type=str)
    parser.add_argument('log_file', help='log file output from search.py', type=str)
    parser.add_argument('--no-antlr4', help='also output an ANTLR4 grammar file', action='store_true', dest='no_antlr4')
    parser.add_argument('-n', '--precision_set_size', help='size of precision set to sample from learned grammar (default 1000)', type=int, default=1000)
    parser.add_argument('--memory-safe', help='preflight a verified platform memory limiter, then run each recall parse in an isolated child; abort rather than count limiter/timeout/child failures as misses', action='store_true', dest='memory_safe_recall')
    parser.add_argument('--persistent-oracle', help='keep the external oracle process alive and exchange JSON lines', action='store_true')
    parser.add_argument('--oracle-timeout', type=float, default=None,
                        help='per-query oracle timeout in seconds (default: 3 filename, 30 persistent)')
    parser.add_argument('--oracle-max-retries', type=int, default=None,
                        help='bounded retries after an oracle infrastructure failure (default: 1)')
    parser.add_argument('--oracle-failure-dir', type=str, default=None,
                        help='directory for quarantined oracle infrastructure failures')
    args = parser.parse_args()
    
    if args.precision_set_size is not None:
        PRECISION_SIZE = args.precision_set_size
    if args.no_antlr4:
        ANTLR4_OUTPUT = False
    if args.memory_safe_recall:
        MEMORY_SAFE_RECALL = True
    main(
        args.oracle_cmd,
        args.log_file,
        args.examples_dir,
        args.persistent_oracle,
        args.oracle_timeout,
        args.oracle_max_retries,
        args.oracle_failure_dir,
    )

import argparse
import multiprocessing as mp
from pathlib import Path
import random, sys, os, time, string
from typing import Dict, List

from tqdm import tqdm

from parse_tree import ParseTree, ParseNode
from grammar import Grammar, Rule
from start import get_times, START
from lark import Lark
from oracle import CachingOracle, ExternalOracle
from token_expansion import expand_tokens
"""
High-level command line to launch Arvada evaluation.
 
"""
random.seed(0)
PRECISION_SIZE=1000
ANTLR4_OUTPUT=True
MEMORY_SAFE_RECALL=False


def _parse_with_limits_worker(parser, example, memory_mb, result_queue):
    try:
        if memory_mb is not None:
            import resource
            memory_bytes = memory_mb * 1024 * 1024
            resource.setrlimit(resource.RLIMIT_AS, (memory_bytes, memory_bytes))
        parser.parse(example)
        result_queue.put(("ok", None))
    except MemoryError as e:
        result_queue.put(("memory_error", repr(e)))
    except Exception as e:
        result_queue.put(("parse_error", repr(e)))


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


def parse_with_limits(parser, example, timeout_seconds=300):
    """
    Parse a single recall example in an isolated child process.

    This prevents an out-of-memory parse from killing the entire evaluation
    process. A non-success result is treated as a failed recall example.
    """
    memory_mb = get_default_recall_memory_mb()

    ctx = mp.get_context("fork")
    result_queue = ctx.Queue()
    process = ctx.Process(
        target=_parse_with_limits_worker,
        args=(parser, example, memory_mb, result_queue),
    )
    process.start()
    process.join(timeout_seconds)

    if process.is_alive():
        process.terminate()
        process.join()
        return False, "timeout"

    if process.exitcode != 0:
        return False, f"child_exit_{process.exitcode}"

    try:
        status, detail = result_queue.get_nowait()
    except Exception:
        return False, "no_result"

    return status == "ok", detail

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

def main(oracle_cmd, log_file_name, test_examples_folder):
    oracle = ExternalOracle(oracle_cmd)


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
            exit()
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
            except Exception as e:
                print(example, f" <----- FAILURE ({e})", file=f)
                continue

        precision = num_precision_parsed / len(precision_set)
        print(f'Precision: {precision}')
        example_gen_time = time.time()
        num_recall_parsed = 0

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
                        )
                        if not parsed:
                            raise RuntimeError(reason)
                    else:
                        parser.parse(example)
                    print(example,"<----- PASSED", file=f)
                    num_recall_parsed += 1
                except Exception as e:
                    print(example, f" <----- FAILURE ({e})", file=f)
                    continue
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
    
    parser.add_argument('oracle_cmd', help='the oracle command; should be invocable on a filename via `oracle_cmd filename`, and return a non-zero exit code on invalid inputs', type=str)
    parser.add_argument('examples_dir', help='folder containing the test (recall) examples', type=str)
    parser.add_argument('log_file', help='log file output from search.py', type=str)
    parser.add_argument('--no-antlr4', help='also output an ANTLR4 grammar file', action='store_true', dest='no_antlr4')
    parser.add_argument('-n', '--precision_set_size', help='size of precision set to sample from learned grammar (default 1000)', type=int, default=1000)
    parser.add_argument('--memory-safe', help='run each recall parse in a separate child process with a memory limit to avoid OOM killing the evaluator', action='store_true', dest='memory_safe_recall')
    args = parser.parse_args()
    
    if args.precision_set_size is not None:
        PRECISION_SIZE = args.precision_set_size
    if args.no_antlr4:
        ANTLR4_OUTPUT = False
    if args.memory_safe_recall:
        MEMORY_SAFE_RECALL = True
    main(args.oracle_cmd, args.log_file, args.examples_dir)

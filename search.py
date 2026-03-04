import argparse
import random, sys, os, time
from typing import List
from input import parse_input
from parse_tree import ParseTree, ParseNode
from grammar import Grammar, Rule
from token_expansion import initial_token_replacement
from lark import Lark
from oracle import CachingOracle, ExternalOracle
import string, config
from datetime import datetime

random.seed(0)
"""
High-level command line to launch Arvada search.

See __main__ dispatch at the bottom for usage. 
"""

quote = []
def approx_tokenize(oracle, guide_raw:str):

    def get_category(c, idx):
        is_escaped = idx > 0 and guide_raw[idx - 1] == '\\'
        # everything surrounded by quote is grouped
        if len(quote) == 1:
            if c == quote[0] and (not is_escaped or (idx > 1 and guide_raw[idx - 2] == '\\') or c not in guide_raw[idx+1:]):
                # closing quote, but only pop if it's not escaped or the escape is also escaped,
                # or if there is no matching quote later in the string (to avoid grouping on an opening quote with no closing match)
                quote.pop()
                return "QUOTE", False
            else:
                return "STRING", True
        elif c=="\"" or c=="\'" or c=="`":
            # don't group if there is no matching quote
            if idx+1 < len(guide_raw) and c in guide_raw[idx+1:]:
                quote.append(c)
            return "QUOTE", False
        elif not config.SPLIT_UPPER_AND_LOWER and c in string.ascii_letters:
            return "LETTER", True
        elif config.SPLIT_UPPER_AND_LOWER and c in string.ascii_uppercase:
            return "UPPERCASE", True
        elif config.SPLIT_UPPER_AND_LOWER and c in string.ascii_lowercase:
            return "LOWERCASE", True
        elif c in string.digits:
            return "DIGIT", True
        elif not config.GROUP_PUNCTUATION and c in string.punctuation:
            return "PUNCTUATION", False
        elif c in string.whitespace:
            return "WHITESPACE", False
        else:
            return None, False
        

    prev_category = None
    cur_token = ""
    start = True
    tokens: List[ParseNode] = []
    i = 0
    while i < len(guide_raw):
        c = guide_raw[i]
        cur_category, group_ok = get_category(c, i)
        if group_ok and cur_category == prev_category:
            cur_token += c
        else:
            if not start:
                token_rp = initial_token_replacement(oracle, tokens, cur_token, prev_category, guide_raw[i:])
                if prev_category == "STRING" and token_rp is None:
                    # if string identification fails, treat the sequence normally
                    prev_category = "QUOTE"
                    i -= len(cur_token)
                    continue
                if token_rp is not None:
                    tokens.append(ParseNode(token_rp, True, [], prev_category))
            cur_token = c
        prev_category = cur_category
        start = False
        i += 1
    if cur_token != "":
        token_rep = initial_token_replacement(oracle, tokens, cur_token, cur_category, "")
        if token_rep is not None:
            tokens.append(ParseNode(token_rep, True, [], cur_category))
    return tokens


def main_internal(external_folder, log_file, random_guides=False):
    """
    `external_folder`: the base folder for the benchmark, which contains:
      - random-guides: dir of random guide examples
      - guides: dir of minimal guide examples
      - test_set: dir of held-out test examples
      - parse_bench_name: the parser command (oracle). assume bench_name is the
        base (i.e. without parent directories) name of external_folder
    `log_file`: where to write results
    `random_guides`: learn from the guide examples in random-guides instead of guides
    """
    import os
    bench_name = os.path.basename(external_folder)
    if random_guides:
        guide_folder = os.path.join(external_folder, "random-guides")
    else:
        guide_folder = os.path.join(external_folder, "guides-big")
    parser_command = os.path.join(external_folder, f"parse_{bench_name}")

    main(parser_command, guide_folder, log_file)


def main(oracle_cmd, guide_examples_folder,  log_file_name):
    from start import build_start_grammar, get_times

    oracle = ExternalOracle(oracle_cmd)
    if config.USE_PRETOKENIZATION:
       print("Using approximate pre-tokenization stage")

    guide_examples: List[ParseNode] = []
    raw_examples = []
    for filename in sorted(os.listdir(guide_examples_folder)):
        full_filename = os.path.join(guide_examples_folder, filename)
        guide_raw = open(full_filename).read()
        # skip empty seeds
        if not guide_raw:
            continue
        raw_examples.append(guide_raw)
        try:
            
            oracle.parse(guide_raw)

        except Exception as e:
            print("\n xxxInvalid seed input")
            print(full_filename)
            print(guide_raw)
            print(e)
            exit(1)
        if config.USE_PRETOKENIZATION:
            guide = approx_tokenize(oracle, guide_raw)
        else:
            guide = [ParseNode(c, True, []) for c in guide_raw]
        guide_examples.append(guide)
    # print('\n'.join([f"[{i}]" for i in raw_examples]))
    # exit(1)
    has_bracket = sum([1 for g in raw_examples if "(" in g or ")" in g
                       or "[" in g or "]" in g 
                       or "{" in g or "}" in g])
    has_quote = sum([1 for g in raw_examples if "\"" in g or "'" in g])
    average_guide_len = sum([len(g) for g in raw_examples])/len(raw_examples)
    max_guide_len = max([len(g) for g in raw_examples])
    average_token_len = sum([len(guide) for guide in guide_examples])/len(guide_examples)
    max_token_len = max([len(guide) for guide in guide_examples])
    print(f"Average guide length in char: {average_guide_len}, max guide length: {max_guide_len}")
    print(f"Average token length: {average_token_len}, max token length: {max_token_len}")
    print(f"Guides with brackets: {has_bracket}, quotes: {has_quote}")
    # if has_bracket > 0:
    #     bbl_bounds = (3, 8)
    # else:
    #     bbl_bounds = (2, 8)
    bbl_bounds = (3, 10)
    # Create the log file and write positive and negative examples to it
    # Also write the initial starting grammar to the file
    with open(log_file_name, 'w+') as f:

        # Build the starting grammars and test them for compilation
        print('Building the starting grammar...'.ljust(50), end='\r')
        start_time = time.time()
        grammar, hdd_grammar = build_start_grammar(oracle, guide_examples, bbl_bounds)    #start_grammar = no_hdd_grammar
        build_time = time.time() - start_time

        oracle_time_spent = oracle.time_spent
        oracle_parse_calls = oracle.parse_calls
        oracle_real_calls = oracle.real_calls

        print(f'Pickling grammar...')
        import pickle
        

        pickle.dump(hdd_grammar.rules, open(log_file_name + ".gramdict", "wb"))
        pickle.dump(grammar.rules, open(log_file_name + "_no_hdd.gramdict", "wb"))

        print(f'Date: {datetime.now().strftime("%Y-%m-%d %H:%M:%S")}', file=f)
        print(f'Date: {datetime.now().strftime("%Y-%m-%d %H:%M:%S")}')
        print(f'Time spent in oracle calls: {oracle_time_spent}', file=f)
        print(f'Time spent in oracle calls: {oracle_time_spent}')
        print(f'Time spent building grammar: {build_time}s', file=f)
        print(f'Time spent building grammar: {build_time}s', )
        print(f'Scoring time: {time.time() - build_time - start_time}', file=f)
        print(f'Time breakdown: {get_times()}', file=f)
        print(f'Time breakdown: {get_times()}')
        print(f'Parse calls: {oracle_parse_calls}, {oracle_real_calls}')
        print(f'Parse calls: {oracle_parse_calls}, {oracle_real_calls}', file=f)
        from start import LLM_CALLS
        print(f'LLM calls for node labeling: {LLM_CALLS}')
        print(f'LLM calls for node labeling: {LLM_CALLS}', file=f)



if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    
    parser.add_argument('oracle_cmd', help='the oracle command; should be invocable on a filename via `oracle_cmd filename`, and return a non-zero exit code on invalid inputs', type=str)
    parser.add_argument('examples_dir', help='folder containing the training examples', type=str)
    parser.add_argument('log_file', help='name of file to write output log to', type=str)
    
    parser.add_argument('--use_llm', help='use LLM to assist in bubble finding', action='store_true')
    parser.add_argument('--treevada', help='use TreeVada heuristics for more bubbles', action='store_true')
    parser.add_argument('--no-hdd', help='use Hierarchical Delta-debugging for tree-pruning (default)', action='store_true', dest='no_hdd')
    parser.add_argument('--no-pretokenize',  help=f'assign each character to its own leaf node, rather than grouping characters of same class', action='store_true', dest='no_pretokenize')
    parser.add_argument('--group_punctuation', help=f'group sequences of punctuation during pretokenization', action='store_true')
    parser.add_argument('--group_upper_lower',
                                 help=f'group uppercase characters with lowerchase characters during pretokenization', action='store_true')
    #TODO: what is this error?
    args = parser.parse_args()
    
    config.USE_LLM = args.use_llm if args.use_llm else config.USE_LLM
    config.TREEVADA = args.treevada if args.treevada else config.TREEVADA
    config.HDD = not args.no_hdd if args.no_hdd else config.HDD
    config.USE_PRETOKENIZATION = not args.no_pretokenize if args.no_pretokenize else config.USE_PRETOKENIZATION
    config.GROUP_PUNCTUATION = args.group_punctuation if args.group_punctuation else config.GROUP_PUNCTUATION
    config.SPLIT_UPPER_AND_LOWER = args.group_upper_lower if args.group_upper_lower else config.SPLIT_UPPER_AND_LOWER

    main(args.oracle_cmd, args.examples_dir, args.log_file)
    


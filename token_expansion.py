import random
import sys
from typing import List

from grammar import Grammar, Rule
from oracle import ExternalOracle, ParseException
from parse_tree import ParseNode, fixup_terminal

import string

from replacement_utils import get_strings_with_replacement, nt_in_tree

"""
I'm sorry this code is so so so ugly. 

What this does is try to generalize tokens to larger classes. The steps are

1. single digit -> all digits -> all integers -> all digit sequences -> alphanumeric
2. lowercase letter -> all lowercase (sequences) -> all letters (sequences) -> alphanumeric (sequences)
similarly for lowercase and all letters.

There must be a way to reduce code duplication here. I'm not even sure the expansion
to a single token is ever used.... anywhoo, sorry. 
"""

digit_type = 0
uppercase_type = 1
lowercase_type = 2
letter_type = 3
whitespace_type = 4
string_type = 5
punctuation_type = 6

MAX_SAMPLES = 10

whitespace_map = []

def rules_to_add(rule_start: str, symbols: List[str] = None):
    if rule_start == "":
        print("WARNING: Calling rules_to_add with the empty string",file= sys.stderr)
        exit(1)
    if rule_start == "tdigit":
        r = Rule(rule_start)
        for i in range(10):
            r.add_body([f'"{i}"'])
        return [r]
    if rule_start == "tnzdigit":
        r = Rule(rule_start)
        for i in range(1, 10):
            r.add_body([f'"{i}"'])
        return [r]
    if rule_start == "tdigits":
        r = Rule(rule_start)
        r.add_body(['tdigit'])
        r.add_body(["tdigit", "tdigits" ])
        return [r, rules_to_add("tdigit")[0]]
    if rule_start == "tinteger":
        r = Rule(rule_start)
        r.add_body(['tdigit'])
        r.add_body(["tnzdigit", "tdigits" ])
        return [r] + rules_to_add("tdigits") + rules_to_add("tnzdigit")
    if rule_start == "tnzinteger":
        r = Rule(rule_start)
        r.add_body(['tnzdigit'])
        r.add_body(["tnzdigit", "tdigits" ])
        return [r] + rules_to_add("tdigits") + rules_to_add("tnzdigit")
    if rule_start == "talphanum":
        r = Rule(rule_start)
        r.add_body(['tdigit'])
        r.add_body(['tletter'])
        return [r] + rules_to_add("tdigit") + rules_to_add("tletter")
    if rule_start == "tletter":
        r = Rule(rule_start)
        for c in string.ascii_letters:
            r.add_body(([f'"{c}"']))
        return [r]
    if rule_start == "tlower":
        r = Rule(rule_start)
        for c in string.ascii_lowercase:
            r.add_body(([f'"{c}"']))
        return [r]
    if rule_start == "tupper":
        r = Rule(rule_start)
        for c in string.ascii_uppercase:
            r.add_body(([f'"{c}"']))
        return [r]
    if rule_start == "tuppers":
        r = Rule(rule_start)
        r.add_body(['tupper'])
        r.add_body((['tupper', 'tuppers']))
        return [r] + rules_to_add('tupper')
    if rule_start == "tlowers":
        r = Rule(rule_start)
        r.add_body(['tlower'])
        r.add_body((['tlower', 'tlowers']))
        return [r] + rules_to_add('tlower')
    if rule_start == "tletters":
        r = Rule(rule_start)
        r.add_body(['tletter'])
        r.add_body((['tletter', 'tletters']))
        return [r] + rules_to_add('tletter')
    if rule_start == "tupper_lowers":
        r = Rule(rule_start)
        r.add_body(['tupper', 'tlowers'])
        return [r] + rules_to_add('tupper') + rules_to_add('tlowers')
    if rule_start == "talphanums":
        r = Rule(rule_start)
        r.add_body(['talphanum'])
        r.add_body((['talphanum', 'talphanums']))
        return [r] + rules_to_add('talphanum')
    if rule_start == "tletter_alphanums":
        r = Rule(rule_start)
        r.add_body(['tletter', 'talphanums'])
        return [r] + rules_to_add('tletter') + rules_to_add('talphanums')
    if rule_start == "tletter_digits":
        r = Rule(rule_start)
        r.add_body(['tletter', 'tdigits'])
        return [r] + rules_to_add('tletter') + rules_to_add('tdigits')
    if rule_start.startswith("twhitespaces"):
        idx = int(rule_start[12:])
        single = f"twhitespace{idx}"
        r = Rule(rule_start)
        r.add_body([single])
        r.add_body(([single, rule_start]))
        return [r] + rules_to_add(single)

    if rule_start.endswith("_symbol") and symbols is not None:
        r = Rule(rule_start)
        for c in symbols:
            r.add_body(([f'"{c}"']))
        
        return [r]

    if rule_start.startswith("tstring") and symbols is not None:
        r = Rule(rule_start)
        regular, escaped = symbols
        r_char = None
        if regular or escaped:
            r_char = Rule(rule_start + "_char")
            for c in regular:
                r_char.add_body(([f'"{c}"']))
            for c in escaped:
                r_char.add_body(([f'"\\{c}"']))
            r.add_body([r_char.start])
        # check what standard classes are supported
        if rule_start.endswith("digit"):
            r.add_body(['tdigit'])
            if r_char:
                return [r, r_char] + rules_to_add('tdigit')
            else:
                return [r] + rules_to_add('tdigit')
        if rule_start.endswith("letter"):
            r.add_body(['tletter'])
            if r_char:
                return [r, r_char] + rules_to_add('tletter')
            else:
                return [r] + rules_to_add('tletter')
        if rule_start.endswith("alphanum"):
            r.add_body(['talphanum'])
            if r_char:
                return [r, r_char] + rules_to_add('talphanum')
            else:
                return [r] + rules_to_add('talphanum')
        
        if rule_start.endswith("digits"):
            if r_char:
                r_char.add_body(['tdigit'])
                r.add_body([r_char.start, rule_start])
                return [r, r_char] + rules_to_add('tdigit')
            else:
                r.add_body(['tdigits'])
                return [r] + rules_to_add('tdigits')
        if rule_start.endswith("letters"):
            if r_char:
                r_char.add_body(['tletter'])
                r.add_body([r_char.start, rule_start])
                return [r, r_char] + rules_to_add('tletter')
            else:
                r.add_body(['tletters'])
                return [r] + rules_to_add('tletters')
        if rule_start.endswith("alphanums"):
            if r_char:
                r_char.add_body(['talphanum'])
                r.add_body([r_char.start, rule_start])
                return [r, r_char] + rules_to_add('talphanum')
            else:
                r.add_body(['talphanums'])
                return [r] + rules_to_add('talphanums')
        return [r, r_char]

    if rule_start.startswith("twhitespace"):
        idx = int(rule_start[11:])
        r = Rule(rule_start)
        for charset, charset_idx in whitespace_map:
            if charset_idx == idx:
                for c in charset:
                    r.add_body(([f'"{c}"']))
                return [r]
        else:
            print("I didn't find the right rules to add for whitespace!!!!")
            exit(1)

    return []


def try_strings(oracle: ExternalOracle, candidates: List[str]):

    for candidate in candidates:
        try:
            oracle.parse(candidate)
        except ParseException:
            return False
    return True

def initial_token_replacement(oracle: ExternalOracle, token_list: List[ParseNode], cur_token: str, category: str, trailing: str = ""):
    """
    token_list is the list of tokens we've processed so far,
    cur_token will be replaced by a larger member of the same token category
    category is the category of cur_token (e.g., "LETTER", "DIGIT", etc.)
    trailing is the remaining part of the input string that follows cur_token
    """
    preceding = ''.join([t.payload for t in token_list])
    candidates = []
    if category == "STRING":
        candidates.extend([
            random.choice(["0 test#string", "1_test string", "2 test#string"]),
            random.choice(["0teststring", "1teststring"]),
            random.choice(["teststring0", "teststring1"])
        ])

    elif category == "WHITESPACE":
        # if (not preceding) or (preceding and preceding[-1] in string.whitespace) or all(t in string.whitespace for t in trailing):
        # try to delete the token
        if try_strings(oracle, [preceding + trailing]):
            return None

    for rep in candidates:
        if rep == cur_token:
            continue
        if try_strings(oracle, [preceding + rep + trailing]):
            return cur_token

    if category == "STRING":
        return None
    
    return cur_token
    

def generalize_whitespace_in_rule(oracle: ExternalOracle, grammar: Grammar, trees: List[ParseNode], rule_start: str, body_idxs: List[int]):

    existing_bodies = [fixup_terminal(body[0]) for idx, body in enumerate(grammar.rules[rule_start].bodies) if idx in body_idxs]

    ok_chars = dict.fromkeys([c for body in existing_bodies for c in body])
    other_chars = dict.fromkeys([c for c in string.whitespace if c not in ok_chars])

    for c in other_chars:
        c_ok = True
        for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
            candidates = get_strings_with_replacement(tree, rule_start, c)
            if not try_strings(oracle, candidates):
                c_ok = False
                break
        if c_ok:
            ok_chars.add(c)

    longer_whitespaces = []

    for i in range(MAX_SAMPLES):
        leng = random.randint(2, 10)
        ws_str = random.sample(ok_chars, leng)
        longer_whitespaces.append(ws_str)


    for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
        candidates = get_strings_with_replacement(tree, rule_start, longer_whitespaces)
        if not try_strings(oracle, candidates):
            expand_ok = False
            break

    if len(ok_chars) == 1 and not expand_ok:
        return [], ""

    charset_idx = len(whitespace_map)
    for charset, idx in whitespace_map:
        if charset == ok_chars:
            charset_idx = idx
            break

    if expand_ok:
        replace_str = f'twhitespaces{charset_idx}'
    else:
        replace_str = f'twhitespace{charset_idx}'

    return body_idxs, replace_str


def generalize_digits_in_rule(oracle: ExternalOracle, grammar: Grammar, trees: List[ParseNode], rule_start: str, body_idxs: List[int]):

    existing_bodies = [fixup_terminal(body[0]) for idx, body in enumerate(grammar.rules[rule_start].bodies) if idx in body_idxs]

    if all(len(body) == 1 for body in existing_bodies):
        single_digit_candidates = [s for s in string.digits if s not in existing_bodies]
    else:
        single_digit_candidates = []

    single_nzdigit_candidates = [s for s in single_digit_candidates if s != '0']
    nzinteger_candidates = []
    digits_candidates = []
    for i in range(MAX_SAMPLES):
        first_dig = random.choice("123456789")
        leng = random.randint(1, 10)
        other_digs  = random.sample(string.digits, leng)
        nzinteger_candidates.append(first_dig + ''.join(other_digs))
        digits_candidates.append('0' + ''.join(other_digs))
    integer_candidates = nzinteger_candidates + [i for i in string.digits]

    digit_ok = True if single_digit_candidates else False
    nzdigit_ok = digit_ok
    nzints_ok = True
    ints_ok = True
    digits_ok = True

    for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
        # try non-zero only
        if nzdigit_ok:
            candidates = get_strings_with_replacement(tree, rule_start, single_nzdigit_candidates)
            if not try_strings(oracle, candidates):
                nzdigit_ok = False
        if digit_ok:
            candidates = get_strings_with_replacement(tree, rule_start, single_digit_candidates)
            if not try_strings(oracle, candidates):
                digit_ok = False

        if nzints_ok:
            candidates = get_strings_with_replacement(tree, rule_start, nzinteger_candidates)
            if not try_strings(oracle, candidates):
                nzints_ok = False
        if ints_ok:
            candidates = get_strings_with_replacement(tree, rule_start, integer_candidates)
            if not try_strings(oracle, candidates):
                ints_ok = False
        if digits_ok:
            candidates = get_strings_with_replacement(tree, rule_start, digits_candidates)
            if not try_strings(oracle, candidates):
                digits_ok = False
        if not (digit_ok or nzdigit_ok or nzints_ok or ints_ok or digits_ok):
            break

    replace_str = ''
    if digits_ok:
        replace_str = 'tdigits'
    elif ints_ok:
        replace_str = 'tinteger'
    elif nzints_ok:
        replace_str = 'tnzinteger'
    elif digit_ok:
        replace_str = 'tdigit'
    elif nzdigit_ok:
        replace_str = 'tnzdigit'
    if replace_str == "":
        return [], ""
    else:
        return body_idxs, replace_str


def generalize_letters_in_rule(oracle: ExternalOracle, grammar: Grammar, trees: List[ParseNode], rule_start: str, body_idxs: List[int], expansion_type):

    existing_bodies = [fixup_terminal(body[0]) for idx, body in enumerate(grammar.rules[rule_start].bodies) if idx in body_idxs]

    if expansion_type == lowercase_type:
        expansion_set = string.ascii_lowercase
    elif expansion_type == uppercase_type:
        expansion_set = string.ascii_uppercase
    else:
        expansion_set = string.ascii_letters


    if all(len(body) == 1 for body in existing_bodies):
        single_candidates = [s for s in expansion_set if s not in existing_bodies]
        if len(single_candidates) > MAX_SAMPLES:
            single_candidates = random.sample(single_candidates, MAX_SAMPLES - 1)
    else:
        single_candidates = []

    multi_candidates = [''.join(random.sample(expansion_set, random.randint(2, 10))) for _ in range(MAX_SAMPLES)]
    capital_candidates = [random.choice(string.ascii_uppercase) + 
                                  ''.join(random.sample(string.ascii_lowercase, random.randint(1, 10)))
                                    for _ in range(MAX_SAMPLES)]
    
    # will try to expand to single character, multi character, and capitalized multi character
    expand_1_ok = True if single_candidates else False
    expand_multi_ok = True
    expand_Capital_ok = True

    for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
        if expand_1_ok:
            # we only get in here if we have
            candidates = get_strings_with_replacement(tree, rule_start, single_candidates)
            if not try_strings(oracle, candidates):
                expand_1_ok = False
                expand_multi_ok = False
                expand_Capital_ok = False
                break
        if expand_multi_ok:
            candidates = get_strings_with_replacement(tree, rule_start, multi_candidates)
            if not try_strings(oracle, candidates):
                expand_multi_ok = False
                if not (expand_1_ok or expand_Capital_ok): break    #no need to check capitalized if we can't expand to multi
        if expand_Capital_ok:
            candidates = get_strings_with_replacement(tree, rule_start, capital_candidates)
            if not try_strings(oracle, candidates):
                expand_Capital_ok = False
                if not (expand_1_ok or expand_multi_ok): break

    if expand_multi_ok:
        if expansion_type == lowercase_type:
            return body_idxs, 'tlowers'
        elif expansion_type == uppercase_type:
            return body_idxs, 'tuppers'
        else:
            return body_idxs, 'tletters'

    elif expand_Capital_ok:
        return body_idxs, 'tupper_lowers'
    
    elif expand_1_ok:
        if expansion_type == lowercase_type:
            return body_idxs, 'tlower'
        elif expansion_type == uppercase_type:
            return body_idxs, 'tupper'
        else:
            return body_idxs, 'tletter'
    else:
        return [], ""



def generalize_to_alphanum(oracle: ExternalOracle, grammar: Grammar, trees: List[ParseNode], rule_start: str, body_idxs: List[int]):

    existing_bodies = [fixup_terminal(body[0]) for idx, body in enumerate(grammar.rules[rule_start].bodies) if idx in body_idxs]

    expansion_set = string.ascii_letters  + string.digits

    if all(len(body) == 1 for body in existing_bodies):
        single_candidates = [s for s in expansion_set if s not in existing_bodies]
        if len(single_candidates) > MAX_SAMPLES:
            single_candidates = random.sample(single_candidates, MAX_SAMPLES - 1)
        single_candidates.extend(["a", "1"])
    else:
        single_candidates = []


    multi_candidates = [''.join(random.sample(expansion_set, random.randint(2, 10))) for _ in range(MAX_SAMPLES)]
    # JIC we're missing a number or lower case or upper case... :)
    multi_candidates.insert(0, "0a1Te3t")
    # more options: starts with letter then alphanum, starts with letters then digits
    letter_alphanum_candidates = [random.choice(string.ascii_letters) +
                                  ''.join(random.sample(expansion_set, random.randint(1, 10)))
                                      for _ in range(MAX_SAMPLES)]
    letter_alphanum_candidates.insert(0, "a1Te3t")
    letter_digits_candidates = [random.choice(string.ascii_letters) +
                                  ''.join(random.sample(string.digits, random.randint(1, 10)))
                                      for _ in range(MAX_SAMPLES)]

    expand_1_ok = True if single_candidates else False
    expand_multi_ok = True
    expand_letter_alphanum_ok = True
    expand_letter_digits_ok = True

    for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
        if expand_1_ok:
            # we only get in here if we have
            candidates = get_strings_with_replacement(tree, rule_start, single_candidates)
            if not try_strings(oracle, candidates):
                expand_1_ok = False
                expand_multi_ok = False
                expand_letter_alphanum_ok = False
                expand_letter_digits_ok = False
                break
        if expand_multi_ok:
            candidates = get_strings_with_replacement(tree, rule_start, multi_candidates)
            if not try_strings(oracle, candidates):
                expand_multi_ok = False
                if not (expand_1_ok or expand_letter_alphanum_ok
                         or expand_letter_digits_ok): break
        if expand_letter_alphanum_ok:
            candidates = get_strings_with_replacement(tree, rule_start, letter_alphanum_candidates)
            if not try_strings(oracle, candidates):
                expand_letter_alphanum_ok = False
                if not (expand_1_ok or expand_multi_ok or expand_letter_digits_ok): break
        if expand_letter_digits_ok:
            candidates = get_strings_with_replacement(tree, rule_start, letter_digits_candidates)
            if not try_strings(oracle, candidates):
                expand_letter_digits_ok = False
                if not (expand_1_ok or expand_multi_ok or expand_letter_alphanum_ok): break

    if expand_multi_ok:
        return body_idxs, 'talphanums'
    elif expand_letter_alphanum_ok:
        return body_idxs, 'tletter_alphanums'
    elif expand_letter_digits_ok:
        return body_idxs, 'tletter_digits'
    elif expand_1_ok:
        return body_idxs, 'talphanum'
    else:
        return [], ""

def generalize_to_operators(oracle: ExternalOracle, grammar: Grammar, trees: List[ParseNode], rule_start: str, body_idxs: List[int]):

    existing_bodies = set()
    for i in body_idxs[:]:
        if len(grammar.rules[rule_start].bodies[i]) == 1:
            existing_bodies.add(fixup_terminal(grammar.rules[rule_start].bodies[i][0]))
        else:
            body_idxs.remove(i)
    expansion_set = string.punctuation

    accepted_1 = set()
    for i in expansion_set:
        candidates_1 = []
        for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
            candidates_1.extend(get_strings_with_replacement(tree, rule_start, [f" {i} "]))
        if try_strings(oracle, candidates_1):
            accepted_1.add(i)

    if len(accepted_1) > len(existing_bodies):
        return body_idxs, f"{rule_start}_symbol", tuple(accepted_1)
    else:
        return [], "", []

def generalize_to_strings(oracle: ExternalOracle, grammar: Grammar, trees: List[ParseNode], rule_start: str, body_idxs: List[int]):

    existing_bodies = [fixup_terminal(body[0]) for idx, body in enumerate(grammar.rules[rule_start].bodies) if idx in body_idxs]
    tree_1 = random.choice([tree for tree in trees if nt_in_tree(tree, rule_start)])

    alphanums_ok = True if try_strings(oracle, get_strings_with_replacement(tree_1, rule_start, ["teststring1"])) else False
    letters_ok = True if try_strings(oracle, get_strings_with_replacement(tree_1, rule_start, ["teststring"])) else False
    letter_ok = True if try_strings(oracle, get_strings_with_replacement(tree_1, rule_start, ["a"])) else False
    digits_ok = True if try_strings(oracle, get_strings_with_replacement(tree_1, rule_start, ["12345"])) else False
    digit_ok = True if try_strings(oracle, get_strings_with_replacement(tree_1, rule_start, ["1"])) else False
    
    expansion_set = string.punctuation + " \n\t\r"
    single_candidates = [s for s in expansion_set]
    single_candidates.append("")
    
    regular = set()
    escaped = set()
    for i in single_candidates:
        candidates_1 = []
        for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
            candidates_1.extend(get_strings_with_replacement(tree, rule_start, [f"{i}"]))
        if try_strings(oracle, candidates_1):
            regular.add(i)
        else:
            candidates_1 = []
            for tree in [tree for tree in trees if nt_in_tree(tree, rule_start)]:
                candidates_1.extend(get_strings_with_replacement(tree, rule_start, [f"\\{i}"]))
            if try_strings(oracle, candidates_1):
                escaped.add(i)

    if alphanums_ok:
        return body_idxs, "tstring_alphanums", (tuple(regular), tuple(escaped))
    if letters_ok:
        return body_idxs, "tstring_letters", (tuple(regular), tuple(escaped))
    if digits_ok:
        return body_idxs, "tstring_digits", (tuple(regular), tuple(escaped))
    if digit_ok and letter_ok:
        return body_idxs, "tstring_alphanum", (tuple(regular), tuple(escaped))
    if letter_ok:
        return body_idxs, "tstring_letter", (tuple(regular), tuple(escaped))
    if digit_ok:
        return body_idxs, "tstring_digit", (tuple(regular), tuple(escaped))
    if len(regular) + len(escaped) > len(existing_bodies):
        regular.update(existing_bodies)
        return body_idxs, f"tstring_{rule_start}", (tuple(regular), tuple(escaped))

    else:
        return [], "", ()
    

def expand_tokens(oracle : ExternalOracle, grammar : Grammar, trees: List[ParseNode]):
    """
    The idea is to expand the terminal tokens of the grammar as permited by "oracle".

    Currently only expands alphanumerics (not whitespace or punctuation)
    """
    rule_starts = set(grammar.rules.keys())
    def is_terminal(elem):
        return elem not in rule_starts

    original_rules = list(grammar.rules.items())
    for rule_start, rule in original_rules:
        idxs_to_replace = set()
        bodies_to_add = set()
        bodies = rule.bodies
        terminal_body_idxs = [idx for idx, body in enumerate(bodies) if len(body) == 1 and fixup_terminal(body[0]) in grammar.lex_types]
        if len(terminal_body_idxs) == 0:
            # Nothing <t>o expand here, folks
            continue
        replace_str = ""
        printables = None
        idxs_by_type = classify_terminals_by_type(bodies, terminal_body_idxs, grammar.lex_types)
        # digit_type = 0, uppercase_type = 1, lowercase_type = 2, letter_type = 3, whitespace_type = 4, string_type = 5, punctuation_type = 6
        # Digit expansion...
        if idxs_by_type[digit_type]:
            digit_bodies_to_replace, replace_str = generalize_digits_in_rule(oracle, grammar, trees, rule_start, idxs_by_type[digit_type])
            if replace_str != "":
                if "digit" in replace_str:
                    t_r, r_str = generalize_to_alphanum(oracle, grammar, trees, rule_start, idxs_by_type[digit_type])
                    if r_str != "":
                        digit_bodies_to_replace = t_r
                        replace_str = r_str
                idxs_to_replace.update(digit_bodies_to_replace)
                bodies_to_add.add((replace_str, None))

        if idxs_by_type[letter_type]:
            for l_type in [uppercase_type, lowercase_type]:
                letter_bodies_to_replace, replace_str = generalize_letters_in_rule(oracle, grammar, trees, rule_start, idxs_by_type[letter_type], l_type)
                if replace_str != "":
                    lbt_r, r_str = generalize_letters_in_rule(oracle, grammar, trees, rule_start, idxs_by_type[letter_type], letter_type)
                    if r_str != "":
                            letter_bodies_to_replace = lbt_r
                            replace_str = r_str
                            lbt_r, r_str = generalize_to_alphanum(oracle, grammar, trees, rule_start,
                                                                    idxs_by_type[letter_type])
                            if r_str != "":
                                letter_bodies_to_replace = lbt_r
                                replace_str = r_str

                    idxs_to_replace.update(letter_bodies_to_replace)
                    bodies_to_add.add((replace_str, None))
        # TODO: add cases for upper and lowercase in case those are split in pretokenization
        # skip whitespace for now
        # if idxs_by_type[whitespace_type]:
        #     whitespace_bodies_to_replace, replace_str = generalize_to_alphanum(oracle, grammar, trees, rule_start,
        #                                                                         idxs_by_type[whitespace_type])
        #     if replace_str != "":
        #         idxs_to_replace.update(whitespace_bodies_to_replace)
        #         bodies_to_add.add((replace_str, None))
        
        if idxs_by_type[punctuation_type]:
            
            pb_tr, pb_r_str, printables = generalize_to_operators(oracle, grammar, trees, rule_start, idxs_by_type[punctuation_type])
            if pb_r_str != "":
                idxs_to_replace.update(pb_tr)
                bodies_to_add.add((pb_r_str, printables))

        if idxs_by_type[string_type]:
            sb_tr, sb_r_str, printables = generalize_to_strings(oracle, grammar, trees, rule_start, idxs_by_type[string_type])
            if sb_r_str != "":
                idxs_to_replace.update(sb_tr)
                bodies_to_add.add((sb_r_str, printables))

        for body_idx in sorted(idxs_to_replace, reverse = True):
            rule.bodies.pop(body_idx)
        for nt_name, printables in sorted(bodies_to_add):
            rule.add_body([nt_name])
            rs_to_add = rules_to_add(nt_name, printables) if printables is not None else rules_to_add(nt_name)
            for r_to_add in rs_to_add:
                if r_to_add.start not in grammar.rules:
                    grammar.add_rule(r_to_add)

    return grammar


def classify_terminals_by_type(bodies, terminal_body_idxs, lex_types):
    """
    Find the upper (generalizable) character class for all the terminal bodies in bodies
    """
    idxs_by_type = {digit_type: [], uppercase_type: [], lowercase_type: [], letter_type: [], whitespace_type: [], string_type: [], punctuation_type: []}
    for idx in terminal_body_idxs:
        body = bodies[idx][0]
        body = fixup_terminal(body)
        if lex_types[body] == "DIGIT":
            idxs_by_type[digit_type].append(idx)
        elif lex_types[body] == "WHITESPACE":
            idxs_by_type[whitespace_type].append(idx)
        elif lex_types[body] == "LOWERCASE":
            idxs_by_type[lowercase_type].append(idx)
        elif lex_types[body] == "UPPERCASE":
            idxs_by_type[uppercase_type].append(idx)
        elif lex_types[body] == "LETTER":
            idxs_by_type[letter_type].append(idx)
        elif lex_types[body] == "STRING":
            idxs_by_type[string_type].append(idx)
        elif lex_types[body] == "PUNCTUATION":
            idxs_by_type[punctuation_type].append(idx)
    return idxs_by_type

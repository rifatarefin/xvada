from __future__ import annotations

import re
import unittest

import config
from oracle import ParseException
from parse_tree import ParseNode, build_grammar
from start import build_naive_parse_trees, minimize
from token_expansion import (
    expand_tokens,
)


class AcceptingOracle:
    def parse(self, _text: str) -> bool:
        return True


class CanonicalUnsignedIntegerOracle:
    def parse(self, text: str) -> bool:
        if not text.isdigit() or (
            len(text) > 1 and text.startswith("0")
        ):
            raise ParseException("not a canonical unsigned integer")
        return True


class ConstructorValueOracle:
    def parse(self, text: str) -> bool:
        if text == "D[24,D[]]":
            return True
        if (
            text.startswith("V4[")
            and text.endswith("]")
        ):
            value = text[3:-1]
            if value.isdigit() and (
                len(value) == 1 or not value.startswith("0")
            ):
                return True
        raise ParseException("outside constructor/value test boundary")


class ConstructorHexFloatOracle:
    pattern = re.compile(
        r"V6\[0x(?:0\.0p\+0|"
        r"1\.[0-9a-f]{5}[02468ace]0{7}p[+-][0-9]+)\]\Z"
    )

    def parse(self, text: str) -> bool:
        if text == "D[24,D[]]":
            return True
        if self.pattern.fullmatch(text):
            return True
        raise ParseException("outside canonical V6 test boundary")


def one_token_tree(
    nonterminal: str,
    value: str,
    lex_type: str,
) -> ParseNode:
    terminal = ParseNode(value, True, [], lex_type=lex_type)
    token = ParseNode(nonterminal, False, [terminal])
    root = ParseNode("stmt", False, [token])
    root.update_cache_info()
    return root


class RecallFocusedTokenExpansionTests(unittest.TestCase):
    def setUp(self) -> None:
        self.previous = config.RECALL_FOCUSED_TOKEN_EXPANSION
        self.previous_constructor_aware = (
            config.CONSTRUCTOR_AWARE_BRACKETS
        )
        self.previous_constructor_roles = (
            config.CONSTRUCTOR_ROLE_AWARE_BRACKETS
        )
        self.previous_value_roles = (
            config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES
        )
        self.previous_v6_semantic = (
            config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES
        )
        config.RECALL_FOCUSED_TOKEN_EXPANSION = True

    def tearDown(self) -> None:
        config.RECALL_FOCUSED_TOKEN_EXPANSION = self.previous
        config.CONSTRUCTOR_AWARE_BRACKETS = (
            self.previous_constructor_aware
        )
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = (
            self.previous_constructor_roles
        )
        config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES = (
            self.previous_value_roles
        )
        config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES = (
            self.previous_v6_semantic
        )

    def test_quoted_string_generalization_retains_original_terminal(
        self,
    ) -> None:
        tree = one_token_tree(
            "tensor_name",
            "output_norm.weight",
            "STRING",
        )
        grammar = expand_tokens(
            AcceptingOracle(),
            build_grammar([tree]),
            [tree],
        )
        bodies = grammar.rules["tensor_name"].bodies
        self.assertIn(['"output_norm.weight"'], bodies)
        self.assertTrue(
            any(
                body != ['"output_norm.weight"']
                for body in bodies
            ),
            bodies,
        )
        grammar.parser().parse("output_norm.weight")

    def test_integer_generalization_is_deterministic_and_preserving(
        self,
    ) -> None:
        first = one_token_tree("integer_value", "24", "DIGIT")
        second = one_token_tree("integer_value", "8192", "DIGIT")
        grammar = expand_tokens(
            CanonicalUnsignedIntegerOracle(),
            build_grammar([first, second]),
            [first, second],
        )
        bodies = grammar.rules["integer_value"].bodies
        self.assertIn(['"24"'], bodies)
        self.assertIn(['"8192"'], bodies)
        self.assertTrue(
            any(
                body and body[0] in {"tinteger", "tnzinteger"}
                for body in bodies
            ),
            bodies,
        )
        grammar.parser().parse("40960")

    def test_constructor_value_role_expands_without_dimension_leaf(
        self,
    ) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = True
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = True
        config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES = True

        def leaves(parts: list[tuple[str, str]]) -> list[ParseNode]:
            return [
                ParseNode(payload, True, [], lex_type)
                for payload, lex_type in parts
            ]

        punctuation = "PUNCTUATION"
        inputs = [
            leaves(
                [
                    ("V", "LETTER"),
                    ("4", "DIGIT"),
                    ("[", punctuation),
                    ("24", "DIGIT"),
                    ("]", punctuation),
                ]
            ),
            leaves(
                [
                    ("V", "LETTER"),
                    ("4", "DIGIT"),
                    ("[", punctuation),
                    ("8192", "DIGIT"),
                    ("]", punctuation),
                ]
            ),
            leaves(
                [
                    ("D", "LETTER"),
                    ("[", punctuation),
                    ("24", "DIGIT"),
                    (",", punctuation),
                    ("D", "LETTER"),
                    ("[", punctuation),
                    ("]", punctuation),
                    ("]", punctuation),
                ]
            ),
        ]
        oracle = ConstructorValueOracle()
        trees = build_naive_parse_trees(inputs, [], oracle)
        grammar = expand_tokens(
            oracle,
            build_grammar(trees),
            trees,
        )
        value_bodies = grammar.rules[
            "role_value_v4_digit_0"
        ].bodies
        self.assertIn(['"24"'], value_bodies)
        self.assertIn(['"8192"'], value_bodies)
        self.assertTrue(
            any(
                body
                and body[0] in {"tinteger", "tnzinteger"}
                for body in value_bodies
            ),
            value_bodies,
        )
        shared_dimension_rule = grammar.rules["24"]
        self.assertEqual(shared_dimension_rule.bodies, [['"24"']])
        minimized = minimize(grammar)
        minimized.parser().parse("V4[40960]")
        minimized.parser().parse("D[24,D[]]")
        with self.assertRaises(Exception):
            minimized.parser().parse("D[40960,D[]]")

    def test_v6_mantissa_expands_only_to_lowercase_hex_digits(
        self,
    ) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = True
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = True
        config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES = True
        config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES = True

        def leaves(parts: list[tuple[str, str]]) -> list[ParseNode]:
            return [
                ParseNode(payload, True, [], lex_type)
                for payload, lex_type in parts
            ]

        punctuation = "PUNCTUATION"
        inputs = [
            leaves(
                [
                    ("V", "LETTER"),
                    ("6", "DIGIT"),
                    ("[", punctuation),
                    ("0", "DIGIT"),
                    ("x", "LOWERCASE"),
                    ("1", "DIGIT"),
                    (".", punctuation),
                    ("0000000000000", "DIGIT"),
                    ("p", "LOWERCASE"),
                    ("-", punctuation),
                    ("1", "DIGIT"),
                    ("]", punctuation),
                ]
            ),
            leaves(
                [
                    ("V", "LETTER"),
                    ("6", "DIGIT"),
                    ("[", punctuation),
                    ("0", "DIGIT"),
                    ("x", "LOWERCASE"),
                    ("1", "DIGIT"),
                    (".", punctuation),
                    ("312", "DIGIT"),
                    ("d", "LOWERCASE"),
                    ("000000000", "DIGIT"),
                    ("p", "LOWERCASE"),
                    ("+", punctuation),
                    ("22", "DIGIT"),
                    ("]", punctuation),
                ]
            ),
            leaves(
                [
                    ("D", "LETTER"),
                    ("[", punctuation),
                    ("24", "DIGIT"),
                    (",", punctuation),
                    ("D", "LETTER"),
                    ("[", punctuation),
                    ("]", punctuation),
                    ("]", punctuation),
                ]
            ),
        ]
        oracle = ConstructorHexFloatOracle()
        trees = build_naive_parse_trees(inputs, [], oracle)
        grammar = expand_tokens(
            oracle,
            build_grammar(trees),
            trees,
        )
        mantissa_bodies = grammar.rules[
            "role_value_v6_nonzero_mantissa"
        ].bodies
        self.assertIn(["tfloat32mantissa"], mantissa_bodies)
        self.assertEqual(
            grammar.rules["24"].bodies,
            [['"24"']],
        )
        minimized = minimize(grammar)
        minimized.parser().parse(
            "V6[0x1.abcdea0000000p+4]"
        )
        minimized.parser().parse(
            "V6[0x1.e000000000000p-4]"
        )
        minimized.parser().parse("D[24,D[]]")
        with self.assertRaises(Exception):
            minimized.parser().parse(
                "V6[0x1.g000000000000p+4]"
            )
        with self.assertRaises(Exception):
            minimized.parser().parse(
                "V6[0x1.abcdef0123456p+4]"
            )
        with self.assertRaises(Exception):
            minimized.parser().parse("D[40960,D[]]")


if __name__ == "__main__":
    unittest.main()

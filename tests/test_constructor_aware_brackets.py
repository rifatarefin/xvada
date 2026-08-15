from __future__ import annotations

import unittest

import config
from parse_tree import ParseNode, build_grammar
from start import build_naive_parse_trees, semanticize_v6_float_leaves


class AcceptingOracle:
    def parse(self, _text: str) -> bool:
        return True


def character_leaves(text: str) -> list[ParseNode]:
    return [ParseNode(character, True, []) for character in text]


def token_leaves(
    tokens: list[tuple[str, str]],
) -> list[ParseNode]:
    return [
        ParseNode(payload, True, [], lex_type)
        for payload, lex_type in tokens
    ]


def descendants(root: ParseNode) -> list[ParseNode]:
    result = [root]
    for child in root.children:
        if not child.is_terminal:
            result.extend(descendants(child))
    return result


class ConstructorAwareBracketTests(unittest.TestCase):
    def setUp(self) -> None:
        self.previous = config.CONSTRUCTOR_AWARE_BRACKETS
        self.previous_constructor_roles = (
            config.CONSTRUCTOR_ROLE_AWARE_BRACKETS
        )
        self.previous_value_roles = (
            config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES
        )
        self.previous_v6_semantic = (
            config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES
        )
        self.previous_sentinel = (
            config.SENTINEL_ROLE_AWARE_BRACKETS
        )

    def tearDown(self) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = self.previous
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = (
            self.previous_constructor_roles
        )
        config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES = (
            self.previous_value_roles
        )
        config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES = (
            self.previous_v6_semantic
        )
        config.SENTINEL_ROLE_AWARE_BRACKETS = (
            self.previous_sentinel
        )

    def build(self, text: str) -> ParseNode:
        trees = build_naive_parse_trees(
            [character_leaves(text)],
            [],
            AcceptingOracle(),
        )
        self.assertEqual(len(trees), 1)
        self.assertEqual(trees[0].derived_string(), text)
        return trees[0]

    def test_preserves_exact_typed_cons_bytes_and_nests_roles(self) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = True
        text = (
            'E[3,l,z,M[R["general.architecture",'
            'V8["mistral3"]],M[]],T[]]\\n'
        )
        tree = self.build(text)
        derived = [node.derived_string() for node in descendants(tree)]
        self.assertIn(
            'E[3,l,z,M[R["general.architecture",'
            'V8["mistral3"]],M[]],T[]]',
            derived,
        )
        self.assertIn(
            'M[R["general.architecture",V8["mistral3"]],M[]]',
            derived,
        )
        self.assertIn('R["general.architecture",V8["mistral3"]]', derived)
        self.assertIn('V8["mistral3"]', derived)
        self.assertIn("M[]", derived)
        self.assertIn("T[]", derived)
        self.assertNotIn("[]", derived)

    def test_default_bracket_tree_keeps_constructor_as_sibling(self) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = False
        tree = self.build("M[]")
        derived = [node.derived_string() for node in descendants(tree)]
        self.assertIn("[]", derived)

    def test_sentinel_roles_share_initial_nonterminals(self) -> None:
        config.SENTINEL_ROLE_AWARE_BRACKETS = True
        text = "[![;,[^[^,97],[^,98]],[;]],[|]]\n"
        tree = self.build(text)
        self.assertEqual(tree.derived_string(), text)
        nodes = descendants(tree)
        text_nodes = [
            node
            for node in nodes
            if node.derived_string() in {"[^,97]", "[^,98]"}
        ]
        self.assertEqual(len(text_nodes), 2)
        self.assertEqual(
            {node.payload for node in text_nodes},
            {"role_5e"},
        )
        list_payloads = {
            node.payload
            for node in nodes
            if node.derived_string().startswith("[;")
        }
        self.assertEqual(list_payloads, {"role_3b"})

    def test_sentinel_role_sharing_builds_list_recurrence(self) -> None:
        config.SENTINEL_ROLE_AWARE_BRACKETS = True
        tree = self.build("[![;,[$[^,97],[&4,1]],[;]],[|]]\n")
        grammar = build_grammar([tree])
        bodies = grammar.rules["role_3b"].bodies
        self.assertTrue(
            any("role_3b" in body for body in bodies),
            bodies,
        )
        self.assertGreaterEqual(len(bodies), 2)

    def test_constructor_roles_build_explicit_m_t_recurrence(self) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = True
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = True
        text = (
            'E[3,l,z,M[R["a",V4[24]],'
            'M[R["b",V4[8192]],M[]]],T[]]\n'
        )
        tree = self.build(text)
        nodes = descendants(tree)
        metadata_nodes = [
            node
            for node in nodes
            if node.derived_string().startswith("M[")
        ]
        self.assertGreaterEqual(len(metadata_nodes), 3)
        self.assertEqual(
            {node.payload for node in metadata_nodes},
            {"role_constructor_m"},
        )
        grammar = build_grammar([tree])
        metadata_bodies = grammar.rules[
            "role_constructor_m"
        ].bodies
        self.assertTrue(
            any(
                "role_constructor_m" in body
                for body in metadata_bodies
            ),
            metadata_bodies,
        )
        self.assertIn("role_constructor_t", grammar.rules)

    def test_value_leaves_are_separate_from_dimensions_offsets(self) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = True
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = True
        config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES = True
        punctuation = "PUNCTUATION"
        tokens = [
            ("E", "LETTER"), ("[", punctuation),
            ("3", "DIGIT"), (",", punctuation),
            ("l", "LETTER"), (",", punctuation),
            ("z", "LETTER"), (",", punctuation),
            ("M", "LETTER"), ("[", punctuation),
            ("R", "LETTER"), ("[", punctuation),
            ('"', punctuation), ("a", "STRING"),
            ('"', punctuation), (",", punctuation),
            ("V", "LETTER"), ("4", "DIGIT"),
            ("[", punctuation), ("24", "DIGIT"),
            ("]", punctuation), ("]", punctuation),
            (",", punctuation),
            ("M", "LETTER"), ("[", punctuation),
            ("R", "LETTER"), ("[", punctuation),
            ('"', punctuation), ("b", "STRING"),
            ('"', punctuation), (",", punctuation),
            ("V", "LETTER"), ("4", "DIGIT"),
            ("[", punctuation), ("8192", "DIGIT"),
            ("]", punctuation), ("]", punctuation),
            (",", punctuation),
            ("M", "LETTER"), ("[", punctuation),
            ("]", punctuation), ("]", punctuation),
            ("]", punctuation), (",", punctuation),
            ("T", "LETTER"), ("[", punctuation),
            ("X", "LETTER"), ("[", punctuation),
            ('"', punctuation), ("x", "STRING"),
            ('"', punctuation), (",", punctuation),
            ("G", "LETTER"), ("[", punctuation),
            ("1", "DIGIT"), ("]", punctuation),
            (",", punctuation), ("24", "DIGIT"),
            (",", punctuation), ("D", "LETTER"),
            ("[", punctuation), ("24", "DIGIT"),
            (",", punctuation), ("D", "LETTER"),
            ("[", punctuation), ("]", punctuation),
            ("]", punctuation), ("]", punctuation),
            (",", punctuation), ("T", "LETTER"),
            ("[", punctuation), ("]", punctuation),
            ("]", punctuation), ("]", punctuation),
            ("\n", "WHITESPACE"),
        ]
        trees = build_naive_parse_trees(
            [token_leaves(tokens)],
            [],
            AcceptingOracle(),
        )
        self.assertEqual(len(trees), 1)
        tree = trees[0]
        self.assertEqual(
            tree.derived_string(),
            (
                'E[3,l,z,M[R["a",V4[24]],'
                'M[R["b",V4[8192]],M[]]],'
                'T[X["x",G[1],24,D[24,D[]]],T[]]]\n'
            ),
        )
        grammar = build_grammar([tree])
        value_rule = grammar.rules["role_value_v4_digit_0"]
        self.assertEqual(
            {tuple(body) for body in value_rule.bodies},
            {('"24"',), ('"8192"',)},
        )
        dimension_or_offset_nodes = [
            node
            for node in descendants(tree)
            if (
                node.derived_string() == "24"
                and node.payload != "role_value_v4_digit_0"
            )
        ]
        self.assertGreaterEqual(len(dimension_or_offset_nodes), 2)
        self.assertTrue(
            all(
                not node.payload.startswith("role_value_")
                for node in dimension_or_offset_nodes
            )
        )

    def test_v6_mantissa_leaves_receive_constructor_local_roles(self) -> None:
        config.CONSTRUCTOR_AWARE_BRACKETS = True
        config.CONSTRUCTOR_ROLE_AWARE_BRACKETS = True
        config.CONSTRUCTOR_VALUE_ROLE_AWARE_LEAVES = True
        config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES = True
        punctuation = "PUNCTUATION"
        tokens = [
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
        trees = build_naive_parse_trees(
            [token_leaves(tokens)],
            [],
            AcceptingOracle(),
        )
        self.assertEqual(len(trees), 1)
        tree = trees[0]
        self.assertEqual(
            tree.derived_string(),
            "V6[0x1.0000000000000p-1]",
        )
        grammar = build_grammar([tree])
        self.assertEqual(
            grammar.rules[
                "role_value_v6_nonzero_mantissa"
            ].bodies,
            [['"0000000000000"']],
        )
        self.assertIn("role_constructor_v6", grammar.rules)

    def test_v6_semantic_retokenization_preserves_exact_bytes(self) -> None:
        config.CONSTRUCTOR_V6_SEMANTIC_FLOAT_LEAVES = True
        punctuation = "PUNCTUATION"
        original = token_leaves(
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
        )
        semantic = semanticize_v6_float_leaves(original)
        self.assertEqual(
            "".join(node.payload for node in semantic),
            "V6[0x1.312d000000000p+22]",
        )
        self.assertEqual(
            [node.payload for node in semantic],
            [
                "V",
                "6",
                "[",
                "0",
                "x",
                "1",
                ".",
                "312d000000000",
                "p",
                "+",
                "22",
                "]",
            ],
        )

if __name__ == "__main__":
    unittest.main()

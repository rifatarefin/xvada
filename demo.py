import lark

from crucio.data_types import Grammar, Rule, Prod, Symbol
from crucio.grammar_tool.Parser import STParser, larkTree2SyntaxNode
from crucio.token import Token

grammar = Grammar('n0',[Rule('n0',[Prod('n0',(Symbol(Token('A')),))])])
print(grammar)
print(grammar.getParser().parse('A'))
print(larkTree2SyntaxNode(grammar.getParser().parse('A')))
print(STParser(grammar).parse((Token('A'),)))
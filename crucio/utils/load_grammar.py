from typing import List

from crucio.data_types.grammar import Rule, SymbolType, Symbol, Prod, Grammar
from crucio.token import Token

SimpleLarkGrammar = r"""
start: stmt*
stmt: SYMBOL ":" ( ( expr "|" ) * expr )?
expr: term*
tag: rep0 | rep1 | opt
term: SYMBOL tag? | STRING_LITERAL tag?
rep0: "*"
rep1: "+"
opt: "?"
STRING_LITERAL: /"[^"]*"/
SYMBOL: /[a-zA-Z_][a-zA-Z0-9_']*/
%ignore /\s+/
"""
import lark


def containsUppercase(s):
    for char in s:
        if char.isupper():
            return True
    return False


def convertStmt2rule(stmt) -> Rule:
    tagMap = {"rep0": SymbolType.Rep0, "rep1": SymbolType.Rep1, "opt": SymbolType.Opt}
    nt = stmt.children[0].value
    prods = []
    for exprTree in stmt.children[1:]:
        symbols = []
        for term in exprTree.children:
            symbolType = SymbolType.Default
            value = term.children[0].value
            if len(term.children) != 1:
                symbolType = tagMap[term.children[1].children[0].data]
            if containsUppercase(value):
                symbols.append(Symbol(Token(value, None), symbolType))
            else:
                symbols.append(Symbol(value, symbolType))
        prods.append(Prod(nt, symbols))
    return Rule(nt, prods)


def loadRules(larkStr: str) -> List[Rule]:
    simpleLarkParser = lark.Lark(SimpleLarkGrammar)
    tree = simpleLarkParser.parse(larkStr)
    rules = []
    for stmt in tree.children:
        rules.append(convertStmt2rule(stmt))
    return rules


def loadProd(larkStr: str) -> Prod:
    return loadRules(larkStr)[0].getProds()[0]


def loadGrammar(larkStr: str) -> Grammar:
    start = None
    rules = []
    for rule in loadRules(larkStr):
        if rule.getNt() == 'start':
            start = rule.getProds()[0].getSymbols()[0].getValue()
            continue
        rules.append(rule)
    grammar = Grammar(start, rules)
    return grammar



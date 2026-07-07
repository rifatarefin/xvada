from abc import abstractmethod
from typing import Tuple, Sequence

from crucio.data_types import Grammar, Symbol
from crucio.instantiate.node.node_grow import SyntaxNodeGrower
from crucio.instantiate.node.syntax_node import SyntaxNode
from crucio.token import Token, Tokens


class SymbolInstantiator:
    def __init__(self, grammar: Grammar) -> None:
        self._grammar = grammar
        self._tmpUsage = None

    @abstractmethod
    def instantiateSymbol(self, symbol: Symbol) -> Tuple[Token]:
        pass

    def instantiateNt(self, nt: str = None) -> Tuple[Token]:
        if nt is None:
            nt = self._grammar.getStart()
        return self.instantiateSymbol(Symbol(nt))

    def instantiate(self, symbols: Sequence[Symbol]) -> Tuple[Token]:
        ret = ()
        for symbol in symbols:
            ret = ret + self.instantiateSymbol(symbol)
        return ret

    def getGrammar(self) -> Grammar:
        return self._grammar


class SngSymbolInstantiator(SymbolInstantiator):
    def __init__(self, sng: SyntaxNodeGrower) -> None:
        super().__init__(sng.getGrammar())
        self.__sng = sng

    def instantiateSymbol(self, symbol: Symbol) -> Tokens:
        while True:
            try:
                return self.__sng.grow(SyntaxNode(symbol)).toTokens()
            except RecursionError:
                continue

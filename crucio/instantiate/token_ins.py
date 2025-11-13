from abc import abstractmethod
from typing import Sequence

from crucio.token import Token


class TokenInstantiator:
    @abstractmethod
    def instantiate(self, tokens: Sequence[Token]):
        pass


class DefaultTokenInstantiator(TokenInstantiator):
    def instantiate(self, tokens: Sequence[Token]):
        return ''.join([i.value if i.value is not None else i.type for i in tokens])




class SepTokenInstantiator(TokenInstantiator):
    def __init__(self, sep: str = ' '):
        self.sep = sep

    def instantiate(self, tokens: Sequence[Token]):
        return self.sep.join([i.value if i.value is not None else i.type for i in tokens])

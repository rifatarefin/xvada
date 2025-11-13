from abc import abstractmethod
from typing import Collection, Tuple

from crucio.utils import str1


class Token:
    def __init__(self, ttype, value=None) -> None:
        self.__type = ttype
        self.__value = value

    @property
    def type(self):
        return self.__type

    @property
    def value(self):
        return self.__value

    def __str__(self):
        return self.type

    def __lt__(self, other):
        return isinstance(other, Token) and self.__type < other.__type

    def __repr__(self):
        return 'Token(%s,%s)' % (repr(self.type), repr(self.value))

    def __hash__(self) -> int:
        return hash(self.__type)

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, Token):
            return False
        return self.__type == other.__type


Tokens = Tuple[Token, ...]


class SupportAssembly:
    @abstractmethod
    def assembly(self, value: Tokens) -> Tokens:
        pass

    def assembly_one(self,token:Token) -> Tokens:
        return self.assembly((token,))

class TokenizedContext(SupportAssembly):
    def __init__(self, prefix: Tokens, suffix: Tokens) -> None:
        self.__prefix = tuple(prefix)
        self.__suffix = tuple(suffix)

    def assembly(self, value: Tokens) -> Tokens:
        return self.__prefix + tuple(value) + self.__suffix

    def __len__(self):
        return len(self.getPrefix())+len(self.getSuffix())

    def getPrefix(self) -> Tokens:
        return self.__prefix

    def getSuffix(self) -> Tokens:
        return self.__suffix

    def __str__(self):
        return str1(self.__prefix + ('s', 's') + self.__suffix)

    def __repr__(self):
        return str(self)

    def __hash__(self):
        return hash((self.__prefix, self.__suffix))

    def __eq__(self, other):
        return isinstance(other,TokenizedContext) and self.__suffix == other.__suffix and self.__prefix == other.__prefix


class Tokenizer:
    @abstractmethod
    def tokenize(self, sentence: str) -> Tokens:
        pass

    def tokenizeAll(self, sentences: Collection[str]) -> Tuple[Tokens, ...]:
        ret = []
        for sentence in sentences:
            ret.append(self.tokenize(sentence))
        return tuple(ret)



def pretty_tokens(tokens):
    return ' '.join(i.value if i.value else i.type for i in tokens)
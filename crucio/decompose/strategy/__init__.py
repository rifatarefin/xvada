from abc import abstractmethod
from typing import Iterator

from crucio.token import Tokens


class DataDecomposer:
    @abstractmethod
    def decompose(self, tokens: Tokens) -> Iterator[Tokens]:
        pass

from abc import ABC, abstractmethod


class AbstractType(ABC):
    @abstractmethod
    def abstract_method(self):
        pass

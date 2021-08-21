from abc import ABC, abstractmethod


class Abstract(ABS):
    def __init__(self):
        pass

    @abstractmethod
    def method(self) -> None:
        pass


class Implementation(Abstract):
    def method(self) -> None:
        # implementation
        pass

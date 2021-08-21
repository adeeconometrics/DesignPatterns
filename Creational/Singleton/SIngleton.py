class Singleton:
    __instance = None

    def __new__(cls, *args):
        if __instance is None:
            cls.__instance = object.__new__(cls, *args)
        return cls.__instance

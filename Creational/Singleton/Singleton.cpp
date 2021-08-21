class Singleton final {
public:
  static Singleton &get_instance() {
    static Singleton *instance = new Singleton();
    return *instance;
  }

private:
  Singleton() = default;
  Singleton(const Singleton &) = delete;
  Singleton(Singleton &&) = delete;

  Singleton &operator=(const Singleton &) = delete;
  Singleton &operator=(Singleton &&) = delete;
};
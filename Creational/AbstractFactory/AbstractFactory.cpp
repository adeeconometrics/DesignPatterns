class AbstractFactory {
public:
  AbstractFactory() = default;
  virtual ~AbstractFactory() = default;

  virtual void abstract_method() = 0;
};
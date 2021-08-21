class Abstract {
public:
  Abstract() = default;
  virtual ~Abstract() = default;

  virtual void method() = 0;
};

class Implementation : public Abstract {
public:
  Implementation() = default;
  ~Implementation() = default;

  void method() {
    // implementation
  }
};

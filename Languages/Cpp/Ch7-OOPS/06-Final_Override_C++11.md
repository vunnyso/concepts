<h1 style="text-align:center;">  Final and override </p>

### Final

- Derived class that prevents further overriding

### Override

The override keyword is used in derived classes to indicate that a virtual function is meant to override a virtual function from the base class.

It’s mainly a compile-time safety feature — it tells the compiler:

### Example of using final and override

```cpp
#include <iostream>

class Document {
public:
  virtual void Serialize(int x) {
    std::cout << "Document serialize(int)" << std::endl;
  }
};

class Text : public Document {
public:
  void Serialize(int x) override final{
    std::cout << "Text serialize(int)" << std::endl;
  }
};

class RichText final : public Text {
public:
  // void Serialize(int x) { }  Cannot use it as it marked as final in Text class
};

// RichText is marked as final so we can inherit it further
// class TextPlus: public RichText { };

int main() {
  Text t;
  Document &dptr = t;
  dptr.Serialize(3);

  return 0;
}
```

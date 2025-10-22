<h1 style="text-align:center;">  Dynamic Cast </p>

### Dynamic Cast

- Its runtime type-safe cast operator used primarily for downcasting in class
  hierarchy that involves inheritance polymorphism.
- Allows to convert pointers or references of base class into derived class types but performs a runtime check to ensure that cast is valid.
- Syntax
  ```cpp
  dynamic_cast<target_type>(expression)
  ```

### Example

```cpp
#include <iostream>

class Base {
public:
  virtual ~Base() {} // Need atleast one virtual function
};

class Derived : public Base {
public:
  void greet() { std::cout << "Hello from derived!" << std::endl; }
};

int main() {
  Base *b1 = new Base();
  Base *b2 = new Derived();

  if (Derived *d = dynamic_cast<Derived *>(b1)) {
    d->greet();
  } else {
    std::cout << "Cannot cast" << std::endl;
  }

  if (Derived *d = dynamic_cast<Derived *>(b2)) {
    d->greet();
  }
  delete b1, b2;
  return 0;
}
```

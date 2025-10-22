<h1 style="text-align:center;"> Constructors </p>

### Object Construction

- Constructors execute from base to child
- Destructors execute from child to base
- Base data members will be part of child object

### 🧩 What Are Inheriting Constructors?

Inheriting constructors (introduced in C++11) allow a derived class to reuse constructors from its base class automatically — without having to re-write or forward them manually.

### Example of Inheriting

```cpp
#include <iostream>

class Base {
public:
  Base(int x) { std::cout << "Base(int) constuctor invoked" << std::endl; }
  Base(std::string s) {
    std::cout << "Base(string) constructor invoked" << std::endl;
  }
};

class Derived : public Base {
public:
  using Base::Base; // inherit constructors
};

int main() {
  Derived d{1};
  return 0;
}
```

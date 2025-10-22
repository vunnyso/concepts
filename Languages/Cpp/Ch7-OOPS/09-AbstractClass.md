<h1 style="text-align:center;">  Abstract Class </p>

### Abstract Class

- At least one pure virtual function
- Can contain other members (data, non-virtual functions, etc.)
- Cannot be instantiated, but used through a pointer or reference
- Establishes a contract with clients, gurantees that implementation is provided by child classes
- Used for creating interface
- In true sense, interface contain only pure virtual functions.
- Interfaces can be used to create modules or components that can work with different types of applications.

#### Pure Virtual Function

- Virtual function marked with = 0
- Does not have an implementation (optional)
- Cannot be invoked (except by derived classes if defined)
- No entry in the vtable
- Must be overridden by the derived classes

### Example

```cpp
#include <iostream>

class Shape {
public:
  virtual void Draw() = 0;
};

class Circle : public Shape {
public:
  void Draw() { std::cout << "Drawing Circle" << std::endl; }
};

int main() {
  // Shape s; // Cannot create instantiate / create object
  Shape *s = new Circle();
  s->Draw();
  return 0;
}
```

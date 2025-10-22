<h1 style="text-align:center;">  Polymorphism </p>

### Polymorphism

- Different forms of the function are provided
- The call is resolved at compile time or runtime
- Runtime polymorphism or dynamic binding
- Implemented through virtual mechanism
- Compiler inserts code to invoke the correct function at runtime
- Automatically generated through the virtual keyword
- Such functions are called polymorphic functions
- Should be invoked only through a pointer or reference

### ⚙️ Types of Polymorphism in C++

| Type                            | Description                                | Example                                     |
| ------------------------------- | ------------------------------------------ | ------------------------------------------- |
| **Compile-time (static/Early)** | Decided at compile time                    | Function overloading, operator overloading  |
| **Runtime (dynamic/Lazy)**      | Decided at runtime using virtual functions | Virtual functions, base pointers/references |

### 🧠 Virtual Functions — the Key to Runtime Polymorphism

- A virtual function is a member function in a base class that you expect to be overridden in derived classes.
- When you call a virtual function through a base class pointer or reference, C++ decides at runtime which version to call — based on the actual object type, not the pointer type.
- Virtual function cannot be static
- Virtual function can be accessed using pointer or reference.

### Example

```cpp
#include <iostream>

class Base {
public:
  virtual void show() { std::cout << "Base show()" << std::endl; }
};

class Derived : public Base {
public:
  void show() { std::cout << "Derived show()" << std::endl; }
};

int main() {
  Derived d;
  Base *ptr = &d;
  ptr->show();
  std::cout << "Size of Base class " << sizeof(Base) << std::endl; // vptr increases its size by 8bytes on 64bit
  std::cout << "Size of Derived class " << sizeof(Derived) << std::endl;
  return 0;
}
```

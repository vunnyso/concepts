<h1 style="text-align:center;">  Virtual Destructor </p>

### ⚙️ What Is a Virtual Destructor?

A virtual destructor is a destructor that’s declared with the virtual keyword — just like a virtual function:

```cpp
class Base {
public:
    virtual ~Base() { cout << "Base destroyed\n"; }
};
```

### ⚙️ What Happens Internally

When you make a destructor virtual:

It’s added to the vtable, like other virtual functions.

When delete is called through a base pointer, the runtime uses the vtable to find and call the correct derived destructor, then automatically calls base destructors in reverse order.

### 💡 Rule of Thumb

If a class has any virtual function, it should also have a virtual destructor.

This ensures correct cleanup in all polymorphic scenarios.

### Example

```cpp
#include <iostream>

class Base {
public:
  virtual void show() { std::cout << "Base show()" << std::endl; }
  // If virtual is not used witn destructor then derived class destructor will
  // not invoked
  virtual ~Base() { std::cout << "Base destroyed" << std::endl; }
};

class Derived : public Base {
public:
  void show() { std::cout << "Derived show()" << std::endl; }
  ~Derived() { std::cout << "Derived destoryed" << std::endl; }
};

int main() {
  Base *b = new Derived();
  delete b;
  return 0;
}
```

<h1 style="text-align:center;">  Object Slicing </p>

### Object Slicing

- A situation in which the compiler deliberately removes some part of an object
- Occurs when child class object is assigned to a concrete base class object
- The size of a child class object may be more than its base
- While assigning it to a base object, some part of the memory may get overwritten
- This will lead to memory corruption
- To prevent this, the compiler slices the child object, effectively removing the memory that contains its attributes
- The object is then copied into the base object

### 🟦 Upcasting (Safe)

Upcasting means casting a derived class pointer or reference to its base class type.

### 🟥 Downcasting (Risky)

Downcasting means casting a base class pointer or reference to a derived class type.

### Example

```cpp
#include <iostream>

class Base {
public:
  void showBase() { std::cout << "Base()" << std::endl; }
};

class Derived : public Base {
public:
  void showDerived() { std::cout << "Derived()" << std::endl; }
};

int main() {
  Derived d;

  //  ✅ Upcasting always safe (Derived* -> Base*)
  Base *bp = static_cast<Base *>(&d);
  bp->showBase();

  // ⚠️ Downcasting, risky as not checked at runtime
  Derived *dp = static_cast<Derived *>(bp);
  dp->showDerived(); // Works as b points to derived

  // ❌ Dangerous downcast
  Base obj;
  bp = &obj;
  Derived *bad = static_cast<Derived *>(bp);
  bad->showDerived(); // compiles but may crash

  return 0;
}
```

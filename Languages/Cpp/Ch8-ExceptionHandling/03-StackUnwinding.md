<h1 style="text-align:center;">  Stack Unwinding </p>

### Overview

- Stack unwinding in C++ refers to the process that happens when an exception is thrown and the program starts cleaning up the call stack — that is, destroying all the local (automatic) objects that were created in functions which are being exited as the exception propagates up the call stack.

### What triggers stack unwinding

- When an exception is thrown using throw, the normal flow of execution stops, and C++ begins searching for a matching catch block.
- If no matching handler is found in the current function, that function terminates, and C++ destroys all its local variables (calls their destructors) before moving to the caller.
- This process continues up the call stack — unwinding each function frame — until a suitable handler is found.

### Example

```cpp
#include <iostream>
#include <limits>
#include <memory>
class Demo {
public:
  Demo() { std::cout << "Constructor" << std::endl; }
  ~Demo() { std::cout << "Destructor" << std::endl; }
};

void func1() {
  //  Demo *d = new Demo{}; // It will cause memory leak
  // So let's use RAII principle and use smart pointer to manage memory
  std::unique_ptr<Demo> d{new Demo{}};
  throw 1;
  // delete d; // Not required in case of smart pointer
}

int main() {
  try {
    func1();
  } catch (...) {
    std::cout << "Caught exception" << std::endl;
  }
  return 0;
}
```

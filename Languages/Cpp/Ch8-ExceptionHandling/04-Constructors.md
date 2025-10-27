<h1 style="text-align:center;">  Constructor Exception Handling </p>

### Destructor Exception

- It should not throw exception as it maybe be invoked to stack unwinding.
- If desctructor throws exception program may terminate
- If still we want exception, it should be handled locally in desctructor block.

### Constructor Exception Handling

Problem example

```cpp
#include <iostream>

class A {
public:
  A() { std::cout << "A constructor" << std::endl; }
  ~A() { std::cout << "A Destructor" << std::endl; }
};

class B {
public:
  B() { std::cout << "B constructor" << std::endl; }
  ~B() { std::cout << "B Destructor" << std::endl; }
};
class Test {
  A *pA{};
  B b{};
  int *pInt;
  char *pStr;

public:
  Test() {
    std::cout << "Test constructor " << std::endl;
    pA = new A;
    pInt = new int(5);
    pStr = new char[100];
    throw std::runtime_error("Failed to iniatlzie");
  }
  ~Test() {
    std::cout << "Test desctructor" << std::endl;
    delete pA;
    delete pInt;
    delete[] pStr;
  }
};

int main() {
  try {
    Test t;
  } catch (std::runtime_error &e) {
    std::cout << "Caught exception" << std::endl;
  }
  return 0;
}
```

Solution Example

```cpp
#include <iostream>
#include <memory>

class A {
public:
  A() { std::cout << "A constructor" << std::endl; }
  ~A() { std::cout << "A Destructor" << std::endl; }
};

class B {
public:
  B() { std::cout << "B constructor" << std::endl; }
  ~B() { std::cout << "B Destructor" << std::endl; }
};
class Test {
  std::unique_ptr<A> pA;
  B b{};
  std::unique_ptr<int> pInt;
  std::string pStr{};

public:
  Test() {
    std::cout << "Test constructor " << std::endl;
    pA.reset(new A);
    throw std::runtime_error("Failed to iniatlzie");
  }
  ~Test() { std::cout << "Test desctructor" << std::endl; }
};

int main() {
  try {
    Test t;
  } catch (std::runtime_error &e) {
    std::cout << "Caught exception" << std::endl;
  }
  return 0;
}
```

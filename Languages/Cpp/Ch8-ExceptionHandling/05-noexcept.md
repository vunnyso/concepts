<h1 style="text-align:center;">  noexcept </p>

### noexcept

- Applied to functions (both in declaration & definition)
- Indicates the function does not throw exceptions
- Compiler can optimize the function code
  - no need to generate stack unwinding code
- An exception from such function terminates the program
  - stack may or may not be unwinded
- Not all functions should use noexcept specifier
  - especially functions calling other functions (in library)
  - such functions will be exception-neutral
- In C++11, all desctructors are marked with noexpect specifier.
- If we are invoking library function, then it should not be noexcept
- For user defined classes, which has move operations use `noexcept` specifier, as it will improve performance when using objects with standard containers.

### Example

```cpp
#include <iostream>

// Its implicitly
void Test(int x) { throw x; }

// no except take bool argument, which is by default true
// Destructor
int sum(int a, int b) noexcept(noexcept(Test(a))) {
  Test(a);
  return a + b;
}

int main() {
  std::cout << std::boolalpha << noexcept(Test(1)) << std::endl;
  try {
    sum(1, 2);
  } catch (int x) {
    std::cout << "Exception occured" << std::endl;
  }
  return 0;
}
```

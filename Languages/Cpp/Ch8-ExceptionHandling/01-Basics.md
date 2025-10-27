<h1 style="text-align:center;">  Exception Handling </p>

### Exception Handling

- Mechanism to handle errors in programs that occur at runtime
- These errors are called exceptions
- Exist outside the normal functioning of the program
- Require immediate handling by the program
- If not handled, the program crashes
- Cannot be ignored, unlike C error handling

### Mechanism

- try
  - creates a scope/block & exception causing code appears here
  - can contain other try-catch statements
- throw
  - throws an exception from the try block
  - exception is object that is constructed in throw statement
- catch
  - handler that catches the exception object
  - should appear just after the try block
  - multiple catch blocks can exist

### Example

```cpp
#include <iostream>
#include <limits>

void AllocateMem(int count) {
  int *ptr = (int *)malloc(count * 10 * sizeof(int));
  if (ptr == NULL) {
    throw std::runtime_error("Cannot allocate memory");
  }
  free(ptr);
}

int main() {
  try {
    AllocateMem(std::numeric_limits<int>::max());
  } catch (std::runtime_error &e) {
    std::cout << e.what();
  }
  return 0;
}
```

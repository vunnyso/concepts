<h1 style="text-align:center;">  Multiple catch blocks  </p>

### Example

```cpp
#include <iostream>
#include <limits>

void AllocateMem(int count) {
  if (count < 1) {
    throw std::out_of_range("Value out of range");
  }
  int *ptr = (int *)malloc(count * 10 * sizeof(int));
  if (ptr == NULL) {
    throw std::runtime_error("Cannot allocate memory");
  }
  free(ptr);
}

int main() {
  try {
    AllocateMem(-1);
    AllocateMem(std::numeric_limits<int>::max());
  } catch (std::runtime_error e) {
    std::cout << e.what();
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl; // Base class of all exceptions
  }
  // All catch block, even catch excepttions which are not documented
  // Does not give information about exception which catched, so not that useful
  // Should be avoid, if still writing it should be last catch block
  catch (...) {
    std::cout << "General exception" << std::endl;
  }
  return 0;
}
```

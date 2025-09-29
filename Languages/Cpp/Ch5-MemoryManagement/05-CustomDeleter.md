<h1 style="text-align:center;"> Custom Deleter </p>

### Overview

A custom deleter in C++ is a user-defined function (or function object) that replaces the default delete or delete[] behavior used by smart pointers (std::unique_ptr and std::shared_ptr) to release resources.

### 🧠 Why Use a Custom Deleter?

While C++ smart pointers automatically manage memory, sometimes raw delete is not enough, such as when:

| Use Case                        | Reason for Custom Deleter                 |
| ------------------------------- | ----------------------------------------- |
| C-style memory (e.g., `malloc`) | Must use `free()` instead of `delete`     |
| File handles (e.g., `FILE*`)    | Need to call `fclose()`                   |
| Sockets, OS handles             | Require custom API for cleanup            |
| Logging or debugging            | Want to track when/what gets deleted      |
| Memory from custom allocators   | Must use allocator-specific release logic |

### Example

```cpp
#include <iostream>
#include <memory>

// Function object
struct CustomDeleter {
  void operator()(int *p) {
    free(p);
    std::cout << "Pointer freed" << std::endl;
  }
};

void UniqueDeleters() {
  std::unique_ptr<int, CustomDeleter> p{(int *)malloc(4), CustomDeleter{}};
  *p = 100;
  std::cout << "Value of unique pointer is " << *p << std::endl;
}

void SharedDeleters() {
  std::shared_ptr<int> p{(int *)malloc(4),
                         CustomDeleter{}}; // Need to specify object only
  *p = 1;
  std::cout << "Value of shared pointer is " << *p << std::endl;
}

int main() {
  UniqueDeleters();
  SharedDeleters();
  return 0;
}
```

<h1 style="text-align:center;"> auto </p>

### auto Keyword

- Indicates storage class of a variable in C & pre-C++11
- Remnant of B language (which largely influenced C)
- Meaning has been changed in C++11
- Allows the compiler to automatically infer the type from the initializer
- The initializer is mandatory
- syntax
  ```cpp
  auto <identifier> = <initializer>
  ```

Where `<initializer>` could be an expression that returns some value e.g. a literal, mathematical expression or a function call that returns a value

### Example

```cpp
#include <iostream>

int main() {
  auto x = 1;
  auto sum = 4 + 3.14f; // Type of sum will be largest data type in expression
  const int y = 10;
  auto var = y; // x is int, as const qualifer is discarded by compiler
  auto list = {1, 2, 3, 4}; // list will be std::initalizer_list
  return 0;
}
```

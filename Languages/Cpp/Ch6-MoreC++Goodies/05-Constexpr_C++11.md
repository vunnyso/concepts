<h1 style="text-align:center;"> constexpr </p>

### constexpr

- Represents an expression that is constant
- Such expressions are possibly evaluated at compile time
- Can be applied to variable declarations or functions
- All constexpr are implictly inline
- Should expect and return literal only (void, scalar(int, float, char))
- May increase the performance of the code as computation is done at compile time

### const vs constexpr

- Initialization of a const variable can be deferred until runtime
- However, a constexpr variable must be initialized at compile time
- All constexpr variables are const, but not the other way round
- Use const keyword to indicate the value cannot be modified
- Use constexpr to create expressions that can be evaluated at compile time

### Example

```cpp
#include <iostream>

// Should contain single statement that should be return
// C++14 has relaxed these rules
constexpr int GetNumber() { return 44; }

constexpr int Add(int x, int y) { return x + y; }

int main() {
  constexpr int i = 10; // Value to be evlauted at compile time
  int a[i];

  // we need to make GetNumber as constexpr if we want it value to be evaluated
  // at compile time
  constexpr int j = GetNumber();
  int b[j];

  // Value to be comupted at compile time
  int x = GetNumber();

  constexpr int sum = Add(3, 5);              // Passing literals
  std::cout << "Sum is " << sum << std::endl; // Invoke at compile time
  std::cout << "Sum is " << sum << std::endl; // Invoke at run time

  return 0;
}
```

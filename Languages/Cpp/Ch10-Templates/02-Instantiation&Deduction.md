<h1 style="text-align:center;"> Instantiation & Deduction </p>

### Template Argument Deduction

- Process of deducing the types
- Each function argument is examined
- The corresponding type argument is deduced from the argument
- The type argument deduction should lead to same type
- Type conversions are not performed
- After deduction, the template is instantiated
- Override deduction by specifying types in template argument list
- Syntax
  ```cpp
  Max<int>(3,5) ;
  ```

### Template Instantiation

- A template function or class only acts as a blueprint
- The compiler generates code after deduction from the blueprint at compile time
- Known as template instantiation
- Occurs implicitly when
  - a function template is invoked
  - taking address of a function template
  - using explicit instantiation
  - creating explicit specialization
- Full definition of template should be available
- Define in header file

#### Explicit Specialization

- Template specialized for a particular type
- Provides correct semantics for some datatype
- Or implement an algorithm optimally for a specific type
- Explicitly specialized functions must be defined in a .cpp file
- Primary template definition should occur before specialization

### Example

```cpp
#include <cstring>
#include <fstream>
#include <iostream>

template <typename T> T Max(T x, T y) {
  std::cout << typeid(T).name() << std::endl;
  return x > y ? x : y;
}

template char Max(char x, char y); // Explict instantiation

// Explict Specialization
template <> const char *Max<const char *>(const char *a, const char *b) {
  std::cout << "Calling explict specialization const char *Max " << std::endl;
  return strcmp(a, b) > 0 ? a : b;
}

int main() {
  Max(static_cast<float>(3), 5.5f); // T will be deducted to float
  Max<double>(
      3, 6.2); // explict deduction, Compiler will not use argument deduction
  int (*pfn)(int, int) = Max; // Also instantiated here

  // Compare strings
  const char *a{"A"};
  const char *b{"B"};
  std::cout << Max(a, b);
  return 0;
}
```

<h1 style="text-align:center;"> Uniform Initialization </p>

### Uniform Initialization

- C++98 provided different ways to initialize types
- Scalar types can be initialized with = or ()
- Array types have to be initialized with {}
- C++11 introduced uniform initialization
- Use {} to initialize all types
- **Note:** For user defined data types copy initization should be avoided

### Advantages

- Uniform syntax to initialize all types
- Forces initialization of both scalar and array types
- Prevents bugs when initializing incompatible types like narrowing converstions. Example initalizing init with float.

### Example

```cpp
#include <iostream>

int main() {
  // Scalar type
  int a1;     // Unitialized
  int a2 = 0; // Copy initalization
  int a3(5);  // Direct initalization

  // User defined data types
  std::string s1;
  std::string s2("C++"); // Direct initalization

  char d1[8];                        // Unitialized
  char d2[8] = {'\0'};               // Copy initalization
  char d3[8] = {'a', 'b', 'c', 'd'}; // Aggregate initalization
  char d4[8] = {"abc"};

  // Starting from C++11 its better to use uniform initalization
  int b1{};  // value initalization, it will be initalized to default value and
             // for primtive types value is 0
  int b2{5}; // Direct initalization
  char a1[8]{};
  char a2[8]{"Hello"};

  // Works for heap based objects
  int *p1 = new int{};

  char *p2 = new char[8]{};
  char *p3 = new char[8]{"Hello"};
}
```

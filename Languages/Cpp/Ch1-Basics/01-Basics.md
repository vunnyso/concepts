<h1 style="text-align:center;"> C++ Basics </p>

### What is C++

- C++ is a powerful general-purpose programming language developed as an extension of the C language.
- Created by Bjarne Stroustrup.
- It was designed to provide object-oriented programming features while maintaining efficiency and flexibility.
- In **1985** first edition of The C++ Programming Language was released
- Emphasis on system programming

### Version History

| Standard Name | Year | Key Features                                                                                                         |
| :------------ | :--- | :------------------------------------------------------------------------------------------------------------------- |
| C++98         | 1998 | First official ISO standard. Introduced templates, STL (Standard Template Library), exceptions.                      |
| C++03         | 2003 | Minor bug fixes and improvements to C++98.                                                                           |
| C++11         | 2011 | Major revision with smart pointers, auto, nullptr, lambda functions, move semantics, constexpr, threading, and more. |
| C++14         | 2014 | Refinements to C++11, improved lambda expressions, std::make_unique, generic lambdas.                                |
| C++17         | 2017 | std::optional, std::variant, structured bindings, if-constexpr, filesystem library.                                  |
| C++20         | 2020 | Concepts, ranges, coroutines, modules, three-way comparison (<=> spaceship operator).                                |
| C++23         | 2023 | Further improvements to modules, ranges, reflection, and better standard library functions.                          |
| C++26         | 2026 | Likely to include more compile-time programming features, improved parallelism, and further refinements.             |

### Why C++ Used

- Used for performance, stability & portability
- Available on almost all operating systems
- No dependency on separate runtime
- Smaller memory footprint
- Can run in constrained environment (e.g. limited memory, slow CPU)
- Standard C++ code can be easily ported to multiple platforms

### Basic Program

```cpp
// This is single line comment

/*  Multi line comment
iostream header required to perform input output operations
*/
#include <iostream>

int main() {
  // using namespace std; // Namespace is using to wrap types so that they are not visible outside
  std::cout << "Hello from C++"; // std:cout is full qualified name and << is called insertion operator
  std::cout << "How" << " are" << " you" << std::endl;  // Using << multiple times is Cascading of operators, endl is manipulator, adds new line and flushes the output buffer
  return 0;
}
```

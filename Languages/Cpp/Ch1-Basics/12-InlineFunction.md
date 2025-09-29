<h1 style="text-align:center;"> Inline Function </p>

### Inline Function

- A function that is marked with inline keyword
- Such functions are defined in a header file
- Requests the compiler to replace the call with the function body
- The overhead of the function call is avoided
  - Stack memory for arguments not required
  - No need to save the return address
- May improve the performance of the code
- Example
  ```cpp
  inline void Function(arguments){
  	//Implementation
  }
  ```

### Points to note

- Only a request to the compiler
- Certain functions may not be inlined
  - large functions
  - functions having too many conditional statements
  - recursive functions
  - functions invoked through pointers
- Different compilers have different rules
- Modern compilers may automatically inline even non-inline functions
- Excessive inlining may increase binary size

### Macros Vs Inline Functions

| **Macro**                                      | **Inline Function**                      |
| ---------------------------------------------- | ---------------------------------------- |
| Works through text substitution                | The call is replaced with body           |
| Error prone due to substitution nature         | Safe to use as it has function semantics |
| Does not have an address                       | Has an address                           |
| Difficult to use with multiple lines of code   | Can have multiple lines of code          |
| Cannot be used for member functions of a class | Class member functions can be inline     |

### Example

```cpp
#include <iostream>

// #define Square(x) x *x
inline int Square(int x) { return x * x; }

int main() {
  using namespace std;
  cout << "Sqaure of the number is " << Square(5 + 1) << endl;
  return 0;
}
```

<h1 style="text-align:center;"> Function Pointer </p>

### Function Pointer

- Pointer that holds the address of the function
- The type is same as the signature of the function (return type & arguments)
- Can be used to indirectly invoke the function even if the function name is not - known
- Used by algorithms and classes for customization
- Example
  ```cpp
  <ret> (*fnptr)(args) = &Function
  int (*PtrAdd)(int,int) = &Add	//int Add(int,int)
  ```

### Example

```cpp
#include <iostream>

void Print(int count, char ch) {
  for (int i = 0; i < count; i++) {
    std::cout << ch;
  }
  std::cout << std::endl;
}

void EndMessage() { std::cout << "Execution completed" << std::endl; }
int main() {
  using namespace std;
  Print(5, '#');
  void (*pfn)(int, char) = Print;
  (*pfn)(6, '+'); // No need of name of function
  pfn(7, '$');
  atexit(EndMessage); // Register pointer to function internally in C library
  cout << "End of main function " << endl;
  return 0;
}
```

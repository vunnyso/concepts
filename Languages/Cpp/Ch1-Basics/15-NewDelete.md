<h1 style="text-align:center;"> Memory Management </p>

### Memory Management

- C/C++ programs are provided with different types of memory areas
  - stack – allocated automatically for local variables
  - data section – allocated for global and static data
  - heap – allocated at runtime
- All the memory is taken from the process address space
- C/C++ programs provide support for memory allocation at runtime (also called dynamic memory)
- Allocations on the heap have to be managed by the programmer
- Stack and data section allocations are managed by the runtime

### Dynamic Memory Allocation in C++

- C++ provides two operators for dynamic memory allocation
- new : allocates memory on the heap
- delete : deallocates memory
- Memory that is allocated through new has to be released with delete
- Syntax

  ```cpp
  <type> *<variable> = new <type> (optional args) ;
  delete <variable> ;

  int *p = new int(value);
  delete p ;
  ```

### malloc vs new

| malloc                                            | new                                   |
| ------------------------------------------------- | ------------------------------------- |
| Function                                          | Operator                              |
| Requires size during allocation                   | Size is ascertained from the type     |
| Cannot initialize memory                          | Can initialize memory                 |
| Cannot call constructors                          | Can call constructors                 |
| Returns void pointer that needs to be type casted | Returns correct type of pointer       |
| Cannot be customized                              | Can be customized through overloading |
| `malloc`, `calloc` & `realloc`                    | Has different forms                   |
| Returns `NULL` on failure                         | Throws exception on failure           |

### Example

```cpp
#include <cstring>
#include <iostream>

void AllocateInt() {
  int *i = new int(1); // Heap memory allocated and initalized with 1
  std::cout << "Value of int is " << *i << std::endl;
  delete i;
  i = nullptr; // Good practice to avoid dangling pointers
}

void AllocateArray() {
  int *a = new int[3]{1, 2, 3}; // Using list, we can initalize it using loop
  for (int i = 0; i < 3; i++) {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  delete[] a;
}

void AllocateString() {
  char *s = new char[4];
  std::strcpy(s, "C++");
  std::cout << "Value of string is " << s << std::endl;
  delete[] s;
}

void Allocate2D() {
  int *row1 = new int[3]{1, 2, 3};
  int *row2 = new int[3]{4, 5, 6};
  int **arr = new int *[2];
  arr[0] = row1;
  arr[1] = row2;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << arr[i][j] << " ";
    }
  }
  delete[] row1;
  delete[] row2;
  delete[] arr;
}

int main() {
  AllocateInt();
  AllocateArray();
  AllocateString();
  Allocate2D();
  return 0;
}
```

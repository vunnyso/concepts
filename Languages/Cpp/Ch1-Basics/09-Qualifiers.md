<h1 style="text-align:center;"> Qualifiers </p>

### const Qualifier

- Creates a variable that is constant
- Value cannot be modified
- Attempt to modify will cause compilation error
- Qualified to a declaration, but always needs an initializer
- Replaces C macros
- Commonly used with references
- We cannot create pointers to const, if we still want pointer then that pointer also needs to be const.
- Syntax
  ```cpp
  const <type> <variable> { initializer }
  const float PI { 3.141f };
  ```

### Difference in syntax

```cpp
const int *ptr1; // ptr1 is pointer to int const, means pointer value can change but const integer value cannot
int *const ptr2; // ptr2 is const pointer to integer, means value of pointer cannot value, however int value can change
const int * const ptr3; // ptr3 is const pointer to integer const, means both pointer value and int value cannot change
```

### Example

```cpp
#include <iostream>
void Print(const int *ptr) { // Avoid modifying value when pointers used
  //*ptr = 1;
  std::cout << "Printing value of x: " << *ptr << std::endl;
}

int main() {
  const int CHUNK_SIZE = 512;
  const int *ptr = &CHUNK_SIZE; // We cannot use it without const
  int x = 10;
  Print(&x);
  return 0;
}

```

### References with const

- Generally references are created with l-value.
- If used with const, references can be created using literal

```cpp
#include <iostream>
void Print(const int &ref) {
  // ref = 1;  // We cannot modify value of reference if passed as const
  std::cout << "Printing value of ref: " << ref << std::endl;
}

int main() {
  const int CHUNK_SIZE = 512;
  const int *ptr = &CHUNK_SIZE; // We cannot use it without const
  int x = 10;
  Print(x);
  Print(2); // We can pass literal to function as with const no l-value for
            // reference
  return 0;
}

```

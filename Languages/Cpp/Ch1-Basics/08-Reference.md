<h1 style="text-align:center;"> Reference </p>

### Reference Type

- Defines an alternative name for a variable (an alias)
- It is created with the & operator during declaration
- Always needs an initializer (called referent)
- The referent should be a variable
- It is bound to its referent
  = It can be used to modify a variable indirectly (like a pointer)
- A reference is NOT a new variable; it is just another name

### Example

```cpp
#include <iostream>

int main() {
  using namespace std;
  int x = 10;   // x is Referent
  int &ref = x; // ref is reference
  ref = 1;
  cout << "Value of x is: " << x << " at address: " << &x << endl;
  cout << "Value of reference is " << ref << "at address: " << &ref << endl;
  return 0;
}
```

### Reference Vs Pointer

| **Reference**                                                | **Pointer**                                           |
| ------------------------------------------------------------ | ----------------------------------------------------- |
| Always needs an initializer                                  | Initializer is optional                               |
| Initializer should be l-value                                | Initializer need not be l-value                       |
| Cannot be nullptr                                            | Can be nullptr                                        |
| Bound to its referent                                        | Can point to other variables                          |
| No storage required, so has same address as that of referent | Has its own storage, so will have a different address |
| Dereference not required                                     | Requires dereference operator to access the value     |

### Where useful?

- References can be used where we want to avoid call by value, for example
  ```cpp
  void swap(int &x, int &y)
  ```

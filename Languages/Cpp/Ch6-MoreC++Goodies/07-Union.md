<h1 style="text-align:center;"> Union </p>

### Union

- Gives the ability to represent all the members in the same memory
- Saves space
- However, it has several disadvantages
- no way to know which type it holds
- nested types with non-default constructors deletes the default constructor of the union
- cannot assign objects of user-defined types directly to a union member
- user-defined types are not destroyed implicitly
- cannot have a base class
- cannot derive from a unio

### Example

```cpp
#include <iostream>

// By default members are public
union Test {
  int x;
  char ch;
  Test() : x(1) { std::cout << __func__ << std::endl; }
  ~Test() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
};

int main() {
  Test t;
  // Size of union will be largest member size
  std::cout << "Size of union is " << sizeof(t) << std::endl;
  t.x = 100;
  return 0;
}
```

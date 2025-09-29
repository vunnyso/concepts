<h1 style="text-align:center;"> Pointers </p>

### Pointer

- Points to another type
- Holds the memory address of another variable
- Used for indirect access to other variables
- Need not be initialized during declaration
- Declared with \* operator
  int \* ptr ;
  int \*p1, \*p2, \*p3 , p4 ;

### Address Of Operator

- & is the address of operator
- When applied to any variable, we get the address of that variable (the location where it is stored in the memory)

  int x = 10 ;
  cout << &x ; //prints the address of x

### Dereference Operator

- To access the value at the address in the pointer, use the \* operator
- Also called dereference operator
- Allows indirect read or write operation on the variable through the pointer

### Null Pointer

- NULL is a macro in C & pre-C++11
- It is defined as 0 in most compilers
- Used to initialize pointer types
- C++11 introduced a new type of null called nullptr
- This is type safe and better than NULL macro
- Always use nullptr to initialize a pointer, instead of NULL macro

### Example Usage

```cpp
#include <iostream>

int main() {
  using namespace std;
  int x = 10;
  cout << "Address of variable x is " << &x << " and value is: " << x << endl;

  int *ptr = &x; // Can use void pointer which can point to any data type & used
                 // in special cases
  cout << "Address of x reterived using ptr " << ptr << endl;
  *ptr = 1;
  cout << "Printing value of x: " << x << endl;
  int *newptr = nullptr;
  // cout << "Reading from Null pointer " << *newptr;
  //cout << "Writing to locating of nullptr";
  //  *newptr = 100;
  return 0;
}
```

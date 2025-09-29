<h1 style="text-align:center;"> Basics </p>

### Operator Overloading

- Custom implementation for primitive operators
- Allows usage of user-defined objects in mathematical expressions
- Overloaded as functions but provide a convenient notation
- Implemented as member or global functions
- Require usage of the operator keyword
- Syntax
  ```cpp
  <ret> operator <#> (<arguments>)
  ```

### Usage

- As global functions, require same no. of arguments as the operands
- As member functions, one operand is passed as argument through this pointer
- binary operator will require only one explicit argument
- unary operator will not require any explicit argument
- Syntax
  ```cpp
  Integer operator +(const Integer &, const Integer &)
  Integer Integer::operator +(const Integer &)
  ```

### Example

```cpp
#include <iostream>
#include <vector>
class Integer {
  int *m_val;

public:
  Integer() : m_val{new int(0)} {
    std::cout << "Constructor is called" << std::endl;
  }
  Integer(int val) : m_val{new int{val}} {
    std::cout << "Parametrized constuctor called" << std::endl;
  }
  int GetValue() const { return *m_val; }
  void SetValue(int val) { *m_val = val; }

  // Below function implemented as member function
  Integer operator+(Integer &op) const {
    Integer temp;
    *temp.m_val = *m_val + *op.m_val;
    return temp;
  }
};
// Global function for operator overload
Integer operator-(const Integer &a, const Integer &b) {
  Integer temp;
  temp.SetValue(a.GetValue() - b.GetValue());
  return temp;
}

int main() {
  Integer a(10), b(2);
  Integer sum = a + b;
  std::cout << "Sum is " << sum.GetValue() << std::endl;
  Integer sub = a - b;
  std::cout << "Substraction is " << sub.GetValue() << std::endl;

  return 0;
}
```

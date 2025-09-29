<h1 style="text-align:center;"> Copy Assignment </p>

### Example

```cpp
#include <iostream>
#include <vector>
class Integer {
  int *m_val;

public:
  Integer() : m_val{new int(0)} {
    std::cout << "Default constructor invoked" << std::endl;
  }
  Integer(int val) : m_val{new int{val}} {
    std::cout << "Parametrized constuctor cinvokedalled" << std::endl;
  }
  int GetValue() const { return *m_val; }
  void SetValue(int val) { *m_val = val; }

  // copy assignment implementation
  Integer &operator=(const Integer &ref) {
    std::cout << "Copy assignment constructor invoked" << std::endl;
    if (this != &ref) { // Check for self assignment
      delete m_val;
      m_val = new int(*ref.m_val);
    }
    return *this;
  }
};

int main() {
  Integer a(10), b;
  b = a; // Should invoke copy assignment operator
  std::cout << "Value in b object is " << b.GetValue() << std::endl;
  return 0;
}
```

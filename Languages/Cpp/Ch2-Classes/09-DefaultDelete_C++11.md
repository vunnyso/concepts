<h1 style="text-align:center;"> Default and Delete keywords </p>

### Example

```cpp
#include <iostream>
using namespace std;

class Integer {
  int m_val{0};

public:
  Integer() = default; // As we have paramterized constructor so compiler will
                       // not synthesize default constructor, so either we
                       // declare it or make as it default
  Integer(int val) { m_val = val; }
  Integer(const Integer &) =
      delete; // Tells Compiler not to synthesize copy constructor
  void SetValue(int val) { m_val = val; }
  void SetValue(float val) = delete;
};

int main() {
  Integer i1;
  // Integer i2(i1);
  i1.SetValue(100);
  // i1.SetValue(1.1f); // As we have deleted float passing
  return 0;
}
```

<h1 style="text-align:center;"> Dynamic Arrays </p>

### Example

```cpp
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<int> p{new int[3]{1, 2, 3}};
  p.get()[0] = 1;
  // Smart pointer wiill use subscript class for it and Deleter will use correct
  // delete
  std::shared_ptr<int[]> p1{new int[3]{1, 2, 3}};
  return 0;
}
```

**Note:** Better to use containers like vector for dynamic arrays.

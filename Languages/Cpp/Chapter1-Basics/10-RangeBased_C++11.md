<h1 style="text-align:center;"> Range based loop </p>

### Range-based for loop

- Allows iteration over arrays and containers
- Doesn’t need index variable
- Each iteration returns an element
- Can be used with any object that behaves like a range
- More readable and cleaner code

### For vs Range-Based For

| For                                                                                       | Range-Based For                        |
| ----------------------------------------------------------------------------------------- | -------------------------------------- |
| Index based iteration                                                                     | Does not use index to iterate          |
| Requires end condition                                                                    | End condition is provided by the range |
| Index variable needs to be incremented or decremented                                     | No need to increment or decrement      |
| Error-prone e.g. wrong end condition, overflow, underflow, incorrect iteration expression | Lesser chances of errors               |
| More control over iteration                                                               | No control over iteration              |
| Use for finer control                                                                     | Use with ranges                        |

### Example

```cpp
#include <iostream>

int main() {
  int arr[]{1, 2, 3, 4};
  for (const auto &item : arr) { // To avoid copy of varaible we use &item
    std::cout << item << " ";
  }
  std::cout << std::endl;

  // We can also iterate over initalizer list
  for (const auto &item : {5, 6, 7, 8}) {
    std::cout << item << " ";
  }
  std::cout << std::endl;

  // Range based loop iternally implements similar code as below
  auto begin = std::begin(arr); // or can use arr[0]
  auto end = std::end(arr);     // or can use arr[5]
  for (; begin != end; ++begin) {
    std::cout << *begin << " ";
  }
  // For certain data types, like char where begin and end are not of same type, we cannot use range based loop in C++11 which is fixed in C++17
  return 0;
}
```

<h1 style="text-align:center;"> Templates </p>

### Templates

- Generalizes software components
- Such components can be reused in different situations
- Operate of any kind of data
- High performance algorithms & classes
- Compile time; no runtime costs are involved
- Libraries such as ATL(Active Template Library), WTL(Windows Template Library), Boost, POCO, ACE, etc. use templates for implementation

### Function Templates

- Function that accepts template type arguments
- Always begins with template keyword
- Template type argument is called type name
- Type name is a placeholder for the actual type
- Can accept any type
- The template type can be used as return type
- Syntax
  ```cpp
  template<typename T>
  T Function(T arg){
      //Implementation
  }
  ```

### Example

```cpp
#include <fstream>
#include <iostream>
#include <string>

template <typename T> T Max(T x, T y) { return x > y ? x : y; }

int main() {
  // In below max function, call type is deducted as int
  std::cout << "Max of two numbers is " << Max(1, 4) << std::endl;
  std::cout << "Max of two numbers is " << Max(1.1f, 0.4f) << std::endl;
  return 0;
}
```

### To verify two functions are generated

```bash
g++ -std=c++23 1.cpp  -g -O2 -fverbose-asm -S
cat 1.s
```

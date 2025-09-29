<h1 style="text-align:center;"> Namespace </p>

### Namespace

- Named declarative region used for declaring types
- The types are not visible outside the namespace
- Standard library is in std namespace
- Prevents name clashes
- Helps modularize code
- Syntax
  ```cpp
  namespace <name> {
    (namespace, class, structure, function, variable, etc)
  }
  ```

### Namespace Access

- Types inside a namespace have a scope
- Cannot be accessed outside the namespace
- Either open the namespace or the type
- use the global using declarative and open the entire namespace
  ```cpp
    using namespace std ;
  ```
- use the using declarative and open a specific type
  ```cpp
    using std::cout ;
  ```
- using the full qualified name
  ```cpp
  std::cout << “C++” << std::endl;
  ```

#### Example

```cpp
#include <iostream>
namespace Avg {
float Calculate(float x, float y) { return (x + y) / 2; }
} // namespace Avg

namespace Sum {
float Calculate(float x, float y) { return x + y; }
} // namespace Sum

namespace { // Unamed namespce, its visible in this file and cannot be used
            // outside
void Internal() {}
} // namespace

int main() {
  using namespace Avg;
  // using Avg::Calculate;
  std::cout << "Result is " << Calculate(1.1f, 1.9f) << std::endl;
  std::cout << "Result is " << Sum::Calculate(1.1f, 1.9f) << std::endl;
  Internal(); // Can be invoked by just calling name
  return 0;
}
```

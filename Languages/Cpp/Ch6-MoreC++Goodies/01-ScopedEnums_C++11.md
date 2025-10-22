<h1 style="text-align:center;"> Enums </p>

### Enumerated Type

- Type created through enum keyword
- Created with restricted range of values, called symbolic constants or enumerators
- Enumerators are internally represented as undefined integral types
- Can implicitly convert to an integer, but not the other way round
- Default value starts from 0, but users can assign any value
- Enumerators are visible in the scope in which they’re defined
- Example
  ```cpp
  enum Color(Red, Green, Blue) ;
  Color c = Red ;
  c = 1 ;	//Compiler error, use static_cast to convert
  int x = Green ;//x will contain 1
  ```

### Example

```cpp
#include <iostream>

enum Direction { NORTY, SOUTH };       // Avoid using, Global Scope enums
enum class Color { RED, GREEN, BLUE }; // Preferred to avoid name clash
enum class Vote: bool { YES = 1, NO  = 0}; // Can put type and default values as well

void FillColor(Color c) {
  if (c == Color::RED) {
    std::cout << "Color is RED" << std::endl;
  } else if (c == Color::GREEN) {
    std::cout << "Color is GREEN" << std::endl;
  } else {
    std::cout << "Color is BLUE" << std::endl;
  }
}

int main() {
  Color c = Color::RED;
  FillColor(c);
  FillColor(Color::BLUE);
  FillColor(static_cast<Color>(1)); // Needs to be range, otherwise it will undefined behaviour
  return 0;
}
```

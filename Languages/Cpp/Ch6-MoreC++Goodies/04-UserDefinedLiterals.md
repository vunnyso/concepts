<h1 style="text-align:center;"> User Defined Literals </p>

### User Defined Literals

- A literal is a fixed value that appears directly in the code
- C++ supports different types of literals
  - integer, floating point, boolean, character, string
- Some of these literals can be modified through prefixes or suffixes
  - 14u, 621l, 9.2f, L”wide string”
- In C++11, we can define our own suffixes
  - Can be applied to integer, floating point, character & string literals
- Creating custom literals provides syntactic shortcuts and increase type safety
- Temperature temp {82.5};\* `// Fahrenheit or celsius??`

- Syntax
  ```cpp
  <return type> operator "" _<literal>(arguments)
  operator "": defines  literal opertor function
  <return type>: Can be any type including void
  _literal: always starts with _ followed by name
  ```

#### Important Points

- Custom literals should begin with underscore
  - literals without underscore are reserved for the standard library
- You cannot redefine the meaning of built-in literal suffixes
- Only following types can be suffixed to make a user-defined literal
  - `unsigned long long`, `long double`, `const char*`, `char`
- Literal operator functions cannot be member functions

### Example

```cpp
#include <iostream>
#include <string>

class Distance {
  long double m_km;

public:
  Distance(long double km) : m_km{km} {}
  long double GetKms() const { return m_km; }
};

Distance operator"" _mi(long double val) { return Distance{val * 1.6}; }

Distance operator"" _meters(long double val) { return Distance{val / 1000}; }

int main() {
  Distance d1{1.2_mi}, d2{2000.0_meters};
  std::cout << d1.GetKms() << std::endl;
  std::cout << d2.GetKms() << std::endl;
  return 0;
}
```

<h1 style="text-align:center;"> Delegating Constructor </p>

### Delegating Constructor

- Allows a constructor to invoke another constructor
- Replacement for common initialization
- Reduces duplicate initialization code in multiple constructors
- Syntax
  ```cpp
  class Class{
    Class():Class(val1, val2){
    Class(arg1, arg2){
    //Initialization code
  ```

### Example

```cpp
#include <iostream>
using namespace std;

class car {
  string brand;
  string model;
  int units;

public:
  car() : car("", "") { cout << "Default constructor is called" << endl; }
  car(string brand) : car(brand, "") {
    cout << "Parametrized constructor is called" << endl;
  }
  // Using Member Initializer List which is more effective when strings as used
  // Othewise each data member is default constructed and then assigned a new
  // value in body
  car(string brand, string model) : brand(brand), model(model), units(0) {
    cout << "Initalization completed" << endl;
  }
};

int main() {
  car obj;
  return 0;
}
```

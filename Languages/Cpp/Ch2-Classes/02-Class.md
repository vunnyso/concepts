<h1 style="text-align:center;"> Class </p>

### class

- Its user defined data type, which holds its own data members and member functions.
- Blueprint/template/recipe
- Represents an abstraction
- Every object is instantiated
- Instance of a class
- Can have multiple instances
- Objects are independent
- Syntax
  ```cpp
  class <name> {
  //Members are private by default
  <modifiers>:
      <member variables>
      <member functions>
  } ;
  ```

### object

- Object is instance of class.
- Helps in code reusbality

### Non-Static Data Member Initializers

- Convenient way of initializing class members with values during declaration
- Syntax

  ```cpp
      class Class{
        <type1> <var1> {<initializer> };
        <type2> <var2> = <initializer> ;
  ```

- Ensures the members are initialized with valid values
- Can be used to initialize any type
- Compiler automatically generates initialization code
- Initialization in a user-defined constructor takes precedence

### Example

```cpp
#include <iostream>
using namespace std;

class car {
private:
  string brand = "Maruti"; // Non static data member Initialization
public:
  void displayInfo() { cout << "Brand: " << brand; }
};

int main() {
  car obj;
  obj.displayInfo();
}
```

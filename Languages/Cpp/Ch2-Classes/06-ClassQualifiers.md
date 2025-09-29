<h1 style="text-align:center;"> Static Qualifier </p>

### Static Member Variables

- Member variables qualified with static keyword
- Not part of the object
- Belong to the class
- Only one copy exists
- Shared between objects
- Cannot be initialized inside the class
- Have to be defined outside the class for initialization
- Default initialization assigns default value of the type

### Static Member Functions

- Functions qualified with static keyword
- Required only in declaration
- Belong to class and not objects
- Do not receive this pointer
- Cannot access non-static members of the class
- Can be invoked directly through the class name

### Constant Member Functions

- Member functions qualified with const keyword
- Both declaration and definition is qualified
- Such functions cannot change value of any member variables
- Useful for creating read-only functions
- Constant objects can invoke only constant member functions

### Example

```cpp
#include <iostream>
using namespace std;

class car {
  string brand = "NA";
  static int totalCars; // Static data memeber

public:
  car(string brand) {
    this->brand = brand;
    ++totalCars;
  }
  ~car() { --totalCars; }
  static void ShowCount() { cout << "Total cars: " << totalCars << endl; }
  void Display() const {
    cout << "Brand: " << brand << endl;
    cout << "Total Cars: " << totalCars << endl;
  }
};

int car::totalCars = 0;

int main() {
  car::ShowCount();
  car obj("Toyota");
  obj.Display();
  const car obj1("Nissan");
  obj1.Display();
  return 0;
}
```

<h1 style="text-align:center;"> OOPS </p>

### L-value & R-value

| L-value                                           | R-value                                                 |
| ------------------------------------------------- | ------------------------------------------------------- |
| Has a name                                        | Does not have a name                                    |
| All variables are l-values                        | R-value is a temporary value                            |
| Can be assigned values                            | Cannot be assigned values                               |
| Some expressions return l-value                   | Some expressions return r-value                         |
| L-value persists beyond the expression            | Does not persist beyond the expression                  |
| Functions that return by reference return l-value | Functions that return by value return r-value           |
| Reference to l-value (called l-value reference)   | R-value reference to r-value (called r-value reference) |

### R-Value References

- Get permanent access to temporrary objects in memory.
- A reference created to a temporary
- Represents a temporary
- Created with && operator
- Cannot point to l-values
- R-value references always bind to temporaries
- L-value references always bind to l-values
- Syntax
  ```cpp
  int &&r1 = 10 ;	 	 //R-value reference
  int &&r2 = Add(5,8); 	//Add returns by value (temporary)
  int &&r3 = 7+2 ;	//Expression return a temporary
  ```

### Example

```cpp
#include <iostream>
using namespace std;

void Print(int &x) { cout << "Using L-value reference" << endl; }

void Print(const int &x) { cout << "Using const L-Value reference" << endl; }

void Print(int &&x) { cout << "Using R-Value reference" << endl; }
int main() {
  int x = 101; // X is L-Value and 101 is R-Value
  Print(x);
  Print(1);
  return 0;
}
```

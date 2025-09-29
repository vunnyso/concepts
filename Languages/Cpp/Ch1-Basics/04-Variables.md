<h1 style="text-align:center;"> Variables </p>

### Variable Declaration

- A variable is declared by specifying a type followed by a variable name e.g. int i or float x
- The variable is also called identifier
- Multiple variables can be declared with the same type e.g. int a, b, c
- May or may not be initialized with an initializer
- Better to initialize variables during declaration to avoid bugs

### Example of variables

```cpp
#include <iostream>

int main() {
  using namespace std;
  // Scalar types
  int a, b, c;
  unsigned int d = 1; // e is l-value(locator value) refers to memory location and 1 is the r-value(right value)
  float x;
  bool y = true; // Can 0 or non-zero value, however recommeneded be either true
                 // or false
  float z = 3.14f;
  double e = 123.456;

  // Vector types
  int arr[3];
}
```

### Console IO

- std::cout is used for console output through **insertion** operator <<
- std::cin is used for keyboard input through **extraction** operator <<
- Both of above objects defined in <iostream> header

## Example of console operations

```cpp
#include <iostream>
#include <limits> // For std::numeric_limits

int main() {
  using namespace std;
  cout << "Please enter your name:  ";
  char buf[64];
  cin >> buf; // There is limiation here, as soon as it encounter space itwill
              // ignore
  cout << "Your name is: " << buf << endl;

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // This clears any leftover characters
  cout << "Enter you name (again):  ";
  cin.getline(buf, 64, '\n');
  cout << "Your name is: " << buf;
}
```

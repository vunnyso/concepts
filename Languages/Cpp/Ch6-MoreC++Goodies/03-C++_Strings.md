<h1 style="text-align:center;"> C++ strings </p>

### Basic operations

```cpp
#include <iostream>
#include <string>

int main() {
  // Initalize and assignment
  std::string str; // Empty string
  std::string st = "Hello"; // Invoke paramterized constuctor

  // Access
  st[0] = 'W';
  char ch = st[1];
  std::cout << st;
  std::cin >> st;
  std::getline(std::cin, st); //global function

  // Size
  std::cout<<"Length of string is " << st.length();

  // Insert and concatenate
  std::string s1 {"Hello"}, s2 {"World"};
  st = s1 + s2;
  st.insert(6, "test"); // Insert text at specific position

  // Comparison
  if (s1 == s2) {
    std::cout<<"Strings are same" << std::endl;
  }

  // Removal
  st.erase(); // If no argument is specifed then it will clear out entire array
  st.erase(0, 5); // Erase first five characters in the string
  st.clear();

  // Search
  auto pos = st.find("Hello", 0); // 0 means it will start from begining
  if(pos != std::string::npos) {
    std::cout <<"Substring found " <<std::endl;
  }

  return 0;
}
```

### Example to combine strings

```cpp
#include <iostream>
#include <string>

std::string Combine(std::string &first, std::string &last) {
  std::string full = first + last;
  return full; // Return by value, so copy of object will get created
}

int main() {
  std::string first, last;
  std::cout << "Enter first name : ";
  std::getline(std::cin, first);

  std::cout << "Enter last name : ";
  std::getline(std::cin, last);
  std::cout << "Combined result is " << first + last << std::endl;
  return 0;
}
```

<h1 style="text-align:center;"> Reading and Writing </p>

### Reading and Writing characters

```cpp
#include <fstream>
#include <iostream>
#include <string>

void Write() {
  std::ofstream out("test.txt");
  if (!out) {
    std::cout << "Cannot open file for writing" << std::endl;
    return;
  }
  std::string message{"C++ learning in progress"};
  for (char ch : message) {
    out.put(ch);
  }
}

void Read() {
  std::ifstream input("test.txt");
  if (!input) {
    std::cout << "File not found" << std::endl;
    return;
  }
  input.seekg(5);
  input.seekg(10, std::ios::beg);
  std::cout << "Current position is " << input.tellg() << std::endl;
  char ch;
  while (input.get(ch)) {
    std::cout << ch;
  }
}

int main() {
  Write();
  Read();
  return 0;
}
```

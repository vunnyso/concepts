<h1 style="text-align:center;">  Raw String Literals </p>

### Raw String Literals

- Raw string that does not process special characters
- Begins with R”( and ends with )”
- Useful while representing HTML, XML, file system path, etc

### Example

```cpp
#include <iostream>
#include <string>
int main() {
  std::string filename{
      "/tmp/1.txt"}; // Difficult as it may interpret as escape sequence
  std::string filename1{R"(/tmp/2.txt)"};
  std::string message{R"MSG(C++ introduced file system API "(in C++ 17)")MSG"};
  std::cout << "File name " << filename << std::endl;
  std::cout << "New File name " << filename1 << std::endl;
  std::cout << "Message " << message << std::endl;
  return 0;
}
```

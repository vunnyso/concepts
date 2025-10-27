<h1 style="text-align:center;">  File I/O </p>

### File I/O

- C++ provides support for file I/O through following classes
  - ofstream – write to an output stream
  - ifstream – read from an input stream
  - fstream – write/read stream
- Include <fstream> header
- All classes can be used for both text & binary I/O
- Additionally, they support modes that decide how the file is opened and operated
- is_open() function returns a boolean indicating if a stream is open

### File Open Modes

- The following modes can be used while opening a file
- These are constants defined in std::ios_base class
- Some modes can be combined e.g. std::ios::in | std::ios:: out, etc

### Modes

| Mode   | Meaning                                     |
| ------ | ------------------------------------------- |
| app    | seek to the end before each write operation |
| binary | open in binary mode                         |
| in     | open for reading (default for ifstream)     |
| out    | open for writing (default for ofstream)     |
| trunc  | discard file contents before opening        |
| ate    | seek to end after open                      |

### Stream state flags

| Flag    | Meaning                          | Function                 |
| ------- | -------------------------------- | ------------------------ |
| goodbit | no error                         | bool good()              |
| badbit  | irrecoverable stream error       | bool bad()               |
| failbit | I/O operation failed             | bool fail() [operator !] |
| eofbit  | end of file reached during input | bool eof()               |

### Example

```cpp
#include <fstream>
#include <iostream>
#include <string>

void Write() {
  std::ofstream out{"data.txt"};
  out << "Hello World" << std::endl;
  out << 10 << std::endl;
  out.close();
}

void Read() {
  std::ifstream input{"daa.txt"};
  if (!input.is_open()) {
    std::cout << "Cannot open the file" << std::endl;
  }
  std::string message;
  std::getline(input, message);
  int value{};
  input >> value;
  if (input.good()) {
    std::cout<<"I/O operations are successful" << std::endl;
  }
  input.close();
  std::cout << "Message " << message << " and " << " value " << value
            << std::endl;
}

int main() {
  Write();
  Read();
  return 0;
}
```

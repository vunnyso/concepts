## What is the String?
Sequences of characters stored in a char array.
C++ can be defined either using the std::string class or the C-style character arrays.

### Syntax to declare "C Style Strings"
```cpp
 char s[] = "GeeksforGeeks";
```

### Syntax to declare "std::string Class"
```cpp
std::string str("GeeksforGeeks");
```

### 1. Basic Program
```cpp
#include <iostream>

using namespace std;

int main()
{
    char cstr[] = "CStyleString";
    std:string str("CPPStyleString");

    // Iteration using for loop way
    for(int i = 0; i < str.size(); i++)
        std::cout << str[i];
    std::cout<<std::endl;

    // Iteration using auto variable
    for (auto &item: cstr)
        std::cout<<item;
    std::cout<<std::endl;

    // Iteration using iterator
    for(auto itr = str.begin(); itr != str.end(); itr++)
        std::cout<<*itr;

    return 0;
}

```

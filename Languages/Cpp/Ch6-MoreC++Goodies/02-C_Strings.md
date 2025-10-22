<h1 style="text-align:center;"> C strings </p>

### 🧩 What Are C-like Strings?

A C-style string is simply an array of characters (char[]) ending with a null character ('\0').

### Example to combine strings

```cpp
#include <cstring>
#include <iostream>

char *Combine(char *first, char *second) {
  int len = strlen(first) + strlen(second) + 1; // Extra for null terminated
  char *pfullName = new char[len];
  strcpy(pfullName, first);
  strcat(pfullName, second);
  return pfullName;
}

int main() {
  char FirstName[10], LastName[10];
  std::cout << "Enter First Name: ";
  std::cin.getline(FirstName, 10);

  std::cout << "\nEnter last name: ";
  std::cin.getline(LastName, 10);

  const char *ptr = Combine(FirstName, LastName);
  std::cout << "Combined name " << *ptr << std::endl;
  delete [] ptr;
  return 0;
}
```

### C++ String

- Provides a class called string.
- Wraps raw string and provides functions through which manipulate raw string with manipulating it directly.

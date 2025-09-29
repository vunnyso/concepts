<h1 style="text-align:center;"> Type Converstions </p>

### Type Conversions

- Conversion between types
- Performed through casts
- Ordered by compiler (implicit) or user(explicit)
- Explicit conversion uses casting operators
- Conversion between
  - basic & basic
  - basic & user-defined
  - user-defined & basic
  - user-defined & user-defined

### Conversion from Primitive to Primitive data type

Example

```cpp
#include <iostream>

int main() {
  int a = 5, b = 2;
  float f = (float)a / b; // C-Style cast
  float r = static_cast<float>(a) / b;
  std::cout << "Result of division " << r << std::endl;
  char *p = (char *) &a;
  // char *q = static_cast<char *> (&a); // It will check cast is valid or not

   // Allow casting between difffernt types, even types are not related, don't discard qualifers
  char *r = reinterpret_cast<char *> (&a);
  return 0;
}
```

### Conversion from Primitive to User defined data type

```cpp
#include <iostream>

class Integer {
  int *m_val;

public:
  Integer(int val) : m_val{new int(val)} {
    std::cout << "Parametrized constuctor invoked" << std::endl;
  }
  int GetValue() { return *m_val; }
};

int main() {
  Integer i1{5}; // Initalization
  i1 = 7;        // Assignment
  std::cout << "Value of Intger class object " << i1.GetValue() << std::endl;
  return 0;
}
```

### Type Conversion Operator

```cpp
operator <type>()   // No arguments , no return type
```

### Conversion from User defined data type to Primitive type

```cpp
#include <iostream>

class Integer {
  int *m_val;

public:
  Integer(int val) : m_val{new int(val)} {
    std::cout << "Parametrized constuctor invoked" << std::endl;
  }
  int GetValue() { return *m_val; }
   explicit operator int() { // Explicit is used to avoid implicit conversion
    return *m_val;
  }
};

int main() {
  Integer i1 {7};
  int x = static_cast<int>(i1);
  std::cout<<"Value of x " << x << std::endl;
}
```

#### Conversion from User defined data type to User defined data type

Example

```cpp
#include <iostream>

class Integer {
  int *m_val;

public:
  Integer(int val) : m_val{new int(val)} {
    std::cout << "Parametrized constuctor invoked" << std::endl;
  }
  int GetValue() { return *m_val; }
  explicit operator int() { // Explicit is used to avoid implicit conversion
    return *m_val;
  }
  bool operator==(const Integer &ref) const {
    if (*m_val == *ref.m_val)
      return true;
    else
      return false;
  }
};

class Product {
  Integer m_proId;

public:
  Product(const Integer &id) : m_proId{id} {
    std::cout << "Paramterized constructor invoked for product " << std::endl;
  }
  const Integer &GetInteger() { return m_proId; }
  operator Integer() { return m_proId; }
};

int main() {
  Integer i1{7};
  int x = static_cast<int>(i1);
  std::cout << "Value of x " << x << std::endl;
  Product p1{7};
  if (i1 == p1) {
    std::cout << "Integer and Product class are same " << std::endl;
  }
}
```

**Note:**

1. Prefer to do initalization and avoid copy assignment.
2. Initalize variables using initalizer list.

<h1 style="text-align:center;"> Copy Constructor </p>

### Copy constructor

When we need to initalize the variables of an object with values of variables of another object of same type.
Can be done by few ways

- Using assignment operator
  - Example obj2 = obj1; - (Assignment operator is overloaded)
- Passing object during iniatlization
  - Example obj2(obj1) - (Copy constructor is called)
- When function returns object by value.

### Rule of 3

- All should be defined if a user implements any of them
  - Destructor
  - Copy constructor
  - Copy assignment operator
- This will be due to allocation of some resource in a constructor
  - Destructor will free the resource
  - Copy constructor will perform a deep copy
  - Copy assignment operation will also perform a deep copy
- Not implementing user defined operations can lead to memory leak or shallow copy

### Shallow copy and deep copy

How objects or variables are copied from one to another, particularly when pointers or dynamic memory allocation are involved.

#### Shallow copy

A shallow copy copies an object’s values as they are, including any pointers. This means that after the copy, both the original and the copied object will point to the same memory location for dynamically allocated resources

#### Deep copy

A deep copy, on the other hand, creates a new copy of the dynamically allocated memory, ensuring that the original and the copy are completely independent.

### Example

**File:** Integer.h

```cpp
class Integer {
  int *m_pInt;

public:
  Integer();
  Integer(int value);
  Integer(const Integer &obj); // // Need to psas reference, otherwise it will
                               // again invoke copy constuctor
  ~Integer();
  int GetValue() const;
  void SetValue(int val);
};
```

**File:** Integer.cpp

```cpp
#include "Integer.h"

// Constructors
Integer::Integer() { m_pInt = new int(0); }
Integer::Integer(int value) { m_pInt = new int(value); }
Integer::Integer(const Integer &obj) { // Copy contsructor implementation
  m_pInt = obj.m_pInt; // Shallow copy
  m_pInt = new int(*obj.m_pInt); // It will be deep copy, allocatint value and
                                 // assign vlaue from objevt passed
}

// Destructor to free up resources
Integer::~Integer() { delete m_pInt; }

//  Getters and setters
void Integer::SetValue(int value) { *m_pInt = value; }

int Integer::GetValue() const { return *m_pInt; }
```

**File:** main.cpp

```cpp
#include "Integer.h"
#include <iostream>

int main() {
  Integer obj(10);
  std::cout << "Value of class object: " << obj.GetValue() << std::endl;
  Integer obj1(obj);
  return 0;
}
```

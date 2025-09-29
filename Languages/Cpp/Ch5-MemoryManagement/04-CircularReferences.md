<h1 style="text-align:center;"> Circular References </p>

### Overview

A circular reference (or cyclic dependency) in C++ typically occurs when two or more classes reference each other directly, either through member variables or pointer ownership. This can lead to several problems such as:

- Compilation errors (due to incomplete types).
- Memory leaks (especially with std::shared_ptr).
- Tight coupling, making code harder to maintain.

### Example

```cpp
#include <iostream>
#include <memory>

class Employee;

class Project {
public:
  // std::shared_ptr<Employee> m_emp; // Can cause circular dependency
  std::weak_ptr<Employee> m_emp;
  Project() { std::cout << "Project constructor()" << std::endl; }
  ~Project() { std::cout << "Project Desctructor()" << std::endl; }
};

class Employee {
public:
  std::shared_ptr<Project> m_proj;
  Employee() { std::cout << "Employee constructor()" << std::endl; }
  ~Employee() { std::cout << "Employee descructor()" << std::endl; }
};

int main() {
  std::shared_ptr<Employee> emp{new Employee{}};
  std::shared_ptr<Project> prj{new Project{}};

  emp->m_proj = prj;
  prj->m_emp = emp;

  return 0;
}
```

<h1 style="text-align:center;"> Functions </p>

### Functions

- A function is a set of statements enclosed within a pair of { } Called as body of the function
- These statements define what the function does
- Every function has a unique name
- This name is used to invoke or call the function
- Functions are basic building blocks of C/C++ programs

### Why Functions

- Help avoid writing repetitive logic/code in a program
- Same code can be reused in different parts of the program through a function
- There’s no limit to the number of times a function can be called
- Makes the code modular as the program is divided can be divided into cohesive modules
- Reduces complexity of the code

### Syntax

```cpp
<return type> <name> (<parameters>){<body>}
```

### Default Function Arguments

- Allows some or all function arguments to have a default value
- It becomes optional to pass values to those arguments
  - Compiler automatically assigns default value if no explicit value is provided
  - Explicit value is preferred over default value
- Default arguments should begin from the right side in the list of function arguments
- Simplifies the invocation for the caller

**Example**

```cpp
#include <iostream>

int Add(int x, int y, int z); // Prototype or declartion

int main() { std::cout << "Result of two number addition is " << Add(10, 20); }

int Add(int x, int y, int z = -1) { return x + y; }
```

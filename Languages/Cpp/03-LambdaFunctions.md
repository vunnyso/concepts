<h1 style="text-align:center;"> Lambda Functions</p>

### Overview

- In C++, lambda functions are a way to define anonymous functions (functions without names) directly in the body of the code.
- They were introduced in C++11 and have become increasingly powerful with each subsequent C++ standard

### Basic syntax

```cpp
[capture] (parameters) -> return_type {
    // function body
}
```

- **capture:** Specifies which variables from the enclosing scope are visible inside the lambda.
- **parameters:** Like any function, can be empty or include typed parameters.
- **return_type:** Optional unless required for clarity or for complex return types.
- **Function body:** The actual logic of the lambda.

### Basic program

```cpp
#include <iostream>

using namespace std;

int main() {
    auto greet = []() {
        cout << "Hello from greetd which is lambda function!" << endl;
    };
    greet();
    return 0;
}
```

### Lambda function with paramters and return type

```cpp
#include <iostream>

using namespace std;

int main() {
    auto add = [](int a, int b) -> int  {
       return a + b;
    };
    cout << "Sum of two numbers " << add(3, 4) << endl;
    return 0;
}
```

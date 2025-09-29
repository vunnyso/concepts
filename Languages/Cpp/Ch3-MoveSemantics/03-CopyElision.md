<h1 style="text-align:center;"> Copy Elision </p>

### Copy Elision

- Copy elision is a compiler optimization technique in C++ that eliminates unnecessary copying or moving of objects.
- It typically occurs when:
- Returning a local object from a function.
- Initializing an object with a temporary (e.g.,
  ```cpp
  MyClass obj = MyClass();
  ```

### When used

- C++ guarantees copy elision in certain situations (especially from C++17 onward), such as:
- RVO (Return Value Optimization): The compiler constructs the return value directly in the memory location of the caller.
- NRVO (Named Return Value Optimization): Applies when returning a named local variable.
- Since C++17, copy elision is mandatory in some cases, even if the copy/move constructor is deleted.

### Key Points:

- Pre-C++17 (e.g., C++11 or C++14):
  - Copy elision is allowed but not mandatory.
  - You can observe copy/move constructors being called depending on optimization level.
  - You can somewhat reduce/eliminate elision using flags like -fno-elide-constructors.

- C++17 and later:
  - Some copy elision is mandatory by the standard (e.g., returning a temporary).
  - The compiler must not call copy/move constructors in those cases, even if you try to prevent it.

### Flags

| Flag                      | Description                                                                         |
| ------------------------- | ----------------------------------------------------------------------------------- |
| `-fno-elide-constructors` | Tells the compiler **not to perform optional copy elision** (only works pre-C++17). |
| `-std=c++14` (or lower)   | Use with `-fno-elide-constructors` to observe constructor calls.                    |
| `-O0`                     | Disable optimizations to better observe behavior.                                   |

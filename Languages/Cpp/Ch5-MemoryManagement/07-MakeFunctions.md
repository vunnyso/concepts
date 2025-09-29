<h1 style="text-align:center;"> Make Functions </p>

### Overview

- Smart pointers provide global functions through which you can construct smart pointer without manually allocate memory for underlying functions.
- Provided for both unique and shared pointers.
- Syntax
  ```cpp
  auto p = make_unique<int>(5);
  auto p1 = make_unique<int>(3, 5);
  auto p2 = make_shared<int[]>(5);
  p2[1] = 0;
  ```
- Behave like factory function

### Advantages

- If you use new to allocate memory by yourself then shared pointer will also internally invoke new to allocate memory for control block.
- If we use `make_shared` have knowledge about internals of shared pointer, then it allocate memory for control block and underlying resources using one new call.
- Same for deletion, then will be one delete call, so multiple call can be avoided.
- Not applicable for make_unique

### Disadvantages

- Cannot use custom deleter with make functions.

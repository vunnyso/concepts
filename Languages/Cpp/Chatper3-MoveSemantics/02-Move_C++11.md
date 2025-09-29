<h1 style="text-align:center;"> Move Semantics </p>

### Copy & Move Semantics

- Copy is implemented through copy constructor
- Copy of the object state is created
- Wasteful in case copy is created from a temporary
- Instead, the state can be moved from the source object
- Implemented through move semantics

### Rule Of 5

- All should be defined if a user implements any of the following
  - Destructor
  - Copy constructor
  - Copy assignment operator
  - Move constructor
  - Move assignment operator

### Rule of 0

- If a class does not have ownership semantics, then do not provide any user defined function from the rule of 5
- This is called the “rule of 0”
- This way the compiler will automatically synthesize the necessary functions
- Providing user-defined implementation of some functions will prevent the compiler from synthesizing others

### Automatic Synthesis of Functions

- Compiler will synthesize the five functions only if no other user-defined implementation exists
- If any of the five functions is implemented by the user, then the move operations will become deleted
- If any of the move operations are implemented by the user, then the copy operations & other move operation will be deleted

### Synthesis overview

Which functions are automatically synthesized by compiler when custom implmenation of some other functions is provided.

| Custom           | Copy Constructor | Copy Assignment | Move Constructor | Move Assignment | Destructor |
| ---------------- | ---------------- | --------------- | ---------------- | --------------- | ---------- |
| Copy constructor | _Custom_         | `=default`      | `=delete`        | `=delete`       | `=default` |
| Copy assignment  | `=default`       | _Custom_        | `=delete`        | `=delete`       | `=default` |
| Move constructor | `=delete`        | `=delete`       | _Custom_         | `=delete`       | `=default` |
| Move assignment  | `=delete`        | `=delete`       | `=delete`        | _Custom_        | `=default` |
| Destructor       | `=default`       | `=default`      | `=delete`        | `=delete`       | _Custom_   |
| None             | `=default`       | `=default`      | `=default`       | `=default`      | `=default` |

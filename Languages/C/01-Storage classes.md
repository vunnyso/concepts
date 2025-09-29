<h1 style="text-align:center;"> Storage Classes </p>

### Storage classes

In C language, storage classes define the scope, visibility, lifetime, and default initial value of variables or functions. There are four storage classes in C:

1. **auto**

- Default storage class for local variables inside functions.
- Scope: Local to the block in which it is defined.
- Lifetime: Created when the block is entered, destroyed when it exits.
- Initial Value: Garbage (undefined) if not explicitly initialized.
- Example
  ```c
  void func() {
      auto int x = 10; // 'auto' is optional here
      printf("%d\n", x);
  }
  ```

2. **register**

- Suggests to the compiler to store the variable in a CPU register for faster access.
- Scope: Local to the block.
- Lifetime: Same as auto – limited to the block.
- Initial Value: Garbage if uninitialized.
- Can't use & (address-of) operator on register variables.
- Example
  ```c
  void func() {
        register int counter = 0;
        // printf("%p", &counter); // ❌ Error: can't take address
    }
  ```

3. **static**

- Keeps a variable’s value across function calls.
- Scope: Depends on where it's used:
- Inside a function: local scope, persistent lifetime.
- Outside a function: file-level scope, not accessible from other files.
- Initial Value: Zero (0) by default.
- Example
  ```c
  void func() {
        static int count = 0;
        count++;
        printf("%d\n", count);
    }
    //Calling func() multiple times will print incrementing values.
  ```

4. **extern**

- Declares a variable or function that is defined in another file or later in the same file.
- Used for global variables across multiple files.
- Does not allocate memory (just a declaration).
- Example <br>
  **File1.c**
  ```c
  int shared = 100;
  ```
  **File2.c**
  ```c
   extern int shared;
   printf("%d", shared); // Accesses variable from File1.c
  ```

| Storage Class | Scope         | Lifetime       | Initial Value | Keyword Needed? |
| ------------- | ------------- | -------------- | ------------- | --------------- |
| `auto`        | Block/local   | Block          | Garbage       | Optional        |
| `register`    | Block/local   | Block          | Garbage       | Yes             |
| `static`      | Block or file | Entire program | Zero (0)      | Yes             |
| `extern`      | Global        | Entire program | Zero (0)      | Yes             |

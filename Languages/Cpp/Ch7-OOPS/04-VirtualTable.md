<h1 style="text-align:center;">  Virtual Table </p>

### Overview

- When you use virtual functions, C++ needs a way to decide at runtime which function to call.
- Virtual table are created for all classes which have one virtual function or classes which are derived from base which has virtual function.
- That’s where two hidden mechanisms come in:
  - vtable → a table of function pointers
  - vptr → a hidden pointer in each object that points to the correct vtable

### Dump virtual tables

```bash
g++ -g vtable_demo.cpp -o vtable_demo
nm -C vtable_demo | grep vtable
```

### Check using clang++

Run below command and search for vtable

```bash
clang++ -Xclang -fdump-record-layouts vtable_demo.cpp
```

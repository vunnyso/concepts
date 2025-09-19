<h1 style="text-align:center;"> Compilation Process </p>

### C++ Build Steps

1. **Preprocessing**

- Runs the C preprocessor (cpp).
- Handles:
  - Removing comments.
  - Expanding macros (#define).
  - Processing #include (inserting header contents).
  - Handling conditional compilation (#ifdef, #ifndef, etc.).
- Output: a single translation unit (.i file in GCC/Clang with -E).

2. **Compilation**

- The compiler takes the preprocessed code and:
  - Translates it into assembly language for the target architecture.
  - Performs syntax/semantic checks and optimizations.
- Output: an assembly file (.s with -S).

3. **Assembly**

- The assembler (as) converts the assembly code into machine code (binary instructions).
- Produces an object file (.o or .obj).
- Output: object code for each source file, not yet linked.

4. **Linking**

- The linker (ld) combines multiple object files and libraries:
- Resolves symbol references (e.g., function calls, global variables).
- Merges them into a single executable (or shared/static library).
- Output: final executable binary (a.out, or user-defined with -o).

### Visual Flow

```css
source.cpp ──► [Preprocessor] ──► source.i
source.i   ──► [Compiler]     ──► source.s
source.s   ──► [Assembler]    ──► source.o
source.o   ──► [Linker]       ──► executable
```

### ⚡ Useful GCC/Clang flags to observe stages:

- -E → Stop after preprocessing.
- -S → Stop after compilation (gives assembly).
- -c → Stop after assembly (gives object file).
- (no flag) → Go through all stages to produce executable.

<h1 style="text-align:center;"> Compilation Stages </p>

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

### Phases of a Compiler

A compiler typically has six main phases. Synthesis phase, also known as the code generation or code optimization phase, is the final step of a compiler

1. Lexical Analysis (Scanning)

- Converts raw source code (a stream of characters) into tokens (keywords, identifiers, operators, literals, etc.)
- Removes whitespace and comments.

2. Syntax Analysis (Parsing)

- Takes tokens and checks whether they follow the grammar of the language.
- Produces a Parse Tree (or Abstract Syntax Tree, AST).

3. Semantic Analysis

- Checks meaning and correctness of the program:
  - Type checking (e.g., can’t add int + string).
  - Scope resolution (variable/function declarations).
  - Function argument matching.

4. Intermediate Code Generation

- Converts the AST into an Intermediate Representation (IR) — easier to optimize and portable across architectures.

5. Optimization (Intermediate Code Optimization)

- Improves efficiency without changing meaning:
  - Constant folding: 2 + 3 → 5
  - Dead code elimination: remove unused variables.
  - Loop optimization.

6. Code Generation

- Converts optimized IR into target machine code (assembly or bytecode).
- Allocates registers, assigns memory addresses.

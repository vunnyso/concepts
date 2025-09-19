## Memory Layout of C Program

- Basically divided into 5 sections

1. Text Segement
   - Contains executable instructions.
   - Its read only section.
   - Shared among different programs.

2. Initalized data segment
   - Global and static variables which are initalized.
   - Can be further divided into read only and read-write areas.
   - Fixed in size.

3. Uninitalized data segement
   - BSS (Block started by symbol) - starts at end of data segment
   - Uninitalized global and static variables.

4. Stack
   - On x86 PC architecture it grows towards zero address.
   - Manages function calls, local variables and input arguments.
   - Stack pointer tracks top of the stack.
   - Set of values pushed for one functon call stack frame.

5. Heap
   - Used for dynamic memory allocation
   - End of BSS segment and grows towards higher addrress.
   - Heap area managed by malloc, realloc, free, brk, sbrk system calls.

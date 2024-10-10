## API
Appplication programming interface
* Memory Image
    * Code and data which is Static 
    * Stack and Heap which is Dynamic

## System Call
* A system call is a mechanism that allows a program to request a service from the operating system's kernel.
* It provides an interface between user-level processes and the operating system
* Every system call has a unique number.
* System runs at higher priviledge level.
* Most of system comply to POSIX API.

* Common Examples of System Calls
    * File Operations:
        * open(), read(), write(), close() in Unix-like systems.
    * Process Control:
        * fork() (for creating new child process), init is ancestor of all processes
        * exec() (Make a process execute a given executable)
        * exit() (to terminate a process).
    * Memory Management:
        * mmap() (for memory mapping)
        * brk() (to allocate or deallocate memory).
    * Networking:
        * socket(), connect(), bind(), send(), recv().

## fork
* New process is created by making copy of parent memory image.

# exec
* If we want child to do something different than its parent.
* Load another executable to its memory memory

# shell
* init spawns shell like bash.
* shell reads user command, fork child, exec the command executable, waitr for it to finish and reads next command.
* File operation manipulation can happen when we use redirection operator. Child need to be modified accorindgly.

For Example\
When Application program executes `execve(path, argv, envp)` it will store system call number in cpu register %eax and it will go to glibc wrapper function (sysdeps/unix/sysv/linux/execve.c) which have 0x80
which invokes gerneic Trap handler(arch/x86/kernel/entry_32.S) and here it will switch from user mode to kernel mode.
From generic Trap Handler it will invoke `call sys_table[_NR_execv]` and call system call service routine and return back to Trap Handler and which further return backs to user space.

References
* https://www.youtube.com/watch?v=MT7q8An9eL0
* https://www.youtube.com/watch?v=tWPa-rZiGM8
## Process
* Running program is called process.

## PCB (Process control block) - task_struct in kernel
* Process ID (PID)
* Process state
* Pointer to memory locations
* CPU Context Registers
    * Program counter
    * Stack Pointer
    * Current operands
* File descriptors
    * Pointers to open files and devices
* Pending signals


## Task list
Its circular doubly linked list maintaibled in kernel.


## States of process
* Running - Currently executing on CPU
* Ready - Waiting to get scheduled
* Blocked - Waiting for disk, and if disk finishes reading it will issue interrupt
* New - Being Created, yet to run
* Terminated

## Process termination
* Can happen using exit()
* OS terminates a misbehaving process.
* Terminate process becames zombie
* Parent calls wait() then zombie child is reaped or cleaned.
* init process adopts orphans and reaps them.
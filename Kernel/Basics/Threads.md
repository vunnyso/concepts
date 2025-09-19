## Single Threaded Process

- PC - Points to current instruction beign run.
- SP - Points to stack frame of current function call.
- PC moves to instructions which are being executed by CPU

## Data structure

- thread_info used by kernel to store thread info.
- Generally kept at bottom of process.

## Multi Thread

- A thread another copy of process that executes independently
- Then will have different program counters and different stack pointers
- Threads share same address space (Stack, Heap)
- If we want to run same process then fork is not good option as it involves extra copies and IPC if needed.
- Threads has smaller foottprint.
- Communicating will be easier in threads.
- Helps to achieve parallelism.

## Concurreny

- Multiple processes and threads running at same time even on single CPU corre

## Scheduling Threads

- In context of threads PC, registers are saved into/restrored from Thread control block(TCB)
- Each PCB has multiple linked TCB.
- Threads are scheduled indendently by kernel called kernel threads.
- Some are user level threads.
- Library multiplexes larger number of user threads over smaller number of kernel threads.
- Low overhead in context switch but we loose parallelism.
- When we scheudle thread kernek treats as its seperate entity which needs to be scheduled.
- Can use pthread library using `pthread_create(&p1, NULL, mythread, "A");`

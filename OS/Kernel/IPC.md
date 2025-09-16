## Inter Process communication (IPC)

- Processes don't share memory with each other.
- If some process wants to communicate with another process OS use IPC

## Shared Memory

- Two processes can get access to same memory region via `shmget()` system call, which returns pointer to memory area.
- API call shmget(key_t key, int size, int shmflg)
- By providing same key two processes can get same memory segment
- Need to take care of overriding

## Signals

- Certain signals are supported by OS.
- Some signals have fixed meaning and some are user defined.
- Signal handler - Each process has default code for each signal
- Some signal can be overridden to do other things.
- Only poking cannot send data or bytes

## Sockets

- Can be used for two processes on same or different machine.
- TCP/ UDP sockets across differnt machines
- Unix sockets on same machine
- Process open sokcets and connect them to each other.
- Message written into one socket can be read from another.
- OS transfer data across socket buffers

## Pipes

- Half duplex communication
- Return two file descriptor read handle adn write handle.
- Dat written in one file descriptor can be read through another.
- Regular pipes - both fd in same process. with which parent and child share same fd.
- Named pipes - Two end points of pipe can be used in different process
- Pipe data buffered in OS buffers between read and write.

## Message Queues

- Mailbox abstraction
- Process can open mailbox at specified location.
- Process can send and receive messages from mailbox
- OS buffers messages between send and receive.

### IPC communication

- It can be blocking or non-blocking
- Block example
  - Reading from socket/pipe that has no data
  - Writing to full socket

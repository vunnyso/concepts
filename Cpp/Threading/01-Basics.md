<h1 style="text-align:center;"> Threading </p>

### Intro
- In every application there is a default thread which is main()
- A thread is light weight process. Idea is achieve parallelism by dividing a process into multiple threads.

### Concurrency
* Concurrency refers to the ability to process multiple tasks or threads at the same time.
* It is used to improve the program's performance and response time.
* It helps in seperation of concerns, example video player cna have 3 threads, one for Audio, Video and GUI.

### Ways to thread in C++
1) Function Pointers
2) Lambda Functions
3) Functors
4) Member Functions
5) Static Member Functions


### Mutex (Mutal Exclusion)
- Race condition - In which 2 more threads which try to modify the data at same time.
- If there is race condition then we have protect it and procted section is called critical section.
- Mutex is used to avoid race condition. we use lock() and unlock()

### Join
- Once thread is started we wait for the thread to finish by calling join() on thread object.
- Double join will result in program termination
- If needed we should check if thread is joinable before joining 


### Detach
- This is used to detach newly created thread from parent thread

### References
https://www.youtube.com/watch?v=FRBHvbu7q4E&list=PLk6CEY9XxSICcxsEeT3AKAda1cAoQXhGv&index=5
## Locks
* Shared variable `i = i + 1`
* We use speical lock vraiable to protect it.
* Example 
    ```
    lock_t mutex;
    lock(&mutex);
    i = i + 1;
    unlock(&mutex);
    ```
* All threads accessing critical section share a lock.
* Thread which succeed in taking lock became owner of lock.

## Building Lock
* Mutal Exclusion
* Fairness
* Low overhead


## Disbaling interrupts
* Generally not given to user app
* Not possible to control on multi processor system.
* only possible in single core and priviledge mode.

## Implemation is not possible in software
* Say we cnanot use flag variables to check for lock
* Support is need in hardware for atomic instructions.
* Simple lock can be done using test and set.
* Spin lock using compare and swap

## Sleeping Mutex
* It can sleep using `yield()` which is system call and ask processor to schedule out.
* Moves from running to ready state.
* Most of userspace lock implemenations are of sleeping mutex.
* Inside OS code we don't use `yield()` because if kernel sleep then who will wake up the kernel.

## Spin lock in kernel
* Disable interrupts
* Release lock ASAP.
* Never don't anything that can block or interrupt kernel.

## When locks should be used
* Lock should be acquired before accessing shared data structures.
* Use "Thread-safe" data structures.
* Coarse-grained locking - One big lock for all shared data.
* Fine-grained locking - Harder to maange
* Fine-graineed good for performance

## Conditional variables
* For multi threaded applications where we need wait and signalling.
* Queue where thread can put itself for waiting on some condition.
* When condition is true thread can signal the condition variable to wake up wiating thread.
* Siganl wake up one thread or signal broadcast wakeups up all the waiting threads.
* Ensure odering
* Example
    ```
    pthread_mutex_t m = PTHREAD_MUTEX_INITALIZED;
    pthread_cond_t c = PTHREAD_COND_INITALIZER;
    Pthread_mutex_lock(&m);
        while(done == 0)
        Pthread_cond_wait(&c, &m);
    Pthread_mutex_unlock(&m);
    ```

## Seamphores
* Similar to conditinal variable with an underlying counter.
* Two functions on seamphore varaible can increament or decrement.
* Example
    ```
    sem_t m;
    sem_init(&m, 0, X);
    sem_wait(&m);
        // Critical section
    sem_post(&m);
    ```
## Memory Barriers
* Instructions to compiler not to re-order instructions at given point.
* Low level machine code that operates on memoty shared between multiple devices.
* using `mb()` 
* For read we can use `rmb()`
* For value initalization. 
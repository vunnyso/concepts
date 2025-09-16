<h1 style="text-align:center;">  Multithreading libraries </p>

### 🧩 Standard Library (C++11 and later)

1. `<thread>`

- Introduced in C++11.
- Provides the `std::thread` class to create and manage threads.
- Example:
  ```bash
  std::thread t([]{ std::cout << "Hello from thread\n"; });
  t.join();
  ```

2. `<mutex>`

- Provides mutual exclusion primitives like `std::mutex`, `std::recursive_mutex`, `std::lock_guard`, `std::unique_lock`

3. `<condition_variable>`

- Provides `std::condition_variable` and `std::condition_variable_any` for thread communication.

4. `<future>` and `<promise>`

- Asynchronous result retrieval using `std::async`, `std::future`, `std::promise`

5. `<atomic>`

- Provides atomic types and operations for lock-free programming `std::atomic<T>`.

### 🆕 Modern C++ Extensions (C++20 and later)

- `std::jthread` (C++20)
  - A safer alternative to std::thread with automatic joining on destruction.

- std::stop_token / std::stop_source (C++20)
  - Cooperative thread cancellation.

- `std::latch`, `std::barrier`, `std::semaphore` (C++20)
  - New synchronization primitives for advanced concurrency patterns.

### 🧰 Popular Third-Party Libraries

1. Boost.Thread
2. Intel Threading Building Blocks (TBB)
3. OpenMP
4. Microsoft Parallel Patterns Library (PPL)

### Summary Table

| Library Feature        | Standard  | Description                            |
| ---------------------- | --------- | -------------------------------------- |
| `<thread>`             | ✅ C++11+ | Basic thread creation and management   |
| `<mutex>`              | ✅ C++11+ | Mutual exclusion (locks)               |
| `<condition_variable>` | ✅ C++11+ | Wait/notify mechanism                  |
| `<atomic>`             | ✅ C++11+ | Lock-free programming                  |
| `Boost.Thread`         | ❌        | Thread abstraction and synchronization |
| `Intel TBB`            | ❌        | High-level parallelism (task-based)    |
| `OpenMP`               | ❌        | Compiler-based multithreading          |
| `PPL (MSVC)`           | ❌        | Parallel programming on Windows        |
| `std::jthread`         | ✅ C++20+ | Managed threads with stop tokens       |

<h1 style="text-align:center;"> RAII </p>

### RAII

- Stands for Resource Acquisition Is Initialization
- Lifetime of resource is bound to local object.
- When local object is destroyed in its desctructor it will automically release the resource.

### Why Do We Need RAII? The Problem It Solves

1. Resource Leaks: Forgetting to delete memory, fclose a file, or unlock a mutex could lead to your program consuming more and more resources, eventually slowing down or crashing.
2. Exception Safety Nightmares: If an exception occurred before a resource was released, that resource might remain forever unreleased, leading to critical system issues.
3. Boilerplate Fatigue: Manual resource management often required repetitive try-catch-finally blocks or cumbersome goto statements for cleanup, making code harder to read and maintain.

### RAII solve

1. Leak-free by design.
2. Automatically exception-safe.
3. Cleaner and more concise.

### Example

```cpp
#include <cstdio>

class FileRAII {
    FILE* file;
public:
    FileRAII(const char* name, const char* mode) {
        file = std::fopen(name, mode);
    }

    ~FileRAII() {
        if (file) std::fclose(file);  // Auto cleanup
    }

    void write(const char* data) {
        if (file) std::fputs(data, file);
    }

    // Optional: delete copy to prevent issues
    FileRAII(const FileRAII&) = delete;
    FileRAII& operator=(const FileRAII&) = delete;
};
//usage
void save() {
    FileRAII myfile("out.txt", "w");
    myfile.write("RAII saves the day!");
}
```

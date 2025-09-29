<h1 style="text-align:center;"> Shared Pointers </p>

### Shared Pointers

- Multiple shared_ptr instances can own the same object.
- The object is automatically destroyed when the last shared_ptr owning it is destroyed or reset.
- Uses reference counting internally to track how many shared_ptrs share ownership.
- Defined in the <memory> header.
- Safe alternative to raw pointers, helps prevent memory leaks and dangling pointers.
- Works well with STL containers and algorithms.

### 🧠 Key Features

- Can be copied and assigned — increases reference count.
- Automatically deallocates memory when the reference count drops to zero.
- Supports custom deleters.
- Thread-safe reference count — safe to use across threads.
- Can be combined with std::weak_ptr to break cyclic dependencies.

### ⚠️ Cautions

- Slightly more overhead than unique_ptr due to reference counting.
- Can cause memory leaks if there are cyclic references (e.g., object A holds a shared_ptr to B, and B holds one to A).
- Use std::weak_ptr to solve this.

#### ✅ Basic Usage Example

```cpp
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<int> a = std::make_shared<int>(10);
  std::shared_ptr<int> b = a;   // Both a and b shared same ownership
  std::cout << *b << std::endl; // Outputs value 10
  std::cout << "Usage Count: " << a.use_count() << std::endl; // Outputs 2
  return 0;
}
```

### ✅ Usage Example with class

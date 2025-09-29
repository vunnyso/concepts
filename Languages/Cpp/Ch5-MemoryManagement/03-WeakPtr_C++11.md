<h1 style="text-align:center;"> Weak Pointers </p>

### Overview

- Always initalized with shared_ptr.
- weak_ptr points to control block.
- Control block will be deleted when weak_ptr is deleted
- Does not affect the reference count of the shared_ptr.
- Primarily used to break cyclic dependencies that could otherwise lead to memory leaks (which can occur when two shared_ptr instances reference each other).
- Defined in the `<memory>` header.
- Provides a way to observe a shared_ptr without preventing the object from being destroyed.

### 🧠 Key Features

- Non-owning: It doesn't contribute to the reference count, so the object can be deleted even if there are still weak_ptr instances pointing to it.
- Can lock the weak_ptr to obtain a shared_ptr that is valid only if the object still exists (i.e., if the reference count is greater than zero).
- Useful for observer patterns and managing temporary references to objects.
- Thread-safe for the internal reference count management.

### ⚠️ Cautions

- Expired weak_ptr: If the managed object has been deleted (i.e., all shared_ptr owners have been destroyed), a weak_ptr will be considered "expired" and cannot be locked to a valid shared_ptr. Always check the result of lock().
- Memory leaks in cycles: While weak_ptr is great for breaking cycles between shared_ptrs, if you don't handle the cycles carefully in your design, memory management can still become tricky.

#### ✅ Basic Usage Example

```cpp
#include <iostream>
#include <memory>

class Test {
public:
  Test() { std::cout << "Constructor" << std::endl; }
  ~Test() { std::cout << "Destructor " << std::endl; }
};

int main() {
  std::shared_ptr<Test> sp = std::make_shared<Test>();
  std::weak_ptr<Test> wp = sp;

  if (wp.lock()) {
    std::cout << "Weak pointer is valid" << std::endl;
  } else {
    std::cout << "Weak pointer expired" << std::endl;
  }
  sp.reset();
  if (wp.lock()) {
    std::cout << "Weak pointer is valid" << std::endl;
  } else {
    std::cout << "Weak pointer expired" << std::endl;
  }
  return 0;
}
```

#### ✅ Another Example

```cpp
#include <iostream>
#include <memory>

class Printer {
  std::weak_ptr<int> m_val;

public:
  void SetValue(std::weak_ptr<int> val) { m_val = val; }
  void GetData() {
    if (m_val.expired()) {
      std::cout << "Resource not avaiable " << std::endl;
      return;
    }
    auto sp = m_val.lock();
    std::cout << "Value of pointer is " << *sp << std::endl;
    std::cout << "Reference count: " << sp.use_count() << std::endl;
  }
};

int main() {
  std::shared_ptr<int> ptr{new int{1}};
  Printer p;
  p.SetValue(ptr);
  if (*ptr > 10) {
    ptr = nullptr;
  }
  p.GetData();
  return 0;
}

``
```

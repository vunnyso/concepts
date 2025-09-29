<h1 style="text-align:center;"> Unique Pointers </p>

### unique_ptr

- Ensures single ownership of a resource; can't be copied, only moved.
- Automatically deletes the owned object when the unique_ptr goes out of scope (RAII principle).
- Defined in the `<memory>` header.
- Supports custom deleters using lambda or function pointers.
- Can be transferred using std::move to transfer ownership to another unique_ptr.
- Safer alternative to raw pointers; prevents memory leaks and dangling pointers.
- Syntax
  ```cpp
  std::unique_ptr<Type> ptr = std::make_unique<Type>(args...);
  ```

### Cannot be copied

```cpp
std::unique_ptr<int> a = std::make_unique<int>(10);
std::unique_ptr<int> b = a; // ❌ Compile error
std::unique_ptr<int> b = std::move(a); // ✅ Ownership transferred
```

### Example

```cpp
#include <iostream>
#include <memory>

class Integer {
  int *m_val;

public:
  Integer(int val) : m_val{new int{val}} { std::cout << "Constructor invoked"; }
  ~Integer() { std::cout << "Destructor invoked " << std::endl; }
  int GetValue() { return *m_val; }
};

void Display(Integer *p) {
  if (!p) {
    return;
  }
  std::cout << p->GetValue() << std::endl;
}
void Store(std::unique_ptr<Integer> p) {
  std::cout << "Value stored " << p->GetValue() << std::endl;
}

int main() {
  std::unique_ptr<Integer> p{new Integer(1)};
  if (p == nullptr) {
    p.reset(new Integer(10));
  }
  Display(p.get());
  Store(std::move(p)); // Unique pointer cannot be copied we need to move

  return 0;
}
```

<h1 style="text-align:center;"> Initializer Llist </p>

### std::initializer_list

- Lightweight proxy object that represents an array of objects
- Constructed automatically from a braced list of elements
  - auto
  - ranged for loop
  - constructor
  - function
- Not a true container, but has similar behaviour
- Provides access to its elements through iterators
- Defined in <initializer_list> header

### Example

```cpp
#include <cassert>
#include <initializer_list>
#include <iostream>

class container {
  int arr[10];
  int m_size;

public:
  container() : m_size(0) {};
  container(std::initializer_list<int> list) : m_size(0) {
    assert(m_size < 10);
    auto itr = list.begin();
    while (itr != list.end()) {
      Add(*itr++);
    }
  }
  void Add(int x) {
    assert(m_size < 10);
    arr[m_size++] = x;
  }
  int operator[](int index) const { return arr[index]; }
  int GetSize() const { return m_size; }
  void Print(std::initializer_list<int> list) {
    for (auto &itr : list) {
      std::cout << itr << " ";
    }
  }
};

int main() {
  std::initializer_list<int> data{1, 2, 3};
  container c1;
  c1.Add(1);
  c1.Add(2);
  for (int i = 0; i < c1.GetSize(); ++i) {
    std::cout << c1[i] << " ";
  }
  std::cout << std::endl;
  container c2{4, 5, 6};
  c2.Print({1, 1, 1});
  std::cout << std::endl;
  for (auto it : {7, 8, 9}) {
    std::cout << it << " ";
  }
  return 0;
}
```

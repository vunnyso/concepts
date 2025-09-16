<h1 style="text-align:center;"> priority_queue</p>

## Features

- Similar to queue, but element with largest value stays at the top.
- Interally tree datastructure is maintained
- By default it will be maximum heap

### 1. Implemenation

- **Basic Program**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maximum heap by default
    priority_queue<int> maxpq;
    maxpq.push(1); // Results in {1}
    maxpq.push(10); // Reuslts in {10,1}
    maxpq.emplace(3); // Results in {10, 3, 1}

    cout << maxpq.top() << endl; // Prints 10
    maxpq.pop();
    cout << maxpq.top() <<endl; // Prints 3


    // Maximum Heap stores mimimum element at top
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(20);
    minpq.push(30);
    minpq.emplace(1);
    minpq.emplace(2);
    cout << minpq.top() << endl; // Prints 1
    return 0;
}
```

## 2. Complexity in Priority Queue

| Operation  | Complexity |
| ---------- | ---------- |
| push / pop | log(n)     |
| top        | O(1)       |

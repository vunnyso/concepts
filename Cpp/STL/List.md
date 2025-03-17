<h1 style="text-align:center;"> List </p>

## Implementation
Implemented using doubly linked list.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    // Adding elements in the List
    ls.push_back(3); // Results in [3]
    ls.emplace_back(4); // Results in [3, 4]
    ls.push_front(2); // Results in [1, 2 ,3]
    ls.emplace_front(1); // Results in [1, 2, 3, 4]

    // Remove elements from the List

    for(auto item: ls)
        cout << item << " ";
}
```
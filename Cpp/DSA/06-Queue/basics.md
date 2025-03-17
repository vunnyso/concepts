## What is Queue?
Stack is datastructure that holds certain type of data which can be char, string or customized data.
Follows FIFO (First in First Out) mechanism.

### Most common functions
1. push()
2. pop() - Takes last element and delete from stack
3. top() - Gives Last element 
4. size()


### Syntax to declare vector
```cpp
 queue<dataType> queue;
```

### 1. Implemenation

- **Basic Program**
   - Size has to known or constant size
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
   queue <int> q;
   q.push(1); // Reuslts in {1}
   q.emplace(2); // Reuslts in {1, 2}
   q.back() += 5; // Resulst in {1, 7}

   cout << q.front() << endl; // Outputs 1
   cout << q.back() << endl; // Outputs 7

   while(!q.empty()) {
       cout << q.front() <<" ";
       q.pop();
   }
}
```

## 2. Time Complexity
Most of operations in constant time which is O(1)

## 3. Deque (Double ended Queue)
* Provides insertion and deletion for both front and back
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  deque<int> dq;
  dq.push_front(1);
  dq.push_front(2);
  dq.push_back(3);
  dq.push_back(4);
  cout<<"Accessing like Index " <<dq.at(3) << endl;
  while(!dq.empty()) {
    cout << dq.front() <<" ";
    dq.pop_front();
  }

   return 0;
}

```

## 4. Key Differences
| Feature | queue | deque |
| --------|--------|--------|
| Insertion or Deleteion | Only from front | Front or back| 
| Random Access | Not possible | using at() |
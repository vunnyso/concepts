## What is the Set?
* Set are associative container in which each element has to be unique.
* The values are in sorted order which can be either ascending or descending.
* Internally tree is manitained.

#### Syntax
```cpp
set<data_type> set_name;
```

### Example
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> myset;
    myset.insert(1); // {1}
    myset.emplace(3); // {1, 3}
    myset.insert(2); // {1, 2, 3}
    myset.insert(1); // {1, 2, 3} - Here 1 will not inserted as set wil be unique

    // { 1, 2, 3}
    auto it = myset.find(2); // Give address of the element
    cout <<"Found element " << *(it)<< endl;

    // {1, 2, 3}
    auto itr = myset.find(6); // If cannot find, it will return myset.end() which points right after end
    cout <<"Found element " << *(itr)<< endl;

    myset.erase(1); // We can give element or address, Delete and maintains sorted Order

    cout << myset.count(2) << endl; // Give occurance, if element exits give 1 otherwise 0
    return 0;
}
```

## 2. Time Complexity
insert, erase, find make logarithmic Time O(log n)

## 3. Multiset
We can use multiset<int> in case we just want to store element in sorted order and can contain duplicates.

## 3. unordered_set
Stores unique elements, however order of elements can be random.
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
   unordered_set<int> us;
   us.insert(10); // {1}
   us.emplace(20); // {1, 20}
   us.insert(1); // { 1, 20, 10}
   us.insert(10); // {1, 20, 10}

   for (auto item: us)
       cout << item <<" ";
   return 0;
}
```
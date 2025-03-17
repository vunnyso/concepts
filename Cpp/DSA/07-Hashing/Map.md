## What is the Map?
* Associate container which stores data in key value format, where key can be of any datastructure and will be unique.
* Stores unique keys in sorted order.
* Implemented as balanced binary search tree (Red-Black Tree)

## map syntax
```cpp
map<key,value> map;
```

### Example
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
   map <int, int> mp1;
   map <int, pair<int, int>> mp2;
   map <pair<int, int>, int> mp3;

   mp1[1] = 2;
   mp2[2] = {2, 3};
   mp3[{2, 3}] = 10;

   cout << mp1[1] << endl; // Looks for value for specified key
   cout << mp1[9] << endl; // Print 0 or NULL if cannot find element

   auto itr = mp1.find(1);
   if (itr != mp1.end())
      cout << "Value found is " << itr->second << endl;
    else
        cout<< "Value not found" << endl;

   for (auto it: mp1){
     cout << it.first <<" " << it.second << endl;
   }

   return 0;
}
```


## Variations

1. **multimap**
* Syntax

    ```cpp
    multimap<key,value> map;
    ```

* Use of multi map
 We can store duplicate keys but everything will be in sorted order.


2. **unordered_map**
* Syntax

    ```cpp
    unordered_map<key,value> map;
    ```

* Use of unordered map
 Will have unique keys but order will be randomnized.

-----

## Difference
| Unordered_map    | Map |
| :-------- | :------- |
| The unordered_map key can be stored in any order.	  | The map is an ordered sequence of unique keys     |
|Unordered_Map implements an unbalanced tree structure due to which it is not possible to maintain order between the elements | Map implements a balanced tree structure which is why it is possible to maintain order between the elements (by specific tree traversal)|
| The time complexity of unordered_map operations is O(1) on average. | The time complexity of map operations is O(log n) |
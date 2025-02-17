## What is the Set?
Set are associative container in which each element has to be unique.
The values are in sorted order which can be either ascending or descending.

#### Syntax
```cpp
std::set<data_type> set_name;
```

### Example
```cpp
#include <iostream>
#include <set>

int main(){
    std::set<int> mySet;
    mySet.insert(1);
    mySet.insert(3);
    mySet.insert(1);
    for(auto &itr: mySet)
        std::cout<<itr<<" ";
}
```

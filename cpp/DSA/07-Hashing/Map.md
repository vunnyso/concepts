## unordered_map syntax
```cpp
std::unordered_map<key,value> umap;
```

### Example
```cpp
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> umap;
    umap["India"] = 91;
    umap["Finland"] = 358;
    umap.insert(std::make_pair("Austria", 43));
    umap.insert(std::make_pair("Belgium", 32));

    for(auto item: umap)
        std::cout<<item.first <<" " <<item.second << std::endl;
    return 0;
}
```

### Output
```
Belgium 32
Austria 43
Finland 358
India 91
```
-----

## map syntax
```cpp
std::map<key,value> umap;
```
### Example
```cpp
#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> map;
    map["India"] = 91;
    map["Finland"] = 358;
    map["Austria"] = 43;
    map["Belgium"] = 32;

    for(auto item: map)
        std::cout<<item.first <<" " <<item.second << std::endl;
    return 0;
}
```

### Output
```
Austria 43
Belgium 32
Finland 358
India 91
```
-----

## Difference
| Unordered_map    | Map |
| :-------- | :------- |
| The unordered_map key can be stored in any order.	  | The map is an ordered sequence of unique keys     |
|Unordered_Map implements an unbalanced tree structure due to which it is not possible to maintain order between the elements | Map implements a balanced tree structure which is why it is possible to maintain order between the elements (by specific tree traversal)|
| The time complexity of unordered_map operations is O(1) on average. | The time complexity of map operations is O(log n) |
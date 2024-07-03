## What is Stack?
Stack is datastructure that holds certain type of data which can be char, string or customized data.
Follows LIFO (Last in First Out) mechanism.

### Most common functions
1. push()
2. pop() - Takes last element and delete from stack
3. top() - Gives Last element 
4. size()


### Syntax to declare vector
```cpp
 std::stack<dataType> st;
```

### 1. Initalization

- **Declaring and defining like lists**
```cpp
std::vector<int> vec {10, 20, 30};
```

- **Declaring an empty vector and then pushing values**
```cpp
// creates an empty vector
std::vector<int> vec;
// push value into vector
vec.push_back(10);
```

- **From another vector**
```cpp
// creates an empty vector
std::vector<int> vec1 = {10, 20, 30};
std::vector<int> vec2(vec1.begin(), vec1.end());
std::vector<int> vec3 = vec2;
```

### 2. Iterating through vector

- **Using for loop**
```cpp
std::vector<int> vec = {1, 2, 3};
for(unsigned int i = 0; i < vec.size(); i++)
    std::cout << vec[i];
```

- **Using iterator**
element in the vector.
```cpp
std::vector<int> vec = {1, 2, 3};
for(vector<int>::iterator itr = vec.begin(); itr < vec.end(); itr++)
    std::cout << *itr;
```

- **Using auto keyword**
```cpp
std::vector<int> vec = {1, 2, 3};
for(auto & item: vec)
    std::cout << item;
```

### 3. Common functions
- **Insert element**
```cpp
std::vector<int> vec = {1, 2, 3};
vec.push_back(4);
```

- **Delete element**
```cpp
std::vector<int> vec = {1, 2, 3, 4};
vec.pop_back();
```
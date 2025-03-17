## What is the vector?
A vector is a sequence container that stores elements of a specific data type, such as integers, floating-point numbers, or characters. It is a part of the Standard Template Library (STL) and is defined in the <vector> header file.

### Key features of vectors
1. Dynamic size: Vectors can grow or shrink in size as elements are added or removed.
2. Random access: Elements in a vector can be accessed using an index, just like an array. e.g., vector[index]
3. Efficient insertion and deletion: Vectors provide efficient insertion and deletion of elements at any position.
4. Memory management: Vectors automatically manage memory for the elements they store.
5. Internaly implemented as singly linked list.
6. Insert can be costlier.

### Syntax to declare vector

     vector<dataType> vectorName;

### 1. Initalization

- **Declaring and defining like lists**
    ```cpp
    vector<int> vec {10, 20, 30};
    ```

- **Declaring an empty vector and then pushing values**
    ```cpp
    vector<int> v1; // creates an empty vector

    vector<int> v2 (5); // Prefilled vector of 5 elements with 0 or garbage value depending on compiler
    vector<int> v3 (5, 100); // Prefilled vector of 5 elements with value 100
    ```

- **From another vector**
    ```cpp
    // creates an empty vector
    vector<int> vec1 = {10, 20, 30};
    vector<int> vec2(vec1);

    vector<int> vec3(vec1.begin(), vec1.end());
    vector<int> vec4 = vec3;
    ```
### 3. Accessing vector elements

- **Using index**

    ```cpp
    cout << vec1[0]; // Retrieve vector element at index 0
    cout << vec1.at(1) // Retrieve vector element at index 1
    cout << vec1.back(); // Retrieve last element of vector
    ```
### 3. Iterators

- **Listed below in built iterator dunction with their purpose**

    | Iterator Function | Purpose |
    | ------------------| --------|
    | vec.begin() | Will point to first element memory address |
    | vec.end()   | Will point to memory location just after last element |
    | vec.rend()   | Will point to memory location just after first element |
    | vec.rbegin()   | Will point to memory location of last element |

### 4. Iterating through vector

- **Using for loop**
    ```cpp
    vector<int> vec = {1, 2, 3};
    for(unsigned int i = 0; i < vec.size(); i++)
        cout << vec[i];
    ```

- **Using iterator**

    ```cpp
    vector<int> vec = {1, 2, 3};
    for(vector<int>::iterator itr = vec.begin(); itr < vec.end(); itr++) //vec.begin()
        cout << *itr; // Since we are accessing value at that memory location so we need to use derefence pointer
    ```

- **Using auto keyword**
    ```cpp
    vector<int> vec = {1, 2, 3};
    for(auto & item: vec)
        cout << item;
    ```

### 5. Common functions
- **Push element**
    ```cpp
    vector<int> vec = {1, 2, 3};
    vec.push_back(4);  // push value into vector
    vec.emplace_back(20); //If performance is a concern, emplace_back() is generally better than push_back() since it constructs the object in-place
                          // potentially avoiding a copy operation
    ```

- **Insert element**
    ```cpp
    vector<int> vec1 = {1}, vec2;
    vec1.insert(vec.begin() + 1, 2, 5);
    vec2.insert(v.begin(), vec1.begin(), vec2.end());
    ```

- **Erase element**
    ```cpp
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    vec.erase(vec.begin() + 1); // For single element  results in {1, 3, 4, 5, 6, 7}
    vec.erase(vec.begin() + 2, vec.begin() + 4); // For range of element results in {1, 3, 6, 7}
    ```

- **Delete element**
    ```cpp
    vector<int> vec = {1, 2, 3, 4};
    vec.pop_back();
    ```
- **Other Functions**
    ```cpp
    vector<int> vec = {1, 2, 3, 4};
    vec.size(); // Tells about how many elements in your vector
    vec.clear(); // Delete all elements in the vector
    vec,empty();  // Check if vector has any elements, return true and false
    ```


#### Reference:
https://www.youtube.com/watch?v=RRVYpIET_RU
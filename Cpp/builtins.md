# Useful built-in functions of CPP

### To swap to variables 
```cpp
swap(10, 20);
```

### To check if character is alpha numberic
```cpp
isalnum('?');
```

### To convert character to lower case
```cpp
tolower('A');
```

### To convert character to upper case
```cpp
toupper('b');
```

### To convert integer to string
```cpp
to_string(10);
```

### Sort any container
```cpp
sort(a, a + n); // Array Sorting in ascending order
sort(vec.begin(), vec.end()); // Vector Sorting in ascending order
sort(a + 2, a + 4); // Partial sorting in ascending order
sort(a, a + n, greater<int>); // greater is comparator which help in sorting in descending order
```

### Return number of set bits in number
```cpp
int num = 7;
int cnt = __builtin_popcount(); // outputs 3
```

### Find maximum and minimum elements from container
```cpp
int arr[] = {1, 10, 99, 11, 50};
cout << *max_element(arr, arr + 5) << endl;
cout << *min_element(arr, arr + 5) << endl;
```
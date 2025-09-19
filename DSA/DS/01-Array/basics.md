## What is the Array?

- An array in C++ is a fixed-size collection of elements of the same data type, stored in contiguous memory locations.
- It allows for efficient access and modification of elements using an index.

### Key features of vectors

1. Fixed Size: Size of an array is defined at compile-time and cannot be changed after declaration.
2. Random access: Elements in a array can be accessed using an index, e.g., array[index]
3. Contiguous Memory Allocation
4. Indexed Access (Zero-Based Indexing)
5. Static Memory Allocation
6. Insert can be costlier.
7. Max size of array locally is 10^6 and 10^7 for global declaration.

## When to use array

- You need fast access to elements using an index.
- The number of elements is fixed or changes infrequently.

### Syntax to declare

     array<dataType> arrayName;

### Example

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1, 10, 99, 11, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  for(int i = 0; i< n; i++)
      cout<< arr[i] <<" ";

   return 0;
}

```

## Time & Space Complexities

| Operation                            | Time Complexity |
| ------------------------------------ | --------------- |
| Access by Index                      | O(1)            |
| Search on unsorted                   | O(n)            |
| Search on sorted                     | O(log n)        |
| Insert at end if space available     | O(1)            |
| Insert at end if space not available | O(n)            |
| Insert at any position               | O(n)            |
| Delete from end                      | O(1)            |
| Delete from any position             | O(n)            |

## Matrix

- Two-dimensional array, where data is arranged in rows and columns.
- Useful when solving grid based problems like chessboard, sudoku, word search.

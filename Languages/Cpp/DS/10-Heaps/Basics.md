### What is Heap?
* A complete binary tree that comes with heap order property.
* A complete binrary tree means in which all the levels are completly filled except last level, in which nodes are fill from left to right.

## Heap Properties
A heap must satisfy one of the following properties.
1. **Max Heap** - Parent is greater than and equal to its children.
   <br>**Example:**<br>
     5 <br>
    /\ <br>
   1  2

2. **Min Heap** - Paremt node is always less than or equal to its children.
   <br>**Example:**<br>
     1 <br>
    /\ <br>
   2  3 

## Insertion and deletion in heap
```cpp
#include <bits/stdc++.h>

using namespace std;

class heap
{
public:
    int arr[100]; // heap is implemented using array
    int size = 0;

    void insert(int val)
    {
        int index = ++size;
        arr[index] = val; // Step 1: Insert at end of array
        while (index > 1) // Step 2: Propagate element to its correct position
        {
            int parentIndex = index / 2;
            if(arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
            }
            else return;

        }
    }

    void deleteFromHeap() // We are talking about delete the root of the tree
    {
        if (size == 0)
        {
          cout<<"Nothing to delete from the Heap" << endl;
          return;
        }
        arr[1] = arr[size]; // Step 1: Move last element to root
        size--; // Remove element by decrasing size of array
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;
            if(leftIndex < size && arr[i] < arr[leftIndex] )
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else return;
        }

    }

    void print()
    {
        for (int i = 1; i <= size; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    heap hp;
    hp.insert(50);
    hp.insert(55);
    hp.insert(53);
    hp.insert(52);
    hp.insert(54);
    hp.print();
    hp.deleteFromHeap();
    hp.print();
    return 0;
}
```
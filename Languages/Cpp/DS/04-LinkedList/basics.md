## What is the Linked List?
* Its dynamic structure consists of nodes which can be broken donwn futher into.
  * Data - Actual value
  * Pointer - Reference to next node in the list.
* Each element in linked to next using pointers.
* Used for stack and queue data structures.
* Example can be search in single tab of browser.

### Types of Linked List
1. Singly Linked List - Each node points to next node
2. Doubly Linked List - Each node points to next and previous nodes.
3. Circular Linked List - Last node points back to first node.

### Example
```cpp
#include <bits/stdc++.h>
using namespace std;

// Struct sores user defined data type
class Node
{
public:
  int data;
  Node *next;

    Node (int val)
  {
    data = val;
    next = nullptr;
  }
};

int
main ()
{
  Node *ptr = new Node (10);
  cout << "Memory address of pointer " << ptr << endl;
  cout << "Data of memory address pointed by pointer " << ptr->data << endl;
  return 0;
}
```
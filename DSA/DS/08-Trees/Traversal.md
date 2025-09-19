## Traversal in Tree

- Traversal in a tree refers to the process of visiting all the nodes in a specific order. There are
- There are different tree traversal methods
  - Depth-First Search (DFS) explores as far as possible along a branch before backtracking. There are three types:
    - Preorder Traversal (Root → Left → Right)
    - Inorder Traversal (Left → Root → Right)
    - Postorder Traversal (Left → Right → Root)
  - Breadth-First Search (BFS) or Level Order Traversal
    - Visits nodes level by level, generally uses a queue (FIFO)

### Sample for DFS traversal

```cpp
#include <bits/stdc++.h>
using namespace std;

// Class declartion of tree
class TreeNode {
 public:
  int data;
  TreeNode *left, *right;
    TreeNode(int data) {
    this->data = data;
    this->left = this->right = nullptr;
  }
};

void printPreOrder(TreeNode *node)
{
  // Base case
  if (node == NULL)
    return;

  cout << node->data << " ";
  printPreOrder(node->left);
  printPreOrder(node->right);
}


void printInOrder(TreeNode *node)
{
  if (node == NULL) return;

  printInOrder(node->left);
  cout << node->data << " ";
  printInOrder(node->right);
}

void printPostOrder(TreeNode *node)
{
  if (node == NULL) return;

  printPostOrder(node->left);
  printPostOrder(node->right);
  cout << node->data << " ";
}

int main ()
{
  TreeNode *ptr = new TreeNode(10);
  ptr->left = new TreeNode(20);
  ptr->right = new TreeNode(30);
  cout << "Pre order of tree is ";
  printPreOrder(ptr);
  cout<< endl;

  cout << "In order of tree is ";
  printInOrder(ptr);
  cout<<endl;

  cout << "Post order of tree is ";
  printPostOrder(ptr);
  cout<<endl;

  return 0;
}

```

## Reference:

https://leetcode.com/problems/binary-tree-level-order-traversal/description/

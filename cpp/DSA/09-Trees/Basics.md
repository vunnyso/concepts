## Tree
* Trees are non-linear data structure that used to represent entities in a hierarchial releationship.
* Its collection of nodes and edges.
* Examples
    * Computer file system (folders, subfolders)
    * Family Tree
    * Table of contents in a book


### Terminology
#### Node
* Its fundamental part the tree where data is stored.
* References to its child nodes.

#### Edges
Relations between nodes called edges, edge connects two nodes.

#### Root
* Origin of the tree
* Topmost node of the tree
* Node which does not have a parent node.

#### Path
Sequence of edges leading from one node to another.

#### Parent
Predecessor of any node is known as a parent node.

#### Child
Descendant of any node, is known as child node.

#### Siblings
Nodes that belong to the same parent are called siblings.

#### External / Leaf
The node with no child is known as a leaf node. Also called external nodes or terminal nodes.

#### Internal nodes
Atleast one child node known as internal nodes. Nodes other than leaf nodes.

#### Degree / Arity
* Total number of children of a node is called the degree
* The highest degree of the node among all the nodes in a tree is called the Degree of Tree.

#### Level
The root node is said to be at level 0, and the root node's children are at level 1, and the children of that node at level 1 will be level 2 and so on.

#### Height of a node
Length of the longest path from the node to a leaf node of the tree.

#### Height of a Tree
The height of a tree is the length of the longest path from the root of the tree to a leaf node of the tree.

#### Depth of a node
Length of the path from the root to that node. 

#### Subtree
Any node of the tree along with its descendant.

#### Forest
Collection of trees

---

### Types of Trees in Data Structure based on the number of children:
1. Binary Tree
* Tree data structure with at most 2 children. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.
* On the basis of completion of levels, the binary tree can be divided into following types
   * Complete Binary Tree - All the levels of the tree are filled completely except the lowest level nodes which are filled from as left as possible.
   * Perfect Binary Tree - all the leaf nodes are at the same depth, and all non-leaf nodes have two children and is completely filled with no gaps.
   * Balanced Binary Tree - The height of the left subtree and right subtree of any node does not differ by more than 1.
2. Ternary Tree
- A Ternary Tree is a tree data structure in which each node has at most three child nodes, usually distinguished as “left”, “mid” and “right”.
3. N-ary Tree (Generic Tree)
- Many children at every node.
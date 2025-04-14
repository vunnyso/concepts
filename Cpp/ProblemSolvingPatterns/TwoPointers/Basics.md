<h1 style="text-align:center;"> Two pointers</p>

### 🔹 What is a Pointer?
* Pointer is variable which represents position or index within a data structure such as array or linked list.

### 🔹 Common strategies
1. Coverging pointers
   * Pointers start at opposite end of data structure and move inward towards each other.
   * Pointers adjust their positions based on comparison until certain condition is meet or they cross each other.
   * Examples can be checking if word is palindrome.

2. Parallel Pointers
   * Both pointers start at same point usually in beginning and move in the same direction.
   * Right pointer is used to explore or find new information.
   * Left pointer is used to track progress or maintain constraints.

3. Trigger based Pointers
   * We move the first pointer independently until it finds the element that meets the certain condition.
   * After this we start traversing with the second pointer to find aaditional information related to what first pointer found.
   * Useful when we need to process elements in stages.
   * Example: Finding the nth node from end of linked list.

### 🔹 When to use two pointers pattern pattern
  * Generally applied to linear data structures like arrays, strings, linked list.
  * If array is sorted.
  * When string is palindrome.
  * When problem explicitly ask for pair of values which satisfy the condition.
  * Result which can be generated from two values. 

### References
 https://www.youtube.com/watch?v=QzZ7nmouLTI
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
* Below are the different ways to initialize stack
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    // 1. Initialize using vector
    vector<int> vec {1, 2, 3};
    stack<int, vector<int>> st1 (vec);
    cout <<"Top element of stack is " << st1.top() << endl;

    // 2. Initialize using stack
    stack<int, vector<int>> st2 (st1);
    cout <<"Top element of stack is " << st2.top() <<endl;

    // 3. Initialize using deque
    deque<int> de =  {4, 5, 6};
    stack<int, deque<int>> st3 (de);
    cout <<"Top element of stack is " << st3.top() <<endl;

    return 0;
}

### 2. Common operations
Summary Table of Operations

| Operation	 | Syntax	| Description |
| ---        | --- | --- |
| Push	| s.push(value)	| Adds an element to the top of the stack. |
| Pop | 	s.pop()	| Removes the top element. |
| Top	| s.top()	| Returns the top element without removing it. |
| Size	| s.size()	| Returns the number of elements in the stack. |
| Empty	| s.empty()	| Returns true if the stack is empty, otherwise false. |
| Swap	| s1.swap(s2)	| Swaps the contents of two stacks. |


### 3. Iterating over elements of stack
```cpp
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    while(!st.empty()) {
        cout<< st.top() <<endl;
        st.pop();
    }

    return 0;
}

```
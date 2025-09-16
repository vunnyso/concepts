<h1 style="text-align:center;"> Pair </p>

## Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void testPair()
{
    // Single pair example
    pair<int, int> p1 = {1, 2};
    cout<<"First pair element " << p1.first <<" and second pair element " << p1.second <<endl;

    // Nested pair example
    pair<int, pair<int, int>> p2 = {3, {4, 5} };
    cout<<"First element "<<p2.first <<" Nested First " <<p2.second.first <<" Nested Second " << p2.second.second <<endl;

    // Array of pairs
    pair<int, int> arr[] = { {1,2}, {3,4} , {5,6} };
    cout<<"Pair first element value at Array index 1 is: " << arr[1].first;
}

int main()
{
    testPair();
    return 0;
}
// Output
First pair element 1 and second pair element 2
First element 3 Nested First 4 Nested Second 5
Pair first element value at Array index 1 is: 3

```

<h1 style="text-align:center;"> Daemon </p>

### Daemon

- Its thread running in background.
- Unix concept of fire and forgot.

### Example

```cpp
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// No data will be shared, owner will cpp runtime library
void Daemon() {
    while(1) {
        cout << "I am Daemon Thread, no one can kill me except process which is termnated " << endl;
        std::this_thread::sleep_for(1000ms);
    }
}

int main()
{
    std::thread t1(Daemon);
    // It will does not wait for T1 and will run in background
    t1.detach();

    std::this_thread::sleep_for(5000ms);

    return 0;
}
```

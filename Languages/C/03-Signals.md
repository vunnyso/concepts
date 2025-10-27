<h1 style="text-align:center;"> Signals </p>

### Signals

A signal is a software-generated interrupt sent to a process by the OS when the user presses Ctrl-C or another process sends a signal to this process.

### Trigger

- To trigger the signal handler when the signal has occurred, we use signal() function that is provided by `<signal.h>` header file.
- Syntax
  ```cpp
  signal(type, signalHandler);
  ```

### Example

```c
#include <stdio.h>
#include <stdlib.h> // For exit
#include <signal.h>
#include <unistd.h> // For sleep

void signalHandler(int sig) {
    printf("Signal caught %d\n", sig);
    exit(sig);
}

int main() {
    signal(SIGINT, signalHandler);
    while(1) {
        sleep(1);
        printf("%s", "Hello World!\n");
    }
}
```

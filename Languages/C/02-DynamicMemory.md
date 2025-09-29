### Dynamic Memory Allocation in C

- C provides various functions for allocating memory from the heap
- malloc : allocate raw memory on the heap
- calloc : allocates memory on the heap and initializes it to zero
- realloc : allocates larger chunk of memory for an existing allocation
- free : deallocates/releases the memory allocated through the above functions

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    int *q = calloc(1, sizeof(int));
    int *r = malloc(10 * sizeof(int)); // Allocate size for 10 intergers
    * p = 1;
    * q = 2;
    printf("Value %d and %d", *p, *q);
    free(p);
    free(q);
    free(r);
    p = NULL; // Good practice to assign null to avoid dangling pointer
    return 0;
}
```

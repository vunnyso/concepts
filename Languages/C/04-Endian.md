<h1 style="text-align:center;"> Endian </p>

### Endianess

- Big Endian - Most significant byte is stored at the lowest address.
- Little Endian - Least significant bytes stored at the lowest address.
- Example Integer value 0xA1B2C3D4
- | Memory address | Big Endian | Litle Endian |
  | -------------- | ---------- | ------------ |
  | 0x100          | A1         | D4           |
  | 0x101          | B2         | C3           |
  | 0x102          | C3         | B2           |
  | 0x103          | D4         | A1           |

### Example

```c
#include <stdio.h>

int main() {
  unsigned int num = 1;
  char *c = (char *)&num;
  /* if little endian it will be stored in memory as
  01 00 00 00,  so *c = 1*/
  if (*c) {
    printf("Machine is little endian");
  }
  /* if big endian it will be stored in memory as
  00 00 00 01,  so *c = 0*/
  else {
    printf("Machine is big endian");
  }
  return 0;
}
```

### Another way to check

```c
#include <stdio.h>

union endian_check {
  char ch;
  unsigned int num;
};

int main() {
  union endian_check un;
  un.num = 1;
  if (un.ch == 1) {
    printf("Machine is little endian");
  } else {
    printf("Machine is big endian");
  }
  return 0;
}
```

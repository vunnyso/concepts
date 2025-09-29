<h1 style="text-align:center;"> Data Types </p>

### Primtives

- Primitives can be Arithmetic & void
- Arithmetic -> Integral & floating point
- Integral types -> bool, char, wchar_t, char16_t, char32_t, short, int, long
- Floating point -> float & double
- void is a special type used with pointers & functions

<br>

---

### Modifiers

- Some of these can be modified using modifiers – signed, unsigned, short, long
- All types can be qualified with qualifiers – const, volatile, static
- All types occupy memory and can hold a range of values memory requirements may change with platform

<br>

---

### Range Of Fundamental Types

| Type               | Typical Byte Width | Typical Range                   |
| ------------------ | ------------------ | ------------------------------- |
| char               | 1 byte             | -127 to 127                     |
| unsigned char      | 1 byte             | 0 to 255                        |
| int                | 4 bytes            | -2147483648 to 2147483647       |
| unsigned int       | 4 bytes            | 0 to 4294967295                 |
| signed int         | 4 bytes            | -2147483648 to 2147483647       |
| short int          | 2 bytes            | -32768 to 32767                 |
| unsigned short int | 2 bytes            | 0 to 65,535                     |
| signed short int   | 2 bytes            | -32768 to 32767                 |
| long int           | 4 bytes            | -2,147,483,648 to 2,147,483,647 |
| unsigned long int  | 4 bytes            | 0 to 4,294,967,295              |
| float              | 4 bytes            | +/- 3.4e +/- 38 (~7 digits)     |
| double             | 8 bytes            | +/- 1.7e +/- 308 (~15 digits)   |
| long double        | 8 bytes            | +/- 1.7e +/- 308 (~15 digits)   |
| wchar_t            | 2 or 4 bytes       | 1 wide character                |

<br>

---

### We can use macro values defined in <climits> or <limits.h>

```cpp
#define CHAR_BIT      8         // number of bits in a char
#define SCHAR_MIN   (-128)      // minimum signed char value
#define SCHAR_MAX     127       // maximum signed char value
#define UCHAR_MAX     0xff      // maximum unsigned char value

#ifndef _CHAR_UNSIGNED
    #define CHAR_MIN    SCHAR_MIN   // mimimum char value
    #define CHAR_MAX    SCHAR_MAX   // maximum char value
#else
    #define CHAR_MIN    0
    #define CHAR_MAX    UCHAR_MAX
#endif

#define MB_LEN_MAX    5             // max. # bytes in multibyte char
#define SHRT_MIN    (-32768)        // minimum (signed) short value
#define SHRT_MAX      32767         // maximum (signed) short value
#define USHRT_MAX     0xffff        // maximum unsigned short value
#define INT_MIN     (-2147483647 - 1) // minimum (signed) int value
#define INT_MAX       2147483647    // maximum (signed) int value
#define UINT_MAX      0xffffffff    // maximum unsigned int value
#define LONG_MIN    (-2147483647L - 1) // minimum (signed) long value
#define LONG_MAX      2147483647L   // maximum (signed) long value
#define ULONG_MAX     0xffffffffUL  // maximum unsigned long value
#define LLONG_MAX     9223372036854775807i64       // maximum signed long long int value
#define LLONG_MIN   (-9223372036854775807i64 - 1)  // minimum signed long long int value
#define ULLONG_MAX    0xffffffffffffffffui64       // maximum unsigned long long int value
``
```

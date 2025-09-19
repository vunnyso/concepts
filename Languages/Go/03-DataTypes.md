<h1 style="text-align:center;"> Data Types </p>

### Data Types

1. **Integers**

   | Data Type | Description                                                         |
   | --------- | ------------------------------------------------------------------- |
   | `uint8`   | The set of all unsigned 8-bit integers (0 to 255)                   |
   | `uint16`  | The set of all unsigned 16-bit integers (0 to 65535)                |
   | `uint32`  | The set of all unsigned 32-bit integers (0 to 4294967295)           |
   | `uint64`  | The set of all unsigned 64-bit integers (0 to 18446744073709551615) |

2. **Signed Intgers**

   | Data Type | Description                                                                         |
   | --------- | ----------------------------------------------------------------------------------- |
   | `int8`    | The set of all signed 8-bit integers (-128 to 127)                                  |
   | `int16`   | The set of all signed 16-bit integers (-32768 to 32767)                             |
   | `int32`   | The set of all signed 32-bit integers (-2147483648 to 2147483647)                   |
   | `int64`   | The set of all signed 64-bit integers (-9223372036854775808 to 9223372036854775807) |

3. **Machine Dependent**

   | Data Type | Description                                                           |
   | --------- | --------------------------------------------------------------------- |
   | `uint`    | 32 or 64 bits                                                         |
   | `int`     | Same as uint                                                          |
   | `uintptr` | An usigned integer to store the uninterpreted bits of a pointer value |

4. **Float**

   | Data Type | Description                                           |
   | --------- | ----------------------------------------------------- |
   | `float32` | The set of all IEEE 754 32-bit floating-point numbers |
   | `float64` | The set of all IEEE 754 64-bit floating-point numbers |

5. **String**

   A string type represents the set of string values. A string value is a (possibly empty) sequence of bytes.

   "Hello World"

6. **Booleans**

   A boolean type represents the set of Boolean truth values denoted by the predeclared constants true and false

7. **Others**

   | Data Type    | Description                                                          |
   | ------------ | -------------------------------------------------------------------- |
   | `complex64`  | The set of all complex numbers with float32 real and imaginary parts |
   | `complex128` | The set of all complex numbers with float64 real and imaginary parts |
   | `byte`       | Alias for `uint8`                                                    |
   | `rune`       | Alias for `int32`                                                    |

### Reference

https://go.dev/ref/spec

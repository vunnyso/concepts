<h1 style="text-align:center;"> Primitives and Control Flow </p>

### Scaler Types
There are four scaler types

**1. Integers**

* Can be Unsigned and signed.
    | Length | Unsigned | Signed |
    | --| --|  --|
    | 8-bit | u8 | i8 |
    | 16-bit | u16 | i16 |
    | 32-bit | u32 | i32 |
    | 64-bit | u64 | i64 |
    | 128-bit | u128 | i128 |
    | arch | usize | isize |

* isize - Same number of bits of platform pointer type
* Default is i32 even on 64bit system

    | | |
    | -- | -- |
    | Decimal | 1234 |
    | Hex | 0x1234 |
    | Octal | 0o1234 |
    | Binary | 0b1101 |
    |  |  |

* Note: Representation of more than digit can have any number of ignored underscores for readability.

2. **Float**
* Can be f32 and f64 and f64 is default as it have more percision.
* but f64 can be really slow on arch which are not 64 bit
* Follow IEEE-764 standard

3. **Booleans**
Can be true or false

4. **Characters**
* Its of 4 bytes(32 bit) which make it as array of characters.
```rust
let my_letter: char =  'a';
```

### Compound Types
* Gather multiple values of other types into one type.
1. **Tuple**
```rust
let info = (1, 3.3, 999);
```
Access Tuple into two types.
a. Dot syntax
```rust
let info = (1, 3.3, 999);
let jets = info.0;
let fuel = info.1;
let ammo = info.3;
```
b. Access all of memebers at once using destructure
```rust
let info = (1, 3.3, 999);
let (jets, fuel, ammo) = info;
```

Note: Tuples can have maximum arity of 12, means how many items in tuple

2. **Array**
* Store multiple value of same type
* Index starts from 0
```rust
let buf = [1, 2, 3]; // Declare elements
let buf: [i32; 3] = [1, 2, 3]; // With explicit notation
let buf = [0; 3]; // Value ; how many you want
```
Note: It have limiation of 32 as they live on stack

### Control Flow
* If else statements
* Braces are not optional
```rust
msg = if num == 5 {
    "five"
} else if  num == 6 {
     "six"
} else {
    "zero"
};
```

* Loops
Unconditional loops
```rust
'bob:  loop { // Starts with tick identifier
    loop {
        loop{
            break; 'bob;
        }
    }
}
```

* while
```rust
while (bool condition) {

}
```

* Iterator

    - With rust you can iterate over any iterable value. Compund and collection types
    - iter iterates over all items in collection
```rust
for num in [7, 8, 9].iter() {
    // do stuff with num
}
```

* Ranges
    - Two dots seperating start and end points
    - Start is inclusive and end is exclusive
```rust
for num in 0..50 { // 50 is exclusive
    // do stuff with num
}
for num in 0..=50 { // 50 is inclusive
    // do stuff with num
}
```

### Strings
- Two major types
1. Borrowed string slice &str - Allocated on stack
2. String can be modified - Allocated on heap.

* Strings cannot be indexed by character position
* Pushing things on stack is faster than allocating things on heap
* Graphemes decompose into variables amounts of scalers, which decompose into variable amounts of bytes.
```rust
let msg = "abc".to_string();
let msg = String::from("abc");
```
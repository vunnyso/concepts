<h1 style="text-align:center;"> Collections </p>

### Vectors

- Its generic collection that holds a bunch of one type.

```rust
fn main() {
    let mut v: Vec<i32> = Vec::new();
    let v1: Vec<i32> = vec![ 4, 5, 6]; // Create vector from literal values
    v.push(1);
    v.push(2);
    v.push(3);
    let x = v.pop();
    println!("Vector contents {:?}", v1);
    println!("Value poped {:?}", x);
    println!("Value at index 3 is {}", v1[2]); // Accessing value
    //println!("Value at index 3 is {}", v1[20]); // Compile okay, but Crash at runtime as vector size can grow
    // Solution as listed below
    match v1.get(30) {
        Some(thirty) => println!("Value is {}", thirty),
        None => println!("Not found"),
    }
    for i in &mut v {
        *i += 20;
    }
    for i in &v {
        println!("elem is {}", i);
    }
}
```

### Strings

- Two major types

1. Borrowed string slice &str - Allocated on stack
2. String can be modified - Allocated on heap.

- Strings cannot be indexed by character position
- Pushing things on stack is faster than allocating things on heap
- Graphemes decompose into variables amounts of scalers, which decompose into variable amounts of bytes.

```rust
let msg = "abc".to_string();
let msg = String::from("abc");
```

### Hashmap

- Its generic collection where you specify type for key and type for value.
- Access values by the key.
- In some languages its called dictonary.
- Insert, lookup and remove values in constant time.

```rust
use std::collections::HashMap;
fn main(){
    let  mut hash: HashMap<u8, bool> = HashMap::new(); // Specify type of key and type of value
    hash.insert(5, true);
    hash.insert(6, false);
    let hash_five = hash.remove(&5).unwrap(); // remove return enum
    println!("Value removed {}", hash_five);
}
```

### Others

1. VecDeque - Use ring buffer to implement double-ended queue, efficently add and remove items.
2. LinkedList - Add and remove items at arbitrary pint in the list.
3. HashSet - Hashing implemenation of a set. Performs set operations efficently.
4. Binary heap - Its like priority queue which always pops up max value.
5. BTreeMap and BTreeSet - Alternative map and set implemenations using modified binary tree.

<h1 style="text-align:center;"> Ownership & References </p>

### Rules
1. Each value has an owner
2. Only one owner of value
3. Values gets dropped if its owner goes out of scope. (Destructor called, free heap, stack pop)

Example
```rust
fn main() {
    // s1 will have ptr, value, capacity assoicated with it in stack and ptr location will be from heap
    let s1 = String::from("test");
    let s2 = s1; // Value of s1 moved to s2 and it becames unintialzed
    println!("Value of S1 {}", s2);
    //println!("Value of S1 {}", s1); // Gives error

    // Fix as below
    let s1 = String::from("abc");
    let s2 = s1.clone(); // Copies heap data and adjust its pointer, similar to deep copy
    // Rust reserve copy() when only stack data is copied
    println!("S1 {} and S2 {}", s1, s2);
}
```

### Paramters passing to function
* In below example once we pass s1, its ownership will be moved to function
* We need to make s1 first mutable
* Return value from function using tail expression
* Then assign it back to s1
* Usually its not good way, that's why will use references & borrowing
```rust
fn main() {
    let mut s1 = String::from("abc");
    s1 = do_stuff(s1);
    println!("Value after fn call {}", s1);
}

fn do_stuff(s: String) -> String {
    s
}
```
### References
* If you have variable x, then &x creates reference to it
* If you have variable x, then &mut x creates mutable reference to it
* We can have any number of immutable references.
```rust
fn main() {
    let s1 = String::from("abc");
    do_stuff(&s1);
    println!("Value after fn call {}", s1);
}

fn do_stuff(s: &String) -> String {
    s.to_string()
}
```
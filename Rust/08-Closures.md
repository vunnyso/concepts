<h1 style="text-align:center;"> Closures  </p>

### Closure
* A anonymous function that can borrow or capture data some data from scope it is nested.
* Syntax: Parameter list between two pipes without type annotations followed by block
```rust
fn main() {
    let add = | x ,  y | { x + y}; // Closure defined
    println!("Add result {}" , add(1, 2));
}
```

Below is another example in which no paramters are passed and we can refernce stting value.
```rust
fn main() {
    let s = "🍓".to_string();
    let fun = || {
        println!("Value is {}", s);
    };
    fun();
}
```

Below example depicts multiple operations performed on vector using closures.
```rust
fn main() {
    let v = vec![ 4, 5, 6];

    let sum =v.iter()
        .map(|x| x * 3)
        .filter(|x| *x > 10)
        .fold(0, |acc, x| acc + x);

    println!("Sum is {}", sum);
}
```
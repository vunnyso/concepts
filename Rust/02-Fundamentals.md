<h1 style="text-align:center;"> Fundamentals </p>

### Overview
* Rust is strongly typed language.
* To declare variable use keyword `let`
* Variables are immutable by default, means you cannot change the value.

### Example
```rust
fn main() {
    let test: i32 = 1; // Explicitly
    test = 2; // This will give error
    let mut test1 = 3; // Implicitly
    test1 = 4; // No error
}
```

### Constants
Example
* Need to follow Screaming snake case convention
* Cannot skip annotation
* Need to use literal
```rust
const TEST_WRAP: f64 = 3.14;
```

### Scope and shadow
* Begins where varaiable is created and ends to the end of block.
* Shadow mean redefining same variable to different type.
```rust
let meme = "More";
let meme = 2;
```

### Functions
* There is no support for named arguments at call side, so we need to provide all values in correct order.
* Below example of creating a function and returning from it.
```rust
fn main() {
    let x = do_stuff(2.0, 12.5);
    println!("Value of x is {}", x);
}
fn do_stuff(x: f64, y: f64) -> f64 { // use small case with underscores
    x * y // Tail expression in which return and semicolon can be skipped
}
```

### Macros
* Name of macro always ends with !
* Example can be println!("Hello {}", x);

### Module system
* All libraries are private by default
* `pub` keyword can expose function about the module.
* But specifiying absolute path at every call site can be painful, so `use` statement can be helpful.
* `use` - Bring item from some path into some scope, similar to import


### Crates
* Package registry

<h1 style="text-align:center;"> Fundamentals </p>

### Overview

- Rust is strongly typed language.
- To declare variable use keyword `let`
- Variables are immutable by default, means you cannot change the value.

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

- Need to follow Screaming snake case convention
- Cannot skip annotation
- Need to use literal
- Cannot make it mut.

```rust
const TEST_WRAP: f64 = 3.14;
```

### Scope and shadow

- Begins where varaiable is created and ends to the end of block.
- Shadow mean redefining same variable to different type.

```rust
let meme = "More";
let meme = 2;
```

### Functions

- Use snake case conventio (all lower case, whenever there is space use underscore)
- There is no support for named arguments at call side, so we need to provide all values in correct order.
- Below example of creating a function and returning from it.

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

- Name of macro always ends with !
- Example can be println!("Hello {}", x);

### Module system

- All libraries are private by default
- `pub` keyword can expose function about the module.
- But specifiying absolute path at every call site can be painful, so `use` statement can be helpful.
- `use` - Bring item from some path into some scope, similar to import

### Imports

- In Rust, imports refer to explicitly bringing external crates, modules, functions, structs, enums, or other items into the scope of your program.
- Imports are done using the `use` keyword.
- Syntax
  ```rust
  use crate_name::item_name;
  ```

### Prelude

- The Prelude in Rust refers to a set of items (typically functions, traits, and types) that are automatically brought into scope by the Rust compiler for every Rust program.
- These are items that the Rust language assumes you'll commonly need, so they’re made available by default. You don't need to import them manually in your program.
- Example
  ```rust
  fn main() {
      // `println!` is part of the prelude, so it works without `use`
      println!("Hello, world!");
  }
  ```
- It includes commonly used traits, types, and macros such as:
  - **Types:** Option, Result, Vec, String, etc.
  - **Traits:** Clone, Copy, Debug, Drop, etc.
  - **Macros:** println!, format!, vec!, etc.

### Crates

- Package registry
- If you have main function defined in source directory then binrary crate with same name as your package will be created. main.rs will be crarte root.
- If you want binary crate create folder bin in your project and add your rust files there.

Rules

1. Package must have atleast one crate.
2. Package can have zero or one library crate.
3. Package can have any number of binary crates.

### Library or modules

- Can be created using

```bash
cargo new --lib restro
```

- modules are specified using mod keyword.

```rust

mod front_of_house {
    pub mod hosting { // As child modules are private by default
        pub fn add_to_waitlist() {}

    }
}

pub fn eat_at_restro() {
    // Absolute path
    crate::front_of_house::hosting::add_to_waitlist();

    // Relative Path
    front_of_house::hosting::add_to_waitlist();
}
```

<h1 style="text-align:center;"> Enums </p>

### Overview
* Like algebraic Data types.
```rust
#[derive(Debug)]
enum Color {
        Red,
        Green,
        Blue,
}

#[derive(Debug)]
enum Item {
    Empty,
    Ammo(u8),
    Things(String, i32),
    Place {x: i32, y : i32},
}

impl Item {
    fn display(&self) {
    }
}
fn main() {
    println!("contents {:?} {:?} {:?}", Color::Red, Color::Green, Color::Blue);
    use Item::*;
    let item = Things("hat".to_string(), 7);
    println!("Item {:?}", item);
}
```

* Option enums
```rust
enum Option<T> { //Option is used when something might be absent
    Some<T>,
    None,
}
```
Example
```rust
fn main() {
    let mut x:Option<i32> = None; // Already included in standard prelude
    x = Some(5);
    let y = 10;
    println!("x is {:?}", x);
    println!("x is {}", x.is_some());
    println!("x is {}", x.is_none());
    if let Some(i) =  x{
        println!("{}", i);
    };
    println!("Sum is {}", x.unwrap_or(0) + y);
}
```

### Result Enum or  Error Handling
* Check if result have something useful or have error
* Used in io module
```rust
#[must_use] // Annotation make compiler warning to silently drop
enum Result<T, E> {
    Ok(T),
    Err(E),
}
```
Example
```rust
use std::fs::File;
fn  main() {
    let res = File::open("foo");
    //let f =  res.unwrap();
    //let f1 = res.expect("error message"); // same as wrap with extra message
    //println!("file {:?}", f1);
     if res.is_ok() { // Helper methods
         let f =  res.unwrap(); // Program will never crash as we checked is okay
         println!( "File {:?}", f);
     }
}
```

Error Handling
```rust
  fn divide(x: f64, y: f64) -> Result<f64, String> {
    if y == 0.0 {
      Err(String::from("Cannot divide by Zero!"))
    } else {
      Ok(x / y)
    }
  }
  fn main() {
    println!("Result is {:?} ", divide(10.0, 4.0));

    let result = divide(10.0, 0.0);
    match result {
      Ok(value) => println!("Result is {}", value),
      Err(e) => println!("Error is {}",e),
    }
  }
```

### Match expression
* Similar to switch case
* Match expression are exhaustive, we need to match all possible values.
```rust
fn main() {
    enum  Direction {
        North,
        South,
    }
    let dir = Direction::North;
    match dir {
        Direction::North => println!("North"),
        _=> println!("Else"),  // For default case
    }
}
```
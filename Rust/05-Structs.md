<h1 style="text-align:center;"> Structs </p>

### Structs
* Can have data fields, methods and associated functions.
* Rust don't have struct inheritance.
```rust
// Debug is trait and derive allows compiler to add basic implementaion for trait
#[derive(Debug)] 
struct Square { // Start Capital and camel case
    width: u8,
    height: u8,
}
struct Point(i32, i32); // Can be in tuple format
impl Square {
    fn print_values(&self) {
        println!("Width {} and height {}", self.width, self.height);
    }
}
fn main(){
    let s =Square{width:11 , height:22};
    s.print_values();
    // How to print struct
    println!("Struct is {:#?}", s);
}
```

### Traits
* Similar to interfaces in other languages. Used for data abstraction
* Tells functionality of particular type.
* Can group method signatures togther.
* Help in code reusability.
* Define the required behavior.
* We can write generic functions.
* Implements inheritance
```rust
trait Run {
    fn run(&self) {
        println!("I am running");
    }
}

struct Robot {}
impl Run for Robot {}

fn main() {
    let robot = Robot {};
    robot.run();
}
```
<h1 style="text-align:center;"> Rust Basics </p>

### 📦 1. Variables and Mutability
* Variables in rust can be defined using `let` and `mut` also to change variables.

   ```rust
   let x = 10; // Immutable by default
   let mut y = 20;
   y = y + 30;
   println!("Value of x {} and y {}", x , y);
   ```

### 🔢 2. Data Types
* Rust is statically typed. Some basic types as below:

    ```rust
    fn main()
    {
      let a: i32 = 1;
      let b: f64 = 3.14;
      let c: bool = false;
      let d: char = 'A';

      println!("Value of int {}, float {}, bool {} and char {}", a, b, c, d);
    }
    ```
### 📚 3. Control Flow
* Condition check and iterating through the loop
    ```rust
    fn main()
    {
      let x = 7;
      if x < 10 {
          println!("Number is less than 10");
      } else {
          println!("Number is greater than 10");
      }
      for i in 1..5 { // usage of the for loop
          println!("{}", i);
      }
    }
    ```
### 📦 4. Functions
* Creating and return from functions
    ```rust
    fn add(x: i32, y: i32) -> i32 {
      x + y // Returns the sum of parameters passed
    }
    fn main()
    {
      println!("Result of addition function {}",add(10, 20));
    }
    ```

### 🧵 5. Match expression
* Similar to switch case
  ```rust
  fn main()
  {
    enum Direction {
      North,
      South,
      East,
      West
    }

    let direction = Direction::East;

    match direction {
      Direction::North => println!("North"),
      Direction::South => println!("South"),
      _=> println!("Something else")
    }
  }
  ```

### ⚙️ 6. Error Handling
* Example of error handling
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
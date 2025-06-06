<h1 style="text-align:center;"> Rust Basics </p>

### 📦 1. Variables and Mutability
* Variables in rust can be defined using `let` and `mut` also to change variables.

   ```rust
   let x = 10; // Immutable by default
   let mut y = 20;
   y = y + 30;
   println!("Value of x {} and y {}", x , y);
   ```

### 🔢 2. Scaler Data Types
* Rust is statically typed.

    ```rust
    fn main()
    {
      let a: i8 = 1; // Byte
      let b: i16 = 99_99; // Decimal
      let c: i32 = 0xff; // Hex
      let d: i64 = 0o77; // Octal
      let e: i128 = 0b1111_0000; // Binary

      let f: f32 = 2.0;
      let g: f64 = 3.0;

      let h: bool = false;
      let i: char = 'A';
      println!("a = {} b = {} c = {} d = {} e = {} f = {} g = {} h = {} and i = {}", a, b, c, d, e, f ,g , h, i);
    }
    ```

### 🔢 3. Compund Data Types
* Its for group of values
  ```rust
    fn main() {
      // Tuple
      let tup: (&str, i32) = ("Test", 101);
      let (name, id) = tup; // Access using Destructuring
      println!("Name is {} and id is {}", name, id);
      println!("Name is {} and id is {}", tup.0, tup.1); // Dot notation

      // Arrays
      let arr1 = [1, 2, 3]; // Array of 3 elements
      let arr2: [i32; 3] = [4, 5, 6]; // Array of 3 elements
      let arr3 = [0; 8]; // Create array of size 8 initalized with value 0
      println!("Arr1 is {:?}", arr1);
      println!("Arr2 is {:?}", arr2);
      println!("Arr3 is {:?}", arr3);
  }
  ```

### 📚 4. Control Flow
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
    }
    ```

### ⚙️ 5. Loops
* We have different types of loop
  ```rust
    fn main() {
      let mut i = 1;
      loop {
        if i > 3 {
            break;
        }
        println!("Value of i is {}", i);
        i += 1;
      }

      let mut j = 3;
      while j != 0 {
        println!("Value of j is {}", j);
        j -= 1;
      }

      let arr = [1, 2, 3];
      for element in arr.iter() {
        println!("Value of element {}", element);
      }

      for x in 1..4 {
        println!("Value of x is {}", x);
      }
  }
  ```


### 📦 6. Functions
* Creating and return from functions
    ```rust
    fn add(x: i32, y: i32) -> i32 {
      x + y // Returns the expression sum of parameters passed
    }
    fn main()
    {
      println!("Result of addition function {}",add(10, 20));
    }
    ```

### 🧵 7. Match expression
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

### ⚙️ 8. Error Handling
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
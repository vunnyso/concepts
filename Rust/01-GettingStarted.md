<h1 style="text-align:center;">  Getting started with Rust </p>

### Features
* Rust is a modern systems programming language focused on safety, speed, and concurrency.
* `rustc` is compiler for rust program
* Use `cargo` which is build system and package manager for big projects which have multiple files.

### 🦀 Basic program
```rust
fn main() {
    println!("Hello, world!");
}
```

### Build and Test
1. Install the rust on the system

2. Check rust compiler and cargo version
   ```sh
   rustc --version
   cargo --version
   ```

3. Create a new project
   ```sh
   cargo new test_project
   cd test_project
   ```

4. Compile and test
   ```sh
   cargo build
   cargo run
   ```

### Reference
https://www.youtube.com/watch?v=OX9HJsJUDxA&list=PLai5B987bZ9CoVR-QEIN9foz4QCJ0H2Y8
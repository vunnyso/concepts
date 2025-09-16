<h1 style="text-align:center;">  Getting started with Rust </p>

### Background

- Rust was originally a personal project by Graydon Hoare in 2006.
- In 2009, Mozilla began sponsoring its development.
- Rust’s first stable release (1.0) came out in May 2015.
- Firefox core is rewritten in rust

### Features

- Rust is a modern systems programming language focused on safety, speed, and concurrency.
- `rustc` is compiler for rust program

### Cargo

- Cargo is the package manager and build system, kind of like npm for JavaScript, pip for Python, or go mod for Go.

### 🔑 Key roles of Cargo

1. **Project Management**

- Creates new projects (cargo new my_project)
- Manages project structure with a Cargo.toml file (like package.json in Node).

2. **Dependency Management**

- Lets you declare dependencies in Cargo.toml.
- Automatically downloads them from crates.io (Rust’s package registry).
- Ensures reproducible builds with Cargo.lock.

3. **Building**

- Compiles your project (cargo build).
- Can build for debug or release (cargo build --release).

4. **Running**

- Runs your project in one step (cargo run).

5. **Testing & Docs**

- Runs tests (cargo test).
- Builds docs from comments (cargo doc).
- Opens docs in a browser (cargo doc --open).

6. **Publishing**

- Packages your library or app and uploads it to crates.io (cargo publish).

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

### Cargo run

- It will produce debug builds by default can be changed to release by adding `--release`

### Cargo.toml Example

```toml
[package]
name = "testpro" # Name of the project
version = "0.1.0"  # Semantic Versioning (SemVer)
edition = "2024" # Version of Rust package
```

<h1 style="text-align:center;"> Rust Logging </p>

### Debug Logs
In `Rust` debug logs are typically handled using `log` crate along with `logging` backend like `env_logger` , `tracking` and `fern`

1. Add dependencies to `Cargo.toml`
```toml
[dependencies]
log = "0.4"
env_logger = "0.11"
```

2. Initalize logging in `main.rs`
```rust
use log::{debug, info, warn, error};

fn main() {
    // env_logger::init(); if using this then probably we need RUST_LOG=debug cargo run
    env_logger::Builder::from_env(env_logger::Env::default().default_filter_or("debug")).init(); // Using it debug logs will be enabled
    println!("Hello, world!");

    debug!("This is debug message!");
    info!("This is info message!");
    warn!("This is warn message!");
    error!("This is error message");
}
```

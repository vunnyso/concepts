<h1 style="text-align:center;"> Rust Async </p>

### 🧰 What is Tokio?
* Tokio is runtime for writing reliable, asynchronous applications in Rust.
* It Provides:
  * Async Runtime
  * Task scheduling
  * Timers, networking, IO

### ⚙️ How to Add Tokio
* In `Cargo.toml` file

   ```sh
   [dependencies]
   tokio = { version = "1", features = ["full"] }
   ```
### Understanding await
* `.await` is used **inside async function**
* Suspends current task until awaited `Future` is ready.
* Unlike thread::sleep, it **does not block the whole thread** - it just yields the control so that other tasks can run.

### ▶️ Use of async function
* Using tokio runtime to implement
  ```rust
  use tokio::time::{sleep, Duration};

  #[tokio::main] //Marks as entry for async runtime
  async fn main() {
    println!("Started async function!");
    let result = do_async_work().await;

    println!("Result of the function {}", result);
    println!("Done!")
  }

  async fn do_async_work() -> String {
    sleep(Duration::from_secs(2)).await;
    "Async function is completed".to_string()
  }
  ```

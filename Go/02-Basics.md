<h1 style="text-align:center;"> Go Basics </p>

### 📦 1. Variables and Types
* Variables in go can be defined using `var`

   ```go
  package main

  import "fmt"

  func main() {
    var name string = "Test"
    age := 30
    fmt.Println(name, age)
  }
   ```

### 🔢 2. Functions
* Functions start with func.
* Type comes after the variable name (e.g., a int)

    ```go
      package main

      import "fmt"

      func add(a int, b int) int {
         return a + b
      }

      func main() {
        sum := add(3,4)
        fmt.Println("Sum is", sum)
      }
    ```

### 🔢 3.Control Structures
* Conditions and looping
  ```go
  package main

  import "fmt"

  func main() {
    x := 10

    if x > 5 {
      fmt.Println("x is greater than 5")
    } else {
      fmt.Println("x is smaller than 5")
    }

    // Looping
    for i := 0; i < 5; i++ {
       fmt.Println("i =", i)
    }
  }
  ```

### 📚 4. Arrays and Slices
* Arrays have fixed size; slices are dynamic.
* Slices are used much more commonly than arrays.
    ```go
    package main

    import "fmt"

    func main() {
      var arr[3] int = [3] int {1,2, 3}
      slice := [] int{4, 5, 6}

      fmt.Println("Array:", arr)
      fmt.Println("Slice:", slice)
    }
    ```

### ⚙️ 5. Concurrency with Goroutines
* We declare Goroutines as below
  ```go
    package main

    import (
      "fmt"
      "time"
    )

    func sayHello() {
      fmt.Println("Hello from Goroutine")
    }

    func main() {
      go sayHello() // start a new go routine
      time.Sleep(1 * time.Second) // Wait for goroutine to finish
    }
  ```


### 📦 6. Structs
* Structs group related data together
* Used instead of classes (Go doesn’t have classes).
    ```go
    package main

    import "fmt"

    type Person struct {
      Name string
      Age int
    }

    func main() {
      p := Person{Name: "Test", Age: 25}
      fmt.Println(p.Name, p.Age)
    }
    ```

### 🧵 7. Pointers
* Example below
  ```go
  package main

  import "fmt"

  func main() {
    x := 10
    p := &x // pointer to x
    *p = 20 // change value through pointer
    fmt.Println("Value of x is:", x)
  }
  ```
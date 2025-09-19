<h1 style="text-align:center;"> Variables </p>

### How to declare variable?

```go
var deckSize int // Global variable

func main() {
	var z int              // Uninitialized
	var x string = "Hello" // Explicit data type declare
	y := "World"           // shortcut to declare and assign
	y = "check"            // Update value
	deckSize = 10          // Assign value to global variable
	fmt.Printf("x is %s , y is %s, z is %d and deckSize is %d", x, y, z, deckSize)
}
```

<details output>
  <summary>Output</summary>
  x is Hello , y is check, z is 0 and deckSize is 10
</details>

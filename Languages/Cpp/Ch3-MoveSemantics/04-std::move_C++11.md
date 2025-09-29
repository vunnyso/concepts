<h1 style="text-align:center;"> std::move </p>

### std::move

- std::move is a cast that converts an object into an rvalue reference, allowing move semantics to be used.
- It does not move anything by itself — it simply enables moving by casting:
- Example

```cpp
std::string a = "hello";
std::string b = std::move(a); // Calls move constructor (if available)
```

- The original object (a) is left in a valid but unspecified state — you can still use it, but its content may be moved away.

### When to use std::move

- Takes L-value and change to R-Value reference.
- Transfer ownership of resources.
- Avoid expensive deep copies.
- Optimize performance by enabling move constructors/operators.
- It is especially useful when working with:
- Containers like std::vector, std::map, etc.
- Classes managing heap memory or other resources.

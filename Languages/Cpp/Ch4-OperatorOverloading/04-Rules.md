<h1 style="text-align:center;"> Rules </p>

### Rules

- Associativity, precedence & arity (operand count) does not change
- Operator functions should be non-static
  - except for new & delete
- One argument should be user defined type
- Global overload if first operand is primitive type
- Not all operators can be overloaded
  - . ?: .\* sizeof
- Cannot define new operators
- Overloaded for conventional behaviour only

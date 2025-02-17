<h1 style="text-align:center;"> Nix Functions</p>

## Defining Functions
* In Nix every function is a lambda.

* Single paramter example <br>
   ```nix
    x          : x +2
   # Parameter : Function body
   ```
* Can be testied using nix-repl
  ```nix
  nix-repl> (x : x + 2) 10
  12
  ```

* Multiple parameters functions can be achieved in which can be broken down in outer and inner functions
  ```nix
  nix-repl> multiply = (x : y: x * y)

  nix-repl> multiply 5 5
  25
  ```

* Destructured sets as parameters
  ```nix
  {pkgs, lib, ...} : 
  {
    environment.systemPackages = [ pkgs.lf];
  }
  # We use Ellipses (...) telling Nix that we don't mind any extra attributes
  ```

* Setting default attributes values using question mark
  ```nix
  nix-repl> func = { x ? 6, y ? 5 } : x + y

  nix-repl> func {}
  11
  # Useful for creating packages with optional features, making them exposed to user.
  ```

* Using structured set paramters and nornam set parameters at same time
  ```nix
     {x , y} : x + y
     param: param.x + param.y
     param @ {x, y} : x + param.y
  ```

  ```nix
  # We can use specialArgs to pass value
  outputs = { nixpkgs, ...} @inputs : {
    specialArgs = {inherit inputs;}
    modules = [];
  }
  ```
  

## Using bultins functions
  ```nix
   nix-repl> builtins.trace "Hello World"  1      
   trace: Hello World
   1

   nix-repl> builtins.toString 1000               
   "1000"

   nix-repl> builtins.map (n: n * 10) [1 2 3 4 5]
   [
    10
    20
    30
    40
    50
   ]

   nix-repl> builtins.readFile ./test.txt
   "Hello World"
   ```


## Finding Functions
 https://noogle.dev/
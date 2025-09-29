<h1 style="text-align:center;"> Constructor </p>

### Constructor

- Constructors are special member function which is used to initalize value of a variable inside a object.
- Constructor's name is same as as class name
- A constructor automically invoked as soon as object of its class is created.
- No return type, not even void.
- A constructor cannot be inherited.
- Defined inside public section
- Cannot be virtual
- Can be overloaded
- Types of constructors
  - Default
  - Parameterized
  - Copy
  - Delegating
  - Inheriting

### Default Constructor

- Constructor with no arguments
- Automatically synthesized by the compiler if no other user-defined constructor exist

```cpp
class car {
private:
  string brand;
public:
  car() {
    cout << "Default constructor is invoked" << endl;
    brand = "Maruti";
  }
  void displayInfo() { cout << "Brand: " << brand; }
};

int main() {
  car obj;
  obj.displayInfo();
}
```

### Parameterized Constructor

- Constructor that accepts one or more arguments
- Used to initialize the object with user-defined values
- Never synthesized by the compiler
- Blocks auto generation of default constructor

```cpp
class car {
private:
  string brand;

public:
  car(string b) {
    cout << "Paramterized constructor is invoked" << endl;
    brand = b;
  }
  void displayInfo() { cout << "Brand: " << brand; }
};

int main() {
  car obj("Toyota");
  obj.displayInfo();
}
```

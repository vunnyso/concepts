<h1 style="text-align:center;"> this Pointer </p>

### this Pointer

- A hidden pointer passed to member function
- Used when instance variable and local variables are with same name
- Points to the object that invoked the member function
- Provided as a keyword that is meaningful only in member functions
- Can be used to access members inside the member functions
- Cannot assign address to this pointer as its constant

### Example

```cpp

class car {
 string brand;

public:
 void Foo(car &car) {}
 void display(string brand) {
   this->brand = brand;
   cout << "Brand: " << brand << endl;
   Foo(*this); // Pass obj to member function
 }
};

int main() {
 car obj;
 obj.display("Toyota");
 return 0;
}
```

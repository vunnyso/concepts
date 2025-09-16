### Charateristics / Properties

1. Class & Object
2. Encapsulation
3. Polymorphism
4. Inheritance

### Class and object

- Its user defined data type, which holds its own data members and member functions.
- Object is instance of class.
- Helps in code reusbality

### This keyword

- This pointer is a pointer to current instance of the class.
- Used when instance variable and local variables are with same name.

### Encapsulation

Wrapping varaibles and functions in class. Helps in data hiding.

### Polymorphism

Poly means many and morph means forms. basically 2 types

1. Compile Time / Static Binding / Earlt Binding
   a. Function overloading (Same function with different params)
   b. Operator overloading
2. Runtime / Dynamic Binding / Lazy Binding
   a. Function overriding using virtual functions

**Syntax**
Function overloading

```cpp
class test {
    public:
        void fun(int x) { cout<<"Parameter is integer" <<endl; }
        void fun(double x) { cout<<"Parameter is double"<<endl; }
};

int main(){
    test t1;
    t1.fun(1);
    t1.fun(1.1);
}
```

**Syntax**
Operator overloading (We can achieve this by function as well, but when we have expression better to overload operator)

```cpp
class point {
    int x, y;
    public:
        point(int x = 0, int y = 0) : x{x}, y{y} {}
        point operator + (const point &rhs) {
            point p;
            p.x = x + rhs.x;
            p.y = y + rhs.y;
            return p;
        }
        void print() {
            cout <<"x : " << x <<" and y: " << y <<endl;
        }
};

int main() {
    point p1(1, 2), p2(3, 4);
    point p3 = p1 + p2;
    p3.print();
    return 0;
}
```

**Syntax**
Function override

```cpp
class base {
    public: virtual void fun() { cout<<"Base" <<endl; }
};

class derived: public base {
    public: virtual void fun() override { cout<<"Derived" <<endl; }
};
int main() {
    base *ptr = new derived();
    ptr->fun();
    return 0;
}
```

**Note:**

1. Virtual function can be accessed using pointer or reference.
2. Virtual function cannot be static
3. Pure Virtual function which have no defination and assigned with 0 and that class will be became abstract(not fully constructable)
4. Virtual table are created for all classes which have one virtual function or classes which are derived from base which has virtual function.
5. Virtual table will have function pointer and its static arrays. All objects pointer to same vtable.

### Inheritance

The capability of a class to derive properties and characteristics from another class.

### Inheritance

1. Single
2. Multiple
3. Multilevel
4. Hybrid
5. Hierarchial

### Single Inheritance

If one class is being inherited by another class.
If you have class A, using properties of A and you are creating an new class B.

A -> B

### Multiple Inheritance

If more than one class is being inherited by another class.

A, B, C -> D

### Multi level Inheritance

If one class is being inherited by another class and then other class is being inhertied by another class.

A -> B -> C

### Hierarchial level Inheritance

If one base class is being inherited by multiple derived classes
A -> B, C

### Hybrid Inheritance

When we combine two or more type of inheritance into one, then its called hybird

A -> B -> C , D

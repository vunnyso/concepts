### What is class and object?

User defined data type

### What is Constructor?

Constructors are special member function which is used to initalize value of a variable inside a object.

- Constructor's name is same as as class name
- A constructor automically invoked as soon as object of its class is created.
- No return type, not even void.
- Allows default arguments
- A constructor cannot be inherited.
- Defined inside public section
- Cannot be virtual

### Types of constructors

1. Default
2. Parameterized
3. Copy

### Default constructor

Which has no arguments.

**Example Program**

```cpp
class abc {
    int a;
    public:
        abc() {
            cout <<"Default Constructor is invoked " << endl;
            a = 10;
        }
      void putData();
};
void abc::putData()
{
    std::cout << a << std::endl;
}

int main()
{
    abc obj;
    obj.putData();
}


```

### Paramterized constructor

Which has arguments

**Example Program**

```cpp
class abc {
    int a, b;
    public:
        abc(int x, int y) {
            cout <<"Constructor is invoked " << endl;
            a = x;
            b = y;
        }
      void putData();
};
void abc::putData()
{
    std::cout << a << " and " <<b << std::endl;
}

int main()
{
    abc obj (10, 30);
    obj.putData();
    abc obj2 ( 15, 25);
    obj2.putData();
}
```

### Copy constructor

When we need to initalize the variables of an object with values of variables of another object of same type.
Can be done by 2 ways

- Using assignment operator
  - Example obj2 = obj1; - (Assignment operator is overloaded)
- Passing object during iniatlization
  - Example obj2(obj1) - (Copy constructor is called)

**Example Program**

```cpp
class abc {
    int a, b;
    public:
        abc() // Default constructor
        {
            cout <<"Default Constructor is invoked " << endl;
            a = 10;
        }
        abc(abc &x) // copy constructor
        {
            cout <<"Copy Constructor is invoked " << endl;
            a = x.a;
        }
      void putData();
};
void abc::putData()
{
    std::cout << a << " and " <<b << std::endl;
}

int main()
{
    abc obj;
    obj.putData();
    abc obj2(obj);
    obj2.putData();
}

```

### Shallow copy and deep copy

How objects or variables are copied from one to another, particularly when pointers or dynamic memory allocation are involved.

#### Shallow copy

A shallow copy copies an object’s values as they are, including any pointers. This means that after the copy, both the original and the copied object will point to the same memory location for dynamically allocated resources

#### Deep copy

A deep copy, on the other hand, creates a new copy of the dynamically allocated memory, ensuring that the original and the copy are completely independent.

```cpp
class shallow {
    public:
        int *data;
        shallow(int val) {
            cout<<"Constructor is called" <<endl;
            data = new int(val);
        }
        shallow(const shallow &ref) {
            cout<<"Copy constructor is called" <<endl;
            data = ref.data;
            //data = new int(*(ref.data)); -- using it will deep copy
        }
        ~shallow() {
            cout<<"Destructor is called" <<endl;
            delete data;
        }
};

int main()
{
    shallow s1(10);
    shallow s2 = s1;
    cout << "Value is " << s1.data << endl;
    cout << "New value is " << s2.data << endl;
    return 0;

}
```

### Constructor overloading

We have multiple contructors in program which can have different number of arguments or types of arguments.

### What is destructor?
- Used to destory object, once object goes out of scope
- Neither arguments and nor return type
- Similar to class name, preceeded with ~(tilde)

### Types of destructor
1. Default

### Default destructor
No arguments.

**Example Program**
```cpp
int count ;
class demo {
    int a, b;
    public:
        demo() // Default constructor
        {
            count ++;
            cout <<"Default Constructor is invoked "<<" and " << count << endl;
        }
        ~demo()
        {
            count --;
            cout <<"Default destructor is invoked " <<" and " << count << endl;
        }
};

int main()
{
    demo obj, obj2;
    {demo obj3;}
}
```

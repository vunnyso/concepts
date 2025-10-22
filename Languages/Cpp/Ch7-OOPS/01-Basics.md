<h1 style="text-align:center;"> Basics </p>

### Object Oriented Programming

- System is made up of objects
- Object is instance of a class
- Classes & objects are related
- Collaboration between objects
- Define the behaviour of the system

### Types of relationship

1. Composition
2. Inheritance

### Composition

- Object composed in another object
- We have outer object which uses behaviour of innear object for its functionality
- Represents “has-a” relation
- Reuse behavior
- Example
  ```cpp
  class Car{
  Engine m_Engine ;
  public:
      void Accelerate(){
          m_Engine.Intake();
          //etc
  ```

### Inheritance

- Class inherits the features of another class
- Reuse & inherit behaviour
- Represents “is-a” relationship
- Syntax
  ```cpp
  class <child class> :  <access modifier> <base class>
  class Dog: : public Animal
  ```

#### Access modiifiers

Can be public, protected and private

#### 🧩 Access Modifier Table for Inheritance in C++

| **Base Class Member Access** | **Public Inheritance** | **Protected Inheritance** | **Private Inheritance** |
| ---------------------------- | ---------------------- | ------------------------- | ----------------------- |
| `public` members             | `public` in derived    | `protected` in derived    | `private` in derived    |
| `protected` members          | `protected` in derived | `protected` in derived    | `private` in derived    |
| `private` members            | ❌ _Not accessible_    | ❌ _Not accessible_       | ❌ _Not accessible_     |

### Types of inheritance

1. **Single Inheritance**

   ➡️ One base class, one derived class.

   ```cpp
   #include <iostream>
   class Animal {
   public:
     void eat() { std::cout << "Animal eating" << std::endl; }
   };

   class Dog : public Animal {
   public:
     void bark() { std::cout << "Dog barking" << std::endl; }
   };

   int main() {
     Dog d;
     d.eat();
     d.bark();
     return 0;
   }
   ```

2. **Multiple Inheritance**

   ➡️ One class inherits from more than one base class.

   ```cpp
   #include <iostream>

   class Engine {
   public:
     void start() { std::cout << "Engine starting" << std::endl; }
   };

   class Wheels {
   public:
     void wheels() { std::cout << "Wheels rotating" << std::endl; }
   };

   class Car : public Engine, public Wheels {};

   int main() {
     Car c;
     c.start();
     c.wheels();
     return 0;
   }
   ```

3. **Multilevel Inheritance**

   ➡️ A chain of inheritance.

   ```cpp
   #include <iostream>

   class Animal {
   public:
     void Eat() { std::cout << "Animal Eating" << std::endl; }
   };

   class Mammal : public Animal {
   public:
     void walk() { std::cout << "Mammal walking" << std::endl; }
   };

   class Dog : public Mammal {
   public:
     void bark() { std::cout << "Dog barking" << std::endl; }
   };
   int main() {
     Dog d;
     d.walk();
     return 0;
   }
   ```

4. **Hierarchical Inheritance**

   ➡️ Multiple classes inherit from the same base.

   ```cpp
         class Animal {
     public:
       void Speak() { std::cout << "Animal Speaking" << std::endl; }
     };

     class Cat : public Animal {
     public:
       void Meow() { std::cout << "Meowing.." << std::endl; }
     };

     class Dog : public Animal {
     public:
       void bark() { std::cout << "Barking.." << std::endl; }
     };
   ```

5. Hybrid (or Virtual) Inheritance

   ➡️ A mix of multiple and multilevel inheritance.

   Can cause the diamond problem, solved using virtual inheritance.

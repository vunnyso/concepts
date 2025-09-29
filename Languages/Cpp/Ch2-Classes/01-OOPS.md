<h1 style="text-align:center;"> OOPS </p>

### Object Oriented Programming

- Uses objects as fundamental building blocks, rather algorithms
- Program is created as a collection of objects
- Every object is an instance of some class
- Classes are united via inheritance relationship
- Simulate interactions of objects in real-world systems
- Allows representation of objects in problem domain as software objects
- Decreases complexity of software systems
- Make code reusable, extensible and maintainable

### Object Model

- Basic principles that help us write OO programs
- Abstraction
- Encapsulation
- Inheritance
- Composition
- Polymorphism

### Abstraction

- Abstraction focuses on important & necessary details
- Unwanted features are left out
  - e.g. name of a person without other details (age, weight, etc)
- Helps focus on important characteristics
- Used to represent real-life objects in software, but without the associated complexity
- Represented through a class, struct, interface, union or enum

### Encapsulation

- Wrapping varaibles and functions in class. Helps in data hiding.
- Next step after abstraction
- Hides the implementation details of a class
- The class provides behaviour without revealing the implementation
- Objects of such classes are easy to use
- The internal implementation can be changed without the users’ knowledge
- Implemented through access modifiers in OO languages

### Inheritance

- The capability of a class to derive properties and characteristics from another class.
- Represents a hierarchy of classes
- The classes are related through “is-a” relationship
- The relation is due to same behaviour of classes
  - e.g. a dog is an animal
- The behaviour & its implementation is inherited by the children from the parent
- The child classes may then reuse the behaviour with the same implementation or provide a different implementation
- Promotes reuse & extensibility

### Composition

- Signifies relationship between objects
- Represented as “has-a” or “part-of” relationship
- Promotes reuse of objects
  - e.g. car has an engine

### Polymorphism

- Means different forms
- Represents common behaviour with different implementations
- Response will be different for each object, either based on its class or the arguments
  - e.g. car, cycle, person, etc. can move differently
- Implemented through function overloading, templates & virtual functions
- Used in conjunction with inheritance & composition
- Promotes reuse, scalability & extensibility

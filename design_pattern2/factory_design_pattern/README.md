# Factory Design Pattern

## Overview
The **Factory Design Pattern** is a creational design pattern that provides an interface for creating objects in a superclass but allows subclasses to alter the type of objects that will be created. It encapsulates the object creation logic, making the code more flexible and easier to maintain.

This pattern is particularly useful when the exact type of object to be created is determined at runtime.

---

## Why Do We Need the Factory Pattern?

1. **Encapsulation of Object Creation**:
   - The Factory pattern encapsulates the logic of object creation, making the code cleaner and more modular.

2. **Flexibility**:
   - It allows the creation of objects without specifying their exact class in the client code.

3. **Scalability**:
   - Adding new types of objects becomes easier without modifying existing code.

4. **Decoupling**:
   - The client code is decoupled from the concrete classes, promoting loose coupling.

---

## When Should You Use the Factory Pattern?

- When the exact type of object to be created is determined at runtime.
- When you want to decouple the client code from the concrete classes.
- When you need to centralize the object creation logic.
- When you want to make the code more flexible and scalable.

---

## Key Components of the Factory Pattern

1. **Product**:
   - The interface or abstract class that defines the type of objects the factory will create.

2. **Concrete Product**:
   - The specific implementations of the Product interface.

3. **Creator (Factory)**:
   - The class that contains the logic for creating objects. It defines a method for creating objects, which subclasses can override to specify the type of object to create.

4. **Client**:
   - The code that uses the Factory to create objects.
   
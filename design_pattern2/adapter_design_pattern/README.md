# Adapter Design Pattern

## Overview
The **Adapter Design Pattern** (also known as the **Wrapper Pattern**) is a structural design pattern that allows incompatible interfaces to work together. It acts as a bridge between two incompatible interfaces by converting the interface of one class into another interface that the client expects.

This pattern is particularly useful when integrating legacy code or third-party libraries into a new system.

---

## Why Do We Need the Adapter Pattern?

1. **Interface Compatibility**:
   - When two systems or classes have incompatible interfaces, the Adapter pattern allows them to work together seamlessly.

2. **Reusability**:
   - Enables the reuse of existing classes without modifying their code.

3. **Integration**:
   - Simplifies the integration of third-party libraries or legacy systems into a new application.

4. **Decoupling**:
   - Decouples the client code from the implementation details of the adapted class.

---

## When Should You Use the Adapter Pattern?

- When you need to use an existing class but its interface does not match the requirements of your application.
- When you want to integrate a third-party library or legacy code into your system.
- When you need to decouple the client code from the implementation details of an incompatible class.
- When you want to standardize the interface of multiple classes with different implementations.

---

## Key Components of the Adapter Pattern

1. **Target Interface**:
   - Defines the interface that the client expects.

2. **Adaptee**:
   - The existing class with an incompatible interface.

3. **Adapter**:
   - A class that implements the Target Interface and translates the requests from the client to the Adaptee.

4. **Client**:
   - The code that interacts with the Target Interface.

---

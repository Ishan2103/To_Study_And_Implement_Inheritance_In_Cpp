# To study and implement Inheritance

**Name**: Ishan Danech 
**PRN**: 24070123047
**Batch**: ENTC A2

---

## Overview  

Inheritance in C++ is one of the fundamental features of Object-Oriented Programming (OOP).  
It allows a **new class (derived class)** to reuse the members (data and methods) of an **existing class (base class)**.  
By doing so, it promotes **code reusability**, **extensibility**, and **hierarchical structuring of classes**.  

Key advantages of inheritance:  
- Avoids duplication of code.  
- Improves code maintainability.  


Types of inheritance studied in this experiment:  
- Single Inheritance  
- Multiple Inheritance  
- Multilevel Inheritance  
- Hierarchical Inheritance  
- Access Specifier Inheritance  

## 1. Single Inheritance  

- In **single inheritance**, a class (derived class) inherits from only one base class.  
- It forms a simple parent-child relationship.  
- It is the simplest and most widely used type of inheritance.  
- Example: A `Pet` class can inherit properties from an `Animal` class (like `type`, `sound`).  
- **Real-world analogy**: A `Car` inheriting features from a `Vehicle`.  

**Output:**  
Type: Dog
Name: tommy
Barks

## 2. Multiple Inheritance  

- In **multiple inheritance**, a class inherits from **two or more base classes**.  
- It allows the derived class to combine features of multiple classes into one.  
- However, it can sometimes create ambiguity (like the **diamond problem**), which is resolved using virtual inheritance.  
- Example: A `Car` can inherit the brand and color from `Vehicle` and horsepower from `Engine`.  
- **Real-world analogy**: A `Smartphone` inherits features from both a `Camera` and a `Phone`.  

**Output:**  
Brand: Ford
Model: Mustang
Year: 2024
Horsepower: 450
Color: Red
Engine Type: V8

## 3. Multilevel Inheritance  

- In **multilevel inheritance**, a class is derived from another derived class.  
- It creates a chain of inheritance across multiple levels.  
- Properties of the base class are passed down the hierarchy.  
- Example: `LivingBeing → Animal → Dog`  
  - `LivingBeing` defines general features,  
  - `Animal` adds more specific features,  
  - `Dog` specializes further.  
- **Real-world analogy**: `Grandparent → Parent → Child` family relationship.  

**Output:**  
French Bulldog
Animals eat food
Dog colour
black


## 4. Hierarchical Inheritance  

- In **hierarchical inheritance**, multiple derived classes inherit from a single base class.  
- Each derived class has access to the base class’s features, but also defines its own unique behavior.  
- This allows creating different specialized classes from one general base.  
- Example: `Gadget` as a base class, with derived classes `Smartphone`, `Laptop`, and `Smartwatch`.  
- **Real-world analogy**: A `Teacher`, `Doctor`, and `Engineer` all inheriting from a general `Person`.  

**Output:**  
Smartphone:
Powering on the device
Smartphone can make calls

Laptop:
Powering on the device
Laptop can run C++ programs

martwatch:
Powering on the device
Smartwatch tracks heart rate


## 5. Access Specifier Inheritance  

- Access specifiers (`public`, `protected`, `private`) control **how members of a base class are inherited** into derived classes.  
- **Public Inheritance**:  
  - Public members of base → Public in derived.  
  - Protected members of base → Protected in derived.  
  - Private members of base → Not accessible in derived.  
- **Protected Inheritance**:  
  - Public and Protected members of base → Protected in derived.  
  - Private members of base → Not accessible.  
- **Private Inheritance**:  
  - Public and Protected members of base → Private in derived.  
  - Private members of base → Not accessible.  
- Example: `Vehicle → Car → ElectricCar`, where public and protected members are inherited while private members remain hidden.  
- **Real-world analogy**: Security levels — everyone can see public info, only family sees protected info, and private info is hidden from everyone.  

**Output:**  
Enter Fuel Type: Diesel
Enter Horsepower: 4500
Enter Number of Seats: 6
Engine Started
Engine Stopped

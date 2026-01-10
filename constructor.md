# 📘 OOPS in C++ — Constructors & Copy Constructor (Rectangle Example)

This README explains **Constructors**, **Constructor Overloading**, **Copy Constructor**, and **Deep Copy** using **one single class: `Rectangle`**.

---

## 🧠 What is a Constructor?

A **constructor** is a **special function** that:

* Has the **same name as the class**
* Is called **automatically** when an object is created
* Is used to **initialize data members**

📌 Constructor **does not have a return type**.

---

## 🧱 Rectangle Class Overview

We will use this class throughout:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Parameterized Constructor with default values
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    // Setter functions
    void setLength(int l) {
        length = l;
    }

    void setBreadth(int b) {
        breadth = b;
    }

    // Getter functions
    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};
```

---

## 🚀 Using the Class

```cpp
int main() {
    Rectangle r1(10, 15);

    cout << "Area is : " << r1.area() << endl;
    cout << "Perimeter is : " << r1.perimeter() << endl;

    return 0;
}
```

---

## 🧩 Types of Constructors

### 1️⃣ Non-Parameterized Constructor

```cpp
Rectangle() {
    length = 1;
    breadth = 1;
}
```

📌 Called when:

```cpp
Rectangle r;
```

---

### 2️⃣ Parameterized Constructor (Used Here ✅)

```cpp
Rectangle(int l = 0, int b = 0) {
    length = l;
    breadth = b;
}
```

✔ Allows values at object creation
✔ Default values act like **non-parameterized constructor**

Examples:

```cpp
Rectangle r1;        // length=0, breadth=0
Rectangle r2(10);    // length=10, breadth=0
Rectangle r3(10,15); // length=10, breadth=15
```

---

### 3️⃣ Constructor Overloading

When **multiple constructors have the same name but different parameters**, it is called **Constructor Overloading**.

📌 C++ decides which constructor to call based on arguments.

---

## 🧬 Copy Constructor (Shallow Copy)

A **copy constructor** creates a **new object using an existing object**.

### Syntax:

```cpp
Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}
```

### Usage:

```cpp
Rectangle r1(10, 15);
Rectangle r2(r1);   // Copy constructor called
```

✔ Copies values member-by-member
✔ This is **shallow copy**

---

## ⚠️ Important Question

### Does `Rectangle` need a Deep Copy?

👉 **NO**, because:

* `length` and `breadth` are **primitive data types**
* They don’t use dynamic memory (`new`)

But for **learning**, let’s see a **Deep Copy example** 👇

---

## 🧠 Deep Copy Constructor (Concept)

### When do we need Deep Copy?

When a class contains **pointers / dynamic memory**.

---

## 🧱 Modified Rectangle Class (For Deep Copy Demo)

```cpp
class Rectangle {
private:
    int* length;
    int* breadth;

public:
    // Parameterized Constructor
    Rectangle(int l = 0, int b = 0) {
        length = new int(l);
        breadth = new int(b);
    }

    // Deep Copy Constructor
    Rectangle(const Rectangle& r) {
        length = new int(*r.length);
        breadth = new int(*r.breadth);
    }

    int area() {
        return (*length) * (*breadth);
    }

    ~Rectangle() {
        delete length;
        delete breadth;
    }
};
```

---

## 🔍 Why This is Deep Copy?

```cpp
Rectangle r1(10, 15);
Rectangle r2(r1);
```

Memory layout:

```
r1.length  ---> 10
r2.length  ---> 10   (different memory)
```

✔ Both objects have **independent memory**
✔ Changes in one **don’t affect** the other

---

## ❌ Shallow Copy Problem (If Deep Copy Not Used)

```cpp
Rectangle r2 = r1;
```

❌ Both objects point to **same memory**
❌ Destructor causes **double delete error**

---

## 🧹 Destructor (Very Important with Deep Copy)

```cpp
~Rectangle() {
    delete length;
    delete breadth;
}
```

✔ Frees heap memory
✔ Prevents memory leak

---

## 📝 Practice Questions

### Q1️⃣ When is constructor called?

👉 Automatically when object is created

---

### Q2️⃣ Why deep copy is required?

👉 When class uses **dynamic memory**

---

### Q3️⃣ What happens if destructor is missing?

👉 **Memory leak**

---

## 🎯 Key Takeaways

* Constructor initializes objects
* Default values reduce extra constructors
* Copy constructor copies objects
* **Deep copy is mandatory for pointers**
* Destructor cleans memory

---

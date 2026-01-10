# 📘 OOPS Basics in C++ — Class, Object & Data Hiding

This file explains **Class, Object, Access Specifiers, Data Hiding** using **one single example: `Rectangle`**.

---

## 🧠 What is OOPS?

**OOPS (Object-Oriented Programming System)** is a way of writing programs by **grouping data + functions together**.

Think like this:

> A **Rectangle** has **properties** (length, breadth)
> and **behaviors** (area, perimeter)

---

## 🧱 Class

A **class** is a **blueprint** or **design**.

📌 *Example*:
A house blueprint is NOT a house.
A class is NOT an object.

---

## 📦 Object

An **object** is a **real thing created from a class**.

📌 From the same blueprint, you can create **many houses** → many objects.

---

## 🔐 Access Specifiers

C++ provides **3 access levels**:

| Keyword     | Meaning                      |
| ----------- | ---------------------------- |
| `public`    | Accessible everywhere        |
| `private`   | Accessible only inside class |
| `protected` | Used in inheritance (later)  |

---

# ❌ Without Data Hiding (Bad Practice)

```cpp
class Rectangle {
public:
    int length;
    int breadth;

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};
```

### ❗ Problem

```cpp
Rectangle r;
r.length = -10;   // ❌ invalid value allowed
```

👉 Anyone can **break your object**.

---

# ✅ With Data Hiding (GOOD PRACTICE)

We make data **private** and access it using **methods (functions)**.

---

## 📌 Rectangle Class (Clean Version)

```cpp
#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
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

    // Behaviour functions
    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};
```

---

## 🚀 Main Function (Using the Class)

```cpp
int main() {
    Rectangle r1;   // Object created on stack

    r1.setLength(10);
    r1.setBreadth(15);

    cout << "Area is : " << r1.area() << endl;
    cout << "Perimeter is : " << r1.perimeter() << endl;

    return 0;
}
```

---

## 🧠 What is Happening Internally?

1. `Rectangle r1;`
   → Object created in **stack memory**

2. `r1.setLength(10);`
   → Length is safely set

3. `r1.area()`
   → Uses internal data to calculate area

---

## ❓ Why Data Hiding is Important?

✔ Prevents invalid data
✔ Improves security
✔ Makes code maintainable
✔ Industry standard

---

## 📝 Practice Questions

### Q1️⃣ Why can’t we access `length` directly?

```cpp
r1.length = 10; // ❌ ERROR
```

👉 Because `length` is **private**

---

### Q2️⃣ What happens if we don’t call setters?

```cpp
Rectangle r;
cout << r.area();
```

👉 **Garbage value** (uninitialized variables)

---

### Q3️⃣ Modify `setLength()` to prevent negative values

```cpp
void setLength(int l) {
    if (l > 0)
        length = l;
    else
        length = 0;
}
```

---

## 🎯 Key Takeaways

* **Class** → Blueprint
* **Object** → Real instance
* **Private data** → Safety
* **Public methods** → Controlled access
* **Data Hiding** → Core OOPS principle

---

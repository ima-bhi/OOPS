```md
# 🧮 Complex Number Implementation in C++ (OOPS Basics)

This project demonstrates **basic Object-Oriented Programming (OOPS)** concepts in **C++** using a **Complex Number** example.

The goal is to understand:
- Class & Object
- Constructor
- Member Functions
- Operator Overloading (`+`)

This example is intentionally **simple and beginner-friendly**.

---

## 📌 What is a Complex Number?

A complex number has:
- **Real part**
- **Imaginary part**

Example:
```

5 + 3i

````

---

## 🧱 OOPS Concepts Used

| Concept | Description |
|------|------------|
| Class | Blueprint of the complex number |
| Object | Instance of the class |
| Constructor | Initializes real & imaginary values |
| Member Function | Adds two complex numbers |
| Operator Overloading | Makes `+` work with objects |

---

## 📂 Full Source Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Complex {
public:
    int real;
    int img;

    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Addition using member function
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    // Operator overloading for +
    Complex operator+ (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    // Using add() function
    Complex r1(5, 3);
    Complex r2(10, 5);

    Complex r3 = r1.add(r2);
    cout << "Using add() -> real : " << r3.real
         << " img : " << r3.img << endl;

    // Using operator overloading
    Complex r4(5, 3);
    Complex r5(10, 5);

    Complex r6 = r4 + r5;
    cout << "Using operator+ -> real : " << r6.real
         << " img : " << r6.img << endl;

    return 0;
}
````

---

## 🔍 Code Explanation (Very Simple)

### 1️⃣ Class Definition

```cpp
class Complex
```

Defines a blueprint for complex numbers.

---

### 2️⃣ Data Members

```cpp
int real;
int img;
```

* `real` → real part
* `img` → imaginary part

---

### 3️⃣ Constructor

```cpp
Complex(int r = 0, int i = 0)
```

* Initializes object values
* Default values allow:

```cpp
Complex c;   // real = 0, img = 0
```

---

### 4️⃣ Addition Using Function

```cpp
r1.add(r2);
```

* Calls `add()` function
* Returns a new `Complex` object

---

### 5️⃣ Operator Overloading

```cpp
r4 + r5;
```

Internally works as:

```cpp
r4.operator+(r5);
```

This makes code:

* Cleaner
* More readable
* Closer to mathematical notation

---

## 📤 Output

```
Using add() -> real : 15 img : 8
Using operator+ -> real : 15 img : 8
```

---


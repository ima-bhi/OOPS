#include <bits/stdc++.h>

using namespace std;

// Define Class- > without Data Hiding Functionality 

// class Rectangle {
//     //scope
//     public: 
//     int length,breadth;

//     int area() {
//         return length * breadth;
//     }

//     int perimeter() {
//         return 2 * (length + breadth);
//     }
// };

// int main() {

//     // Object create using stack
//     Rectangle r1; //class object r1 - In this we use stack to create Object
//     r1.length = 10;
//     r1.breadth = 15;

//     cout << "Area is : " << r1.area() << endl;
//     cout << "perimeter is : " << r1.perimeter() << endl;

//     // Object created using Heap

//     Rectangle * r2= new Rectangle();
//     r2-> length=10;
//     r2->breadth=15;

//     cout << "Area is -> : " << r2->area() << endl;
//     cout << "perimeter is -> : " << r2->perimeter() << endl;

//     return 0;
// }

//--------------------Define a class - with Data Hiding

class Rectangle {
    //scope
    private: int length,
    breadth;
    public: void setLength(int l) {
        length = l;
    }
    void setBreadth(int b) {
        breadth = b;
    }
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

int main() {
    Rectangle r1;
    // r1.length = 10;
    // r1.breadth = 15; // private variable not access like this
    
    r1.setLength(10);
    r1.setBreadth(15);

    cout << "Area is : " << r1.area() << endl;
    cout << "perimeter is : " << r1.perimeter() << endl;


    return 0;
}

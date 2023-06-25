#include <iostream>
using namespace std;

// Circle ( 1 argument )
double area(double radius) {
    return 3.14 * radius * radius;
}

// Square ( 2 arguments )
double area(double length, double breadth) {
    return length * breadth;
}


int main () {
    cout << "Hello World" << endl;

    cout << "Area of circle: " << area(23.12) << endl;
    cout << "Area of rectangle:" << area(50,67) << endl;
}
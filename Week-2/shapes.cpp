#include <iostream>
using namespace std;

#define _USE_MATH_DEFINES 
#include <cmath>

/* Area of Circle */
int area(int radius) {
	return (M_PI * (radius*radius));
}

/* Area of Square */
float area(float side) {
	return (side * side);
}

/* Area of Rectangle */
float area(float length, float breadth) {
	return (length * breadth);
}

/* Area of Triangle */
float area(int base, float height) {
	return ((0.5) * base * height);
}

int main () {
	cout << "Area of circle: " << area(20) << endl;
	cout << "Area of square: " << area(float(5.55)) << endl;
	cout << "Area of rectangle: " << area(float(4.56),float(7.89)) << endl;
	cout << "Area of triangle: " << area(3,float(3.345)) << endl;
}

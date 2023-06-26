#include <iostream>
using namespace std;

/*
Develop a class called GeometricShape. Use this class to store double type values
that would be used to compute the area of geometric shapes.
Derive three specific classes called Rhombus, Rectangle, and Trapezoid from
GeometricShape.
Add base class member functions called getdata() to initialize base class data members
and displayarea() to compute and display the area of shapes. Make displayarea() as a
pure virtual function and redefine this function in the derived classes to suit their
requirements.
Write a main() to illustrate virtual functions.
*/

class GeometricShape {
protected: 
    double a, b, c, d;

public:
    virtual void displayarea() = 0;
};

class Triangle:public GeometricShape {
public:
    void displayarea() { cout << a * b;  }
};
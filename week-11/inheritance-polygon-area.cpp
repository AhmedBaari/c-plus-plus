#include <iostream>
using namespace std;

/*
Create a class called polygon which consist of width and height. Use constructor to initialize the members. The class must include a pure virtual function ‘area’. Derive three classes rectangle, triangle and parallelogram from class ‘polygon’ which override the function ‘area’ appropriately. Use base class pointer to access the area function of the three classes."
*/

class polygon {
    protected:
        double width, height;

    polygon(double width, double height):width(0.0),height(0.0) {}

    public:
        virtual double area() = 0;
};

// Rectangle Class
class rectangle:public polygon {
    public:
        rectangle(double length, double width):polygon(length, width) {}

        double area() {
            return width*height;
        }
};

class triangle:public polygon {
    public:
        triangle(double length, double width):polygon(length, width) {}

        double area() {
            return width*height;
        }
};

class parallelogram:public polygon {
    public:
        parallelogram(double length, double width):polygon(length, width) {}

        double area() {
            return width*height;
        }
};


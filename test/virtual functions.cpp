#include <iostream>
using namespace std;

class Shape {
public:
    // Declare the virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    // Override the virtual function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    // Override the virtual function
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape* shapePtr;
    Shape shapeObj;
    Circle circleObj;
    Square squareObj;

    shapePtr = &shapeObj;
    shapePtr->draw();
    // Point the shape pointer to the circle object
    shapePtr = &circleObj;

    // Call the draw function of the circle object
    shapePtr->draw();

    // Point the shape pointer to the square object
    shapePtr = &squareObj;

    // Call the draw function of the square object
    shapePtr->draw();

    return 0;
}
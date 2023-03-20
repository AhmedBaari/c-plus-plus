#include <iostream>

using namespace std;

double compute(double radius = 1.0, double height = 2.0) {
    const double pi = 3.14159;
    double volume = pi * radius * radius * height;
    return volume;
}

int main() {
    double r, h;
    cout << "Enter the radius of the cylinder: ";
    cin >> r;
    cout << "Enter the height of the cylinder: ";
    cin >> h;

    double volume = compute(r, h);
    cout << "The volume of the cylinder with radius " << r << " and height " << h << " is: " << volume << endl;

    volume = compute();
    cout << "The default volume of the cylinder is: " << volume << endl;

    return 0;
}

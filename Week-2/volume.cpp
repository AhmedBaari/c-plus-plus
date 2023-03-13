/* Program to compute the volume of a cylinder using a function compute(), with default
values - 1 for radius of the base of the cylinder and 2 for height of the cylinder. Calculate
and return the volume of the cylinder, by calling the function from the main(), with and
without arguments. */

#include <iostream>
using namespace std;

int compute(int radius = 1, int height = 2) {
return 3.14159 * (radius^2) * height;
}

int main () {
int radius = 5;
int height = 10;

cout << "With args: " << compute(5,10) << endl;
cout << "Without args: " << compute() << endl;
}

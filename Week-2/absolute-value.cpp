/*Write a program to find the absolute value of an integer, double and float value using
function overloading.*/
#include <iostream>
using namespace std;

int abs(int num) {
    if(num < 0) {
        return -num;
    } else {
        return num;
    }
}

double abs(double num) {
    if(num < 0) {
        return -num;
    } else {
        return num;
    }
}

float abs(float num) {
    if(num < 0) {
        return -num;
    } else {
        return num;
    }
}

int main() {
    int a;
    double b;
    float c;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a double: ";
    cin >> b;
    cout << "Enter a float: ";
    cin >> c;
    cout << "Absolute value of " << a << " is " << abs(a) << endl;
    cout << "Absolute value of " << b << " is " << abs(b) << endl;
    cout << "Absolute value of " << c << " is " << abs(c) << endl;
    return 0;
}

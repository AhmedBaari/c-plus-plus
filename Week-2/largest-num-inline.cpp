//Write a program to find the largest of the three numbers using inline functions.
#include <iostream>
using namespace std;

// inline int max(int a, int b, int c) {
//     return (a > b ? (a > c ? a : c) : (b > c ? b : c));
// }

inline int max(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}


int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The largest number is " << max(num1, num2, num3) << endl;
    return 0;
}

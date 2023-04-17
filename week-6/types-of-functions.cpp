#include <iostream>
using namespace std;

// pass by value, return by reference
#include <iostream>
using namespace std;

// pass by reference, return by reference
int& swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swap: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}

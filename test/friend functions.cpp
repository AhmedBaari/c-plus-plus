#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    MyClass(int a) {
        x = a;
    }

    // Declare the friend function
    friend void printX(MyClass obj);
};

// Define the friend function
void printX(MyClass obj) {
    cout << "The value of x is: " << obj.x << endl;
}

int main() {
    MyClass obj(5);

    // Call the friend function
    printX(obj);

    return 0;
}
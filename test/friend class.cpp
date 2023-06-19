#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    MyClass(int a) {
        x = a;
    }

    // Declare the friend class
    friend class MyFriend;
};

class MyFriend {
public:
    void printX(MyClass obj) {
        cout << "The value of x is: " << obj.x << endl;
    }
};

int main() {
    MyClass obj(5);
    MyFriend friendObj;

    // Call the friend function
    friendObj.printX(obj);

    return 0;
}
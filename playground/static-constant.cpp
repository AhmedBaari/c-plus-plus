#include <iostream>
using namespace std;

class MyClass1
{
public:
    static int count;             // static data member
    static void incrementCount(); // static member function
};

int MyClass1::count = 0; // initialize static data member

void MyClass1::incrementCount()
{ // define static member function
    count++;
}



class MyClass2
{
public:
    const int MAX_VALUE = 100;  // constant data member
    void printMaxValue() const; // constant member function
};

void MyClass2::printMaxValue() const
{                                               // define constant member function
    cout << "Max value: " << MAX_VALUE << endl; // access constant data member
}

int main()
{
    MyClass1::incrementCount(); // call static member function
    MyClass1::incrementCount();
    cout << "Count: " << MyClass1::count << endl; // access static data member

    MyClass2 obj;
    obj.printMaxValue(); // call constant member function
    return 0;
}
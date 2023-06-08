#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
    Person() {}

    Person(string a, int b, char c) {
        name = a;
        age = b;
        gender = c;
    }

    void putData() {
        cout << name << age << gender;
    }

    virtual void getSalary() {}
};

class Manager : public Person {
    string designation;
    string location;
    double salary;

public:
    Manager() {}

    Manager(string a, int b, char c, string d, string e) : Person(a, b, c), designation(d), location(e) {}

    void putData() {
        Person::putData();
        cout << designation << location << salary;
    }

    void getSalary() {
        cin >> salary;
    }
};

int main() {
    Manager m1("Baari", 18, 'M', "Manager", "Trichy");

    m1.getSalary();
    m1.putData();
    return 0;
}


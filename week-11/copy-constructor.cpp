#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
        Person(const Person& p) {
            name = p.name;
            age = p.age;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }
};

int main () {
    Person p1("John", 35);
    Person p2(p1);
    cout << p1.getName() << ", " << p1.getAge() << endl;
}
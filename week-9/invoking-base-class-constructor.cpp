#include <iostream>
using namespace std;

class Person {
protected:
	string Name;
	int Age;
	
public:
	Person ():Name(""),Age(0) {}
	Person (string s, int i) {
		Name = s;
		Age = i;
	}
	void display_data() {
		cout << Name, Age;
	}
};

class Student:public Person {
	long RegNo;

public:
	Student ():RegNo(0){}
	Student (string s, int a, long m): Person (s,a), RegNo(m) {}
	
	void display_data() {
		cout << RegNo;
	}
};

int main () {
	Student S1;
	Student S2("Baari", 44, 126156004);
	S1.display_data();
	S1.Person::display_data();
}

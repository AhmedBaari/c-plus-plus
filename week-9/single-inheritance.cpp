#include <iostream>
using namespace std;

class Animal {
	string Name, Habitat;
	int Lifetime;
	
public:
	Animal() {
		cout << "Base Class"<< endl;
	}
	
	Animal(string N, string H, int l) {
		Name = N;
		Habitat = H;
		Lifetime = l;
	}
	
	
	void display_data() {
		cout << Name << Habitat << Lifetime;
	}
};

	class Mammals: public Animal {
		string EatingHabit;
public:
	Mammals() {
		cout << "Derived Class"<< endl;
	}
	
	Mammals (string s) {
		EatingHabit = s;
	}
	
	void display_data() {
		cout << "Eating Habit: " << EatingHabit<< endl;
	}
};

int main () {
	Mammals M1;
	Mammals M2("Herbivores");
	M2.display_data();
	M2.Animal::display_data();
}

#include <iostream>
using namespace std;

class fraction {
	double numerator, denominator;
public:
	fraction() {
		numerator = denominator = 0.0;
	}
	
	fraction(double a, double b) {
		numerator = a;
		denominator = b;
	}
	
	void getData() {
		cout << "Enter numerator and denominator: ";
		cin >> numerator >> denominator;
	}
	
	void putData() {
		cout << "Fraction = " << numerator << "/" << denominator << endl;
	}
	
	fraction operator+(fraction x) {
		fraction temp;
		temp.numerator = (numerator * x.denominator) + (denominator * x.numerator);
		
		return temp;
	}
};

int main () {
	fraction f1, f2, f3;
	
	f1.getData();
	f2.getData();
	
	f1.putData();
	f2.putData();
	
	f3 = f1 + f2;
	f3.putData();
}

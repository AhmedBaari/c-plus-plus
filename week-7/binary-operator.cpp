#include <iostream>
using namespace std;

class Distance {
	double feet, inch;
	
public:
	Distance() {
		feet = inch = 0.0;
	}
	
	Distance(double a, double b) {
		feet = a;
		inch = b;
	}
	
	void putData() {
		cout << feet << " ft " << inch << " inch" << endl;
	}
	
	Distance operator + (Distance d) {
		Distance temp;
		temp.feet = feet + d.feet;
		temp.inch = inch + d.inch;
		
		if (temp.inch >=12) {
			temp.inch=12;
			temp.feet++;
		}
		return temp;
	}
};

int main () {
	Distance d1(3,4), d2(5,9), d3;
	
	d1.putData();
	d2.putData();
	
	d3=d1+d2;
	d3.putData();
}

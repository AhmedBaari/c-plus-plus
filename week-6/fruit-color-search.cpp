/* In this program, we will enter fruit details search for fruits by their color */
#include <iostream>
using namespace std;

class fruit {
	string shape, taste;
	float rate;
	
public: 
	string color, name;
	
	void getData () {
		cout << "Enter color, name, shape, taste: ";
		cin >> color >> name >> shape >> taste;
	}
	
	void putData () {
		cout << "name: " name << "\nshape: "shape << "\ntaste: " taste << "\nrate: " << rate << endl;
	}
	
	void getRate() {
		cout << "Enter Rate: ";
		cin >> rate;
	}
	
	string return_color() {
		return color;
	}
};

main () {
	fruit f[3];
	int i;
	string search;
	
	for (i=0; i<3; i++) {
		f[i].getData();
		f[i].getRate();
	}
	
	cout << "Enter Color: ";
	cin >> search;
	
	for(i=0; i<3; i++) {
		int success = 0;
		if (search == f[i].return_color()) {
			f[i].putData();
			success = 1;
		} 
		if (success == 0) {
			cout << "no match";
		}
	}
}

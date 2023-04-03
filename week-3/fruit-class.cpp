#include <iostream>
using namespace std;

class Fruit {
	private:
		double rate;
		char taste[10], shape[15];
		void getRate() {
			cin >> rate;
		}
	
	public:
		char color[10], name[10];
		void enterData() {
			cout << "Enter name, color, shape, taste: ";
			cin >> name >> color >> shape>> taste;
		}
		void printData() {
			cout << "\nname: " << name << "\ncolor: " << color << "\nshape: " << shape << endl;
		}
};

int main() {
	Fruit F1,F2;
	//F1.getRate; getRate() is private
	cout << "Enter F1 color and F2 color: ";
	cin >> F1.color;
	cin >> F2.color;
	//cin >> F1.shape wont work as shape is private
	F1.enterData();
	F1.printData();
	cout << "F1 Data" << endl;
	cout << F1.name << F1.color;

}

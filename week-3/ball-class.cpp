#include <iostream>
using namespace std;

//Declaring a class named Ball
class Ball {
	private:
		// Private Data Members
		double radius, weight;
		char color[10], material[15];
		float price;
	
	public:
		// Public Member Functions
		void Throw() {
			cout << "Ball was thrown" << endl;
		}
		void Kick() {
			cout << "Ball was kicked" << endl;
		}
		void Catch() {
			cout << "Ball was caught" << endl;
		}
		void enterData() {
			cout << "Enter radius, weight, color, material, price: ";
			cin >>radius >> weight >> color >> material >> price;
		}
		void printData() {
			cout << "\nRadius: " << radius << "\nWeight: " << weight << "\nColor: " << color << "\nMaterial: " << material << "\nPrice: " << price << endl;
		}
};

/* Main Function */
int main() {
	Ball B1, B2;
	B1.Throw();
	B1.Kick();
	B2.Catch();
	B2.enterData();
	B2.printData();
}

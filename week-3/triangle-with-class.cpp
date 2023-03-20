#include <iostream>
using namespace std;

class triangle {
	private:
		double base, height;
	
	public:
		double area;
		void postData() {
			cout << "Enter base and height: ";
			cin >> base >> height;
		}
		void printData() {
			double area = findArea();
			cout << "\nbase: " << base << "\nheight: " << height << "\narea: " << area << endl;
		}
		double findArea() {
			return 0.5 * base * height;
		}
};

int main() {
	triangle a,b,c;
	
	/* Posting Details */
	a.postData(); b.postData(); c.postData();
	
	/* Printing Details */
	a.printData(); b.printData(); c.printData();
	
	/* Comparing Areas */
	int x = a.findArea(), y = b.findArea(), z = c.findArea();
	
	cout << (x > y ? (x>z ? "x" : "z") : (y > z ? "y" : "z")) << " is largest." << endl;

}

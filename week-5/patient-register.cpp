/* Create a Class Distance that has 2 members – Feet and Inch (double type). Add default and
parameterized constructor that sets the values of the data members accordingly. Add a member function called convert_CM() that converts the object value to centimetres and displays the result. Add a destructor function also. Write a C++ code to implement this. */

#include <iostream>
using namespace std;

class Distance {
	// Private Data members
	double feet, inch;

	// Public Member Functions
	public: 
		// Defining the data members before body, these get executed first
		Distance():feet(0.0),inch(0.0){}

		// Assigning input values to data members
		Distance(double feet1, double feet2) { 
			feet = feet1;
			inch = feet2;
		}
		
		// Converting to centimeters
		#include <cmath>

		void convert_to_cm() {
			double result = ((feet * 12) + inch) * 2.54;
			cout << result << endl;
		}
		
		// Destructor Function
		~Distance() {
			cout << "This is a destructor function\n";
		}
	}; 

// Main Function
int main() {
	Distance D1; // Uses default constructor
	Distance D2(2,3);  // Uses parameterized constructor
	D2.convert_to_cm(); // Converting to cms
}

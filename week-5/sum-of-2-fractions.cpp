/*
Create a class called Fraction 
with two private data members (double type) – Numerator and Denominator. 

Include default constructor that initializes both data members to zero; 
a 2-param constructor to set the values for the data members. 

Add a public member function addFractions() that receives two Fraction objects as arguments, finds their sum and returns the object. 

Add a member function putData() to display the data members. 

Include a destructor member function and demonstrate, when it is called. 
Write a c++ code to implement this.
*/

# include <iostream>
using namespace std;

// Creating a class of name "Fraction"
class Fraction {
	// Private Data Members
	private:
		double numerator, denominator;

	// Public Member Functions
	public:
		// Parametric Constructor
		Fraction (double n, double d) {
			// Assigning the input values to numerator and denominator
			numerator = n;
			denominator = d;
		}
		
		// Function to add 2 fractions
		Fraction addFraction (Fraction F1, Fraction F2) { // Setting Objects as args

			// Resulting Numerator
			double n = (F1.numerator * F2.denominator) + (F2.numerator * F1.denominator);
			//Resulting Denominator
			double d = F1.denominator * F2.numerator;
			
			// Creating a new object "result" of datatype "Fraction"
			Fraction result(n,d);
			return result;
		}
		
		// Display the fraction
		void displayData () {
			cout << numerator << "/" << denominator << endl;
		}
		
		//Destructor function
		~Fraction() {
			cout << "Desctructor was called: ";
			cout << numerator << "/" << denominator << endl;
		}
};

int main () {
	// Creating new objects of class "Fraction"
	Fraction F1(1,2);
	Fraction F2(3,4);
	
	// Calling the addFraction function
	Fraction sum = F1.addFraction(F1, F2);
	
	// Displaying the result
	sum.displayData();
}

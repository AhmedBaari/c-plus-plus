// Working with variables

#include <iostream>
using namespace std;

int main () {
	/* Declaring the variables. */
	int n1, n2;
	float average; // Average may have decimals

	n1 = 100; // Hardcoded

	/* Let's take user input for the second number */
	cout << "Enter a number value: ";
	cin >> n2;

	/* Calculating Average */
	average = (n1+n2)/2.0;

	/* printing out the values */
	cout << "n1 = " << n1 << endl << "n2= " << n2 << endl << "average= " << average << endl;

}

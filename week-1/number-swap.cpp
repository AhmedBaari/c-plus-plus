// In this program, we will swap 2 numbers
#include <iostream>
using namespace std;

int main () {

	/* Declaring the required variables */
	int n1, n2, temp;

	/* Taking input of first number */
	cout << "Enter first number: ";
	cin >> n1;

	/* Taking input of second number */
	cout << "Enter second number: ";
	cin >> n2;

	/* Swapping of the numbers */
	temp = n1; n1 = n2; n2 = temp;

	/* Printing the swapped numbers */
	cout << "SWAPPED NUMBERS" << endl << "n1: " << n1 << endl << "n2: " << n2 << endl;

}

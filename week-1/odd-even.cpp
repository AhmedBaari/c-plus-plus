// In this program, we will input a number to check if it is odd or even.

#include <iostream>
using namespace std;

int main () {
	int number; // Declaring the required variable

	/* Taking input of the first number */
	cout << "Enter a number: ";
	cin >> number;

	/* Checking if number returns a reminder of 0 when divided by 2 */
	if ((number %2) == 0)
		cout << "Number is even" << endl; // The remainder is 0
	else 
		cout << "Number is odd" << endl; // The remainder is 1

}

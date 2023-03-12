// In this program, we will reverse a number

#include <iostream>
using namespace std;

int main () {
	long initialNumber, finalNumber;

	/* Taking user input for initial number */
	cout << "Enter a number to reverse: ";
	cin >> initialNumber;

	int n=1, remainder;

	/* While loop to loop through each digit and thus reverse the number */
	while (initialNumber!=0) { 			
		remainder = initialNumber % 10; //The value in the last digit
		finalNumber = finalNumber * 10 + remainder; //Appending it to final number
		initialNumber = initialNumber / 10; //Removing last digit in the initial number
	}

	/* Printing the reversed number */
	cout << finalNumber;

}

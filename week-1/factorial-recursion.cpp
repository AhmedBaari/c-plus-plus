// In this program, we will perform factorial using recursion

#include <iostream>
using namespace std;

/* Function to recursively multiply the number */
long recursive_multiply(long number) {
if (number != 0) 
	return number * recursive_multiply(number - 1); // Eg: 5 * 4 * 3 * 2
else 
	return 1;
}

/* Main Function */
int main () {
int factorial_of; // The user input will be stored here

/* Taking the number by input */
cout << "Enter the number to find the factorial of: ";
cin >> factorial_of;

/* Calling the recursive multiplication function */
long answer = recursive_multiply(factorial_of);

/* Printing the answer */
cout << "The factorial of " << factorial_of << " is " << answer << endl;
}

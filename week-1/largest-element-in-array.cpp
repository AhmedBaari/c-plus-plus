// In this program, we will find the largest element in an array

#include <iostream>
using namespace std;

int main () {

	/* Declaring an array to input 5 elements */
	int exampleArray[5];

	/* Getting 5 elements by user input */
	cout << "Enter 5 numbers: ";
	cin >> exampleArray[0] >> exampleArray[1] >> exampleArray[2] >> exampleArray[3] >> exampleArray[4];

	/* Storing number of elements */
	int size = sizeof(exampleArray)/4; // Each element is 4 bytes
	int i, max = 0;

	/* Comparing max value to each element in array */
	for (i=0; i < size; i++) {
		if (exampleArray[i] > max) // If element is greater than max
			max = exampleArray[i]; // then max is updated
	}

	/* Printing the maximum value */
	cout << "The maximum element in the array is " << max << "." << endl;
}

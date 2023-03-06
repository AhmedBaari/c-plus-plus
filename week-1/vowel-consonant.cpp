// In this program, we will check if the given character is a vowel or consonant

#include <iostream>
using namespace std;

int main () {
	char alphabet; //The input will be stored in this
	char vowels[5] = {'a','e','i','o','u','A', 'E', 'I', 'O', 'U'};

	/* Collecting the alphabet from user */
	cout << "Enter an alphabet: ";
	cin >> alphabet;

	/* for loop to check if the alphabet matches any character in the vowels array */
	int i, check = 0;

	for (i=0; i<sizeof(vowels) ; i++) {
		if (alphabet == vowels[i]) { // If match found
			check = 1; // It is a vowel
			break; // The check shouldn't run anymore
		}
	}

	/* Printing out the result */
	if (check == 1)
		cout << "It is a vowel" << endl;
	else 
		cout << "It is a consonant" << endl;

}

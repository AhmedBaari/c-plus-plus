/*Raising a number ‘N’ to the power ‘P’ is the same as multiplying N by itself P times. Write
a function called power() that takes N (double) and P (int) as input, and returns the result
N*P as a double value. Use a default argument of 2 for P, so that if this argument is
omitted, the number N will be squared. Overload power() function, to work with int, long,
and float. Overload the power() function for char datatype also, which should print P times
the given character N. Write the main() program to exercise these overloaded functions
with all argument types.*/

#include <iostream>
using namespace std;

int power (int N, int P = 2) {
	int number = N;
	for (int i=1;i<P;i++) {
		N *= number;
	}
	return N;
}

double power (double N, int P = 2) {
	int number = N;
	for (int i=1;i<P;i++) {
		N *= number;
	}
	return N;
}


long power (long N, int P = 2) {
	int number = N;
	for (int i=1;i<P;i++) {
		N *= number;
	}
	return N;
}


float power (float N, int P = 2) {
	int number = N;
	for (int i=1;i<P;i++) {
		N *= number;
	}
	return N;
}



char power (char N, int P = 2) {
	for (int i=0;i<P;i++) {
		cout << N;
	}
} 

int main() {
	cout << power(8) << endl; //testing int
	cout << power(5.25,3) << endl; //testing float
	cout << power(123456,10) << endl;  //testing long
	cout << power(8.97432659249874524513123) << endl;
	cout << power('a', 5) << endl; 
}

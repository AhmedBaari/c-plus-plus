//In this program, we will find the maximum of 3 numbers

#include <iostream>
using namespace std;

/* Function to determine the maximum number among 3 numbers */
inline int largest(int n1,int n2,int n3) { // Using inline function here
int max = n1; // Assuming that n1 is the largest
if (n2 > max) max = n2; 
if (n3 > max) max = n3;

return max; // returning the max value
}

/* Main Function */
int main() {
int a,b,c;

/* Collecting user input for 3 numbers */
cout << "Enter 3 numbers seperated by space: ";
cin >> a >> b >> c;

/* Printing the largest of the 3 numbers by using largest() function */
cout << "Maximum is " << largest(a,b,c) << "." << endl;

}



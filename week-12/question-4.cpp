/* 4. Create an array of integers and find out and display the positions of the numbers which are the multiples of a given input, using pointers. */

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};

    // Define a variable to store the input
    int input = 2;

    int* ptr = numbers; // Pointer to first element of numbers array

    for (int i = 0; i < 6; i++) {
        if (*ptr % input == 0) { // Checking if the current value is a multiple
            cout << "Position " << i << " is a multiple of " << input << endl;
        }
        ptr++; // Moving the pointer
    }
}
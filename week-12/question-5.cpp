/*5. Create an array of integers and demonstrate right shift operation of data in the array, using pointers. For example, if the array is 45, 67, 78, 34, 23 after 2 right shift, the array should be 34, 23, 45, 67, 78.*/
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {45, 67, 78, 34, 23}; // using example values as given in question
    int shift = 2; // 2 right shift, for example...

    int* ptr = numbers + shift; // pointer to shifted position

    for (int i = 0; i < 5; i++) {
        // Print the value at the pointer
        cout << *ptr << endl;
        // Increment the pointer to the next element, wrapping around if necessary
        ptr = numbers + ((ptr - numbers + 1) % 5);
    }
}
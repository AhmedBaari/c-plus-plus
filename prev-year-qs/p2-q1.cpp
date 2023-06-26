/*
Design a class named, "MyStringArray" to store an array of 5 strings. Include the
following member functions to do the basic operations on array elements.
(i) Member function to read the input strings.
(ii) Member function to display all the strings.
(iii) Overload unary + operator for sorting the strings in alphabetical order.
(iv) Conversion operator for converting MyStringArray type to int type, which
should return the total number of characters in the array of strings.
Write a main() program to test the above member functions by creating an instance of
the class MyStringArray.
*/

#include <iostream>
using namespace std;
#include <string>

class MyStringArray {
    string berry[5];

public:
    void read_input_strings () {
        string input_string;
        // Starting a for loop to iterate thru 5 elements
        for (int i = 0; i < 5; i++) {
            cout << "Enter line 1: ";
            getline(cin, input_string);

            berry[i] = input_string;
        }
    }

    
};
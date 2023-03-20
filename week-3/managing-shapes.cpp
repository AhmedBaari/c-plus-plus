/*Create a class named Shape with
private data members – ShapeName(char array), NoOfDimensions(int), Side1(double),Side2(double), Side3(double) and Perimeter(double). 
Add the following member functions – 
a) getNoOfDimenstions() that takes the number of unique sides as input and updates the NoOfDimensions data member, 
b) computePerimeter() – computes the perimeter of the shape and updates the data member, 
c) getName() – that takes the name of shape as input and updates the ShapeName and 
d) printData() – that prints all the details of the invoking object. 

Write a C++ program to implement and test the above.*/

#include <iostream>
#include <cstring> // include the library for C-style strings

using namespace std;

// Define the Shape class
class Shape {
    // Private data members
    char ShapeName[50]; // array of characters to store the shape name
    int NoOfDimensions; // integer to store the number of unique sides
    double Side1, Side2, Side3; // variables to store the length of each side
    double Perimeter; // variable to store the perimeter of the shape

public:
    // Public member functions

    // Function to update the number of dimensions
    void getNoOfDimensions(int num) {
        NoOfDimensions = num; // Update the private variable
    }

    // Function to compute and update the perimeter
    void computePerimeter() {
        if (NoOfDimensions == 1) { // If there's only one unique side (i.e. it's a circle)
            Perimeter = 2 * 3.14 * Side1; // Compute the circumference
        }
        else if (NoOfDimensions == 2) { // If there are two unique sides (i.e. it's a rectangle)
            Perimeter = 2 * (Side1 + Side2); // Compute the perimeter
        }
        else if (NoOfDimensions == 3) { // If there are three unique sides (i.e. it's a triangle)
            Perimeter = Side1 + Side2 + Side3; // Compute the perimeter
        }
    }

    // Function to update the shape name
    void getName(char name[]) {
        strcpy(ShapeName, name); // Copy the C-style string into the private variable
    }

    // Function to print all the data members
    void printData() {
        cout << "Shape Name: " << ShapeName << endl; // Print the name
        cout << "No. of Dimensions: " << NoOfDimensions << endl; // Print the number of unique sides
        cout << "Side 1: " << Side1 << endl; // Print the length of the first side
        if (NoOfDimensions > 1) { // If there's more than one unique side
            cout << "Side 2: " << Side2 << endl; // Print the length of the second side
        }
        if (NoOfDimensions > 2) { // If there's more than two unique sides
            cout << "Side 3: " << Side3 << endl; // Print the length of the third side
        }
        cout << "Perimeter: " << Perimeter << endl; // Print the perimeter
    }

    // Function to set the sides
	void setSide (int a=0,int b=0,int c=0) {
		for (int i=0; i<NoOfDimensions; i++) {
			((i==0) ? Side1=a : ((i==1) ? Side2=b : Side3=c));
		}
	}
};

// Main function
int main() {
    Shape myShape; // Create an object of type Shape

    // Set the data members using member functions
    myShape.getName("Rectangle");
    myShape.getNoOfDimensions(2);
    myShape.setSide(5,6);

    // Compute the perimeter using member function
    myShape.computePerimeter();

    // Print the data members using member function
    myShape.printData();

    return 0; // End the program
}

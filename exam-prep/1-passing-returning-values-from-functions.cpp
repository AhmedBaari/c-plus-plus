#include <iostream>
using namespace std;

/* CONCEPT 
In C++, there are two types of passing values to functions: pass by value and pass by reference. There is also a third type of passing values to functions called pass by pointer, which is a variation of pass by reference. */

/* Pass by value means that a copy of the value is passed to the function. Any changes made to the value inside the function do not affect the original value outside the function.

Here is an example of a pass by value function: */

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int pass_by_value()
{
    int x = 5, y = 10;
    int result = add(x, y);
    cout << "The sum of " << x << " and " << y << " is " << result << endl;
    return 0;
}

/*
Pass by reference means that a reference to the original value is passed to the function. Any changes made to the value inside the function affect the original value outside the function.

Here is an example of a pass by reference function:
*/

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int pass_by_reference()
{
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}

/*
Pass by pointer is a variation of pass by reference where a pointer to the original value is passed to the function. Any changes made to the value inside the function affect the original value outside the function.

Here is an example of a pass by pointer function:
*/
void increment(int *ptr)
{
    (*ptr)++;
}

int pass_by_pointer()
{
    int x = 5;
    cout << "Before increment: x = " << x << endl;
    increment(&x);
    cout << "After increment: x = " << x << endl;
    return 0;
}

/*Return by value means that a copy of the value is returned from the function.

Here is an example of a return by value function:*/

int square(int x)
{
    return x * x;
}

int return_by_value()
{
    int x = 5;
    int result = square(x);
    cout << "The square of " << x << " is " << result << endl;
    return 0;
}

/*Return by reference means that a reference to the original value is returned from the function.
Here is an example of a return by reference function: */

int &max(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int return_by_reference()
{
    int x = 5, y = 10;
    int &result = max(x, y);
    cout << "The maximum of " << x << " and " << y << " is " << result << endl;
    return 0;
}

int main()
{

    pass_by_value();
    pass_by_reference();
    pass_by_pointer();
    return_by_value();
    return_by_reference();

    return 0;
}

/* Write a C++ program that calculates the area and perimeter of a rectangle using functions that demonstrate the different types of passing and returning values. Your program should have five functions: pass_by_value(), pass_by_reference(), pass_by_pointer(), return_by_value(), and return_by_reference(). Each function should calculate the area and perimeter of the rectangle using the corresponding type of passing or returning values.

You can prompt the user to enter the length and width of the rectangle in the main() function. */

double area_pass_by_value (double l,double b) {
    return l * b;
}

double area_pass_by_reference (double &l, double &b, double &area) {
    area = l * b;
}

double area_pass_by_pointer (double *l, double *b, double *area) {
    *area = (*l) * (*b);
}

double area_return_by_value (double l, double b) {
    return l * b;
}

double &area_return_by_reference (double l, double b) {
    double area = l * b;
}
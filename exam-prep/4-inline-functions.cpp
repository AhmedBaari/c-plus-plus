#include <iostream>
using namespace std;

/* In C++, an inline function is a function that is expanded in place by the compiler, rather than being called like a regular function. 

When a function is declared as `inline`, the compiler replaces each call to the function with the actual code of the function. This can improve performance by reducing the overhead of function calls. 

Here's an example of an inline function:
*/

inline double square(double x) {
    return x * x;
}

int main() {
    double y = 5.0;
    cout << "The square of " << y << " is " << square(y) << endl;
    return 0;
}

/*
In this example, the `square()` function is declared as `inline`. When the `square()` function is called in the `main()` function, the compiler replaces the call with the actual code of the function. This can improve performance by reducing the overhead of the function call. 
*/
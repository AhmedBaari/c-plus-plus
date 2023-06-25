/* In C++, default arguments are values that are automatically assigned to function parameters if no argument is provided for them. 

Here's an example of a function with default arguments: */

#include <iostream>
using namespace std;

void print_message(string message = "Hello, world!") {
    cout << message << endl;
}

int main() {
    print_message(); // prints "Hello, world!"
    print_message("Goodbye, world!"); // prints "Goodbye, world!"
    return 0;
}

/*
In this example, the `print_message()` function has a default argument of `"Hello, world!"` for the `message` parameter. If no argument is provided for `message`, the default value is used. 

When the `print_message()` function is called with no argument, it prints `"Hello, world!"`. When it is called with the argument `"Goodbye, world!"`, it prints `"Goodbye, world!"`.*/
/*a reference function is a function that returns a reference to a variable.

When a function returns a reference, it returns a reference to an existing variable rather than a copy of the variable. This allows the function to modify the original variable directly.

Here's an example of a reference function:
*/

#include <iostream>
using namespace std;

int& max(int& a, int& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 5, y = 10;
    int& result = max(x, y);
    cout << "The maximum of " << x << " and " << y << " is " << result << endl;
    result = 15;
    cout << "After modification: x = " << x << ", y = " << y << endl;
    return 0;
}

/*In this example, the max() function returns a reference to the larger of two integers a and b. The main() function calls max() and assigns the result to a reference variable result. The main() function then modifies result, which modifies the original variable x or y depending on which is larger.
*/
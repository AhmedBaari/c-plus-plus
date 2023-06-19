#include <fstream>
#include <iostream>
using namespace std;

/**
 * This program demonstrates how to write and read data to/from a file.
 * It prompts the user to enter characters until the '$' character is entered.
 * It then writes the entered characters to a file named "MyFile".
 * Finally, it reads the contents of the file and outputs them to the console.
 */
int main () {
    std::ofstream o1;
    char ch;

    o1.open("MyFile", ios::out);

    ch = getchar();

    while (ch != '$') {
        o1.put(ch);
        ch = getchar();
    }

    o1.close();

    ifstream i1;
    i1.open("MyFile", ios::in);

    while (i1) {
        //ch=i1.get(); -- gives a junk value
        i1.get(ch);
        cout << ch;
    }

    i1.close();
}
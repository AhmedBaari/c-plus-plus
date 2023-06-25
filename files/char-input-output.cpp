#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main () {
    // OUTPUT TO FILE
    ofstream o1; // o1 is an object of ofstream class
    char ch; // variable to store character

    o1.open("MyFile.txt", ios::out); // open file named MyFile in output mode

    ch = getchar(); // read character from keyboard

    while(ch!='$') { // while character is not $, continue loop
        o1.put(ch); // write character to file
        ch = getchar(); // read character from keyboard
    }

    o1.close(); // close file

    //INPUT FROM FILE
    ifstream i1; // i1 is an object of ifstream class
    char ch1; // variable to store character

    i1.open("MyFile.txt", ios::in);
    while (i1.get(ch1)) // while character is not EOF, continue loop
    { 
        while (!i1.eof()) {
            cout << ch1;
            ch1 = i1.get(); // 

        }
    }
}
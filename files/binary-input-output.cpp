/* I will be performing line input and output using binary files */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
    // OUTPUT OF USER LINES TO FILE
    // Creating a binary output file stream object
    ofstream o_file;
    string output_line;

    //open the file
    o_file.open("binary-lines", ios::out | ios::binary);

    // start loop
    while (getline(cin,output_line)) {
        // Check for terminator
        if (output_line == "")
            break;
        o_file << output_line;
        o_file.write((char *)&output_line, sizeof(output_line));
    }
}
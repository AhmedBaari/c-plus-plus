#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* I am going to take multiple line input from user and paste it in the file. Then I will be taking the contents from the file and printing them in reverse. */

int main () {
    // Declare a string, output file stream object
    string output_line;
    ofstream output_file;

    output_file.open("lines.txt", ios::out);

    output_line = "";

    while (getline(cin, output_line)) { // 🛑 IMPORTANT
        if (output_line == "")
            break;
        output_file << output_line << endl;
    }

    output_file.close();

    // Now let us get back the contents from the file
    ifstream input_file;
    input_file.open("lines.txt", ios::in);

    string in_line;
    while (!input_file.eof()) { 
        getline(input_file, in_line); // 🛑 IMPORTANT
        cout << in_line << endl;
    }

    return 0;
}
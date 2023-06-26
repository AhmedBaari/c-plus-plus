#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    ofstream characters;

    characters.open("characters.txt", ios::out|ios::binary);

    string input;

    cout << "Enter a string: ";

    //cin >> input;
    getline(cin, input);
    while (input != "`")
    {
        //characters << input;
        characters.write((char *)&input, sizeof(input));
        cout << "Enter a character: ";
        //cin >> input;
        getline(cin, input);
    }

    characters.close(); // close the file before reopening it for reading

    ifstream chararray("characters.txt", ios::in);

    chararray.seekg(0, ios::beg); // set the file pointer to the beginning of the file ‼️‼️‼️‼️


    while (chararray.read((char *)&input, sizeof(input)))
    {
        cout << input << endl;
    }

    chararray.close(); // close the file after reading from it

    return 0;
}
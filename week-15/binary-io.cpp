#include <fstream>
#include <iostream>
using namespace std;

int main () {
    ofstream o1;

    o1.open("char.txt", ios::out | ios::binary);

    char ch;

    ch = getchar(); // get character from user

    while (ch != '*') {
        o1.write((char *)&ch, sizeof(ch));

        ch = getchar();
    }

    o1.close();

    ifstream i1;
    
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class student
{
    string name;
    long regno;

public:
    student() : name("") {}
    student(string name, long regno) : name(name), regno(regno) {}

    void getData()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter regno: ";
        cin >> regno;
        cin.ignore(); // discard the newline character
    }

    void putData()
    {
        cout << "Name: " << name << endl;
        cout << "Regno: " << regno << endl;
    }
};

int main()
{

    student osec[3];
    for (int i = 0; i < 3; i++)
    {
        osec[i].getData();
    }

    ofstream studentfile("students", ios::out | ios::binary);

    for (int i = 0; i < 3; i++)
    {
        studentfile.write((char *)&osec[i], sizeof(osec[i]));
    }

    studentfile.close();


    ifstream studentdir("students", ios::in | ios::binary);
    student x;
    studentdir.seekg(0, ios::beg);

    while(studentdir.read((char *)&x, sizeof(x))) {
        x.putData();
    }

    return 0;
}
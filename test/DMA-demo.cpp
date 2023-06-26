#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* New Syntax:  new int
                    new float */
    int a = 5;
    int *b = new int;
    float c[5];
    float *d = new float[5];
    string *name = new string;
    *name = "Aswini Hemalatha";
    cout << *name << endl;
    delete name;

   
}
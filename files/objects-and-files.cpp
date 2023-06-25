#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Point
{
    static int count; // 🛑 learn static and constants
    double x, y;

public:
    Point() {}
    Point(double x, double y) : x(x), y(y)
    {
        count++;
    }

    void dispcount()
    {
        cout << count;
    }

    void disp()
    {
        cout << x << y;
    }
};
int Point::count = 0;

int main()
{
    Point P[5];

    int i;
    double a, b;

    // Get the coordinates for each point
    for (i = 0; i < 5; i++ ) {
        cout << "Enter coordinates for " << i + i << ": ";
        cin >> a >> b;
        P[i] = Point(a, b);
    }

    // Output file object
    ofstream P1;

    // Open the file to be written to
    P1.open("points", ios::out | ios::binary);

    // Write the points to the file
    for (i = 0; i < 5; i++) {
        P1.write((char *)&P[i], sizeof(Point));
    }

    // Close the file
    P1.close();


    // LET US READ THE FILES NOW
    ifstream I1;
    Point my_point;

    // Open the file to be read from
    I1.open("points", ios::in | ios::binary);

    
    while(!I1.eof()) {
        I1.read((char *)&my_point, sizeof(my_point));
        my_point.disp();
        my_point.dispcount();
    }

    //close the file
    I1.close();
}
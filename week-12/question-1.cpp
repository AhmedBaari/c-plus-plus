/* Create a class named Distance with one protected member Type (int).

Set the value of Type as 1 for Meter class and 2 for Feet class.

Create two subclasses Meter and Feet from Distance in public manner.

Include data members Mtr and Cm in Meter class and Ft and Inch in Feet class.

All data members are of double type.

Include conversion constructors in both the classes and demonstrate the conversion of one data type to other by creating objects in the main function and with appropriate conversion call statements.
*/

#include <iostream>
#include <cmath>
using namespace std;

/* Create a class named Distance with one protected member Type (int). */
class Distance {
protected:
    int Type;
};

/* Create two subclasses Meter and Feet from Distance in public manner.
Include data members Mtr and Cm in Meter class and Ft and Inch in Feet class. 
All data members are of double type. */
class Meter : public Distance {
protected:
    double Mtr;
    double Cm;

public:
    Meter() : Mtr(0), Cm(0) {
        Type = 1; // Set the value of Type as 1 for Meter class
    }

    Meter(double in_mtr, double in_cm) : Mtr(in_mtr), Cm(in_cm) {
        Type = 1;
    }

    /* Include conversion constructors in both the classes */
    Meter(class Feet& imperial);

    double getMtr() { return Mtr; }
    double getCm() { return Cm; }

    void display() {
        cout << Mtr << "m " << Cm << "cm." << endl;
    }
};

class Feet : public Distance {
protected:
    double Ft;
    double Inch;

public:
    Feet() : Ft(0), Inch(0) {
        Type = 2; // Set the value of Type as 2 for Feet class.
    }

    Feet(double in_ft, double in_inch) : Ft(in_ft), Inch(in_inch) {
        Type = 2;
    }


    void display() {
        cout << Ft << "ft " << Inch << "in." << endl;
    }

    double getFt() { return Ft; }
    double getInch() { return Inch; }
   
   /* Include conversion constructors in both the classes */
    Feet(class Meter& metric) {
    double total_cm = (metric.getMtr() * 100) + metric.getCm();
    double total_inch = total_cm * 2.54;

    Ft = total_inch / 12;
    Inch = fmod(total_inch, 12);

    Type = 2;
}
};

Meter::Meter(class Feet& imperial) {
    double total_inch = (imperial.getFt() * 12) + imperial.getInch();
    double total_cm = total_inch / 2.54;

    Mtr = total_cm / 100;
    Cm = fmod(total_cm, 100);

    Type = 1;
}

/* demonstrate the conversion of one data type to other by creating objects in the main function and with appropriate conversion call statements. */
main() {

    // Creating a Metric Object
    Meter m1(30, 28);
    m1.display();

    // Creating an Imperial object
    Feet f1(25, 6);
    f1.display();

    // Converting Metric to Imperial object
    Feet f2(m1);
    f2.display();

    // Converting Imperial to Metric Object
    Meter m2(f1);
    m2.display();

    // Using conversion operator
    f2 = m2;
    f2.display();

}

// Basic data will be converted into object

/* We know that a constructor produces an object, so let us create a constructor to do this */

# define MTF 3.28
# include <iostream>
using namespace std;

// We will create a class Distance and use a conversion constructor to convert meter to feet

class Distance
{
    double feet, inch;

public:
    Distance()
    {
        feet = 0.0;
        inch = 0.0;
    }

    Distance (double f, double i) {
        feet = f;
        inch = i;
    }

    void display_data()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inch: " << inch << endl;
    }

    Distance (double d) {
        double tot = d*3.28; // Metre to feet
        feet = int(tot); // Getting the integer part, that is the feet
        inch = (tot - feet)*12; // Converting decimal part into inch
    }
};


// Now let us test the basic to user defined conversion

main () {
    Distance d1;
    Distance d2 (3.0, 6.0);

    d1.display_data();
    d2.display_data();

    // Calling the conversion constructor
    double m1 = 51.63; //meters
    Distance d3(m1);
    cout << "-- d3 (calling conversion constructor) --"  << endl;
    d3.display_data();

    // Trying the conversion constructor using an operator
    d1 = 5.3; 
    d2 = 7.1; // This means that the conversion constructor can be used even after initializing

    cout << "-- d2 (d2 = 7.1) --"  << endl;
    d2.display_data();

    Distance d4 = 5.8; // We can declare and initialize this way too 

    cout << "-- d1 (initial) --"  << endl;
    d1.display_data();

    d4 = d1; // Will work as usual

    cout << "-- d4 (d4 = d1) --" << endl;
    d4.display_data(); 

}
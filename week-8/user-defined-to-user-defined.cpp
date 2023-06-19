#include <iostream>
using namespace std;

class IMPERIAL;
class METRIC {
    double mtr, cms;

public:
    METRIC() : mtr(0), cms(0) {}

    METRIC(double m, double c) : mtr(m), cms(c) {}

    void display_data()
    {
        cout << "Displaying details of object" << endl;
        cout << "--> Height: " << mtr << " m" << endl;
        cout << "--> Weight: " << cms << " kg" << endl;
    }

    METRIC (IMPERIAL OBJ) {
        double total = OBJ.getFeet() * 30.48 + OBJ.getInches() * 2.54;
        mtr = total / 100;    
    }
    operator IMPERIAL(){
        // Convert meters to feet
        double total = mtr * 100 + cms;
        double feet = total / 30.48;

        // Calculate inches
        double inches = (total / 2.54) - (feet * 12);

        // Check for rounding error
        double inch_check = (total % 30.48) / 2.5;

        // Return the result
        return IMPERIAL(feet, inches);
    };
};

class IMPERIAL {
    double feet, inches;

public: 
    IMPERIAL() : feet(0), inches(0) {}
    
    IMPERIAL(double f, double i) : feet(f), inches(i) {}

    void display_data()
    {
        cout << "Displaying details of object" << endl;
        cout << "--> Height: " << feet << " ft" << endl;
        cout << "--> Weight: " << inches << " in" << endl;
    }

    double getFeet() {
        return feet;
    }

    double getInches() {
        return inches;
    }
};

main () {
    METRIC m1;
    METRIC m2(2.3, 4.5);

    IMPERIAL i1(23, 4);
    METRIC m3(i1);

    m3.display_data();
}
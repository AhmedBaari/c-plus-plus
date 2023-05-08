// In this program, we will create a class PARAM to convert input data to BMI

#include <iostream>
using namespace std;e3

class PARAM
{
    double height, weight, BMI;

public:
    PARAM() : height(0), weight(0), BMI(0) {}

    PARAM(double h, double w) : height(h), weight(w), BMI(0) {}

    void display_data()
    {
        cout << "Displaying details of object" << endl;
        cout << "--> Height: " << height << endl;
        cout << "--> Weight: " << weight << endl;
        cout << "--> BMI: " << BMI << endl;
    }

    operator double()
    {
        double temp_height = height/100;                    // Converting height from cm to m
        return weight / (temp_height * temp_height); // returning BMI = weight / height^2
    }
};

int main()
{
    PARAM P1(183, 85);
    P1.display_data();

   double BMI = (double)P1;

    double d1 = PARAM(152.3, 56.5);
    double d2 =0;
    d2= (double)P1; // doubt

    cout << "BMI: " << BMI << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
}
/* Create a class called Flight with protected data members – CompanyName (string), FlightNumber
(string), SeatingCapacity (int), Fromcity (string), and ToCity (string). Include the following public member functions – getInput() to take the input for CompanyName, FlightNumber, SeatingCapacity, Fromcity and ToCity, and printDetails() to print all the details. Derive a class called Domestic that has a data member - RatePerPerson (double). Include parameterized constructor to set value for RatePerPerson and also invoke the base class constructor. Include member function printDetails()
that invokes its base class version and also prints its own data member details. Derive another class called International which has a public member function printDetails() that invokes its base class version. Derive both classes from Flight in public manner. Use base class pointer to invoke the appropriate member function of the derived classes. In main(), create objects of both base and derived classes and demonstrate the use of virtual functions.*/

#include <iostream>
#include <string>
using namespace std;

class Flight {
protected:
    string CompanyName;
    string FlightNumber;
    int SeatingCapacity;
    string Fromcity;
    string ToCity;

public:
    void getInput() {
        cout << "Enter Company Name: ";
        cin >> CompanyName;
        cout << "Enter Flight Number: ";
        cin >> FlightNumber;
        cout << "Enter Seating Capacity: ";
        cin >> SeatingCapacity;
        cout << "Enter From City: ";
        cin >> Fromcity;
        cout << "Enter To City: ";
        cin >> ToCity;
    }

    virtual void printDetails() {
        cout << "Company Name: " << CompanyName << endl;
        cout << "Flight Number: " << FlightNumber << endl;
        cout << "Seating Capacity: " << SeatingCapacity << endl;
        cout << "From City: " << Fromcity << endl;
        cout << "To City: " << ToCity << endl;
    }
};

class Domestic : public Flight {
private:
    double RatePerPerson;

public:
    Domestic(double rate) {
        RatePerPerson = rate;
    }

    void printDetails() override {
        Flight::printDetails();
        cout << "Rate Per Person: " << RatePerPerson << endl;
    }
};

class International : public Flight {
public:
    void printDetails() override {
        Flight::printDetails();
    }
};

int main() {
    Flight* flightPtr;
    Flight flightObj;
    Domestic domesticObj(100.0);
    International internationalObj;

    cout << "Flight Details:" << endl;
    flightPtr = &flightObj;
    flightPtr->getInput();
    flightPtr->printDetails();

    cout << endl << "Domestic Flight Details:" << endl;
    flightPtr = &domesticObj;
    flightPtr->getInput();
    flightPtr->printDetails();

    cout << endl << "International Flight Details:" << endl;
    flightPtr = &internationalObj;
    flightPtr->getInput();
    flightPtr->printDetails();

    return 0;
}
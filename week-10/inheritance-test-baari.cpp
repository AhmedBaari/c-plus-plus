/*
3. Define a base class called Insurance with members of policy_no, policy holder name, age, address
and sum assured. 
*/


#include <iostream>
using namespace std;

// Defining a base class Insurance
class Insurance {
    protected:
        int policy_no, age, sum_assured;
        string policy_holder_name, address;
    
    Insurance(int policy_no, int age, int sum_assured, string policy_holder_name) {
        cout << "Enter Address: ";
        cin >> address;
    }

    //printing all members 
    public:
    void print_info() {
        cout << "Policy No: " << policy_no << endl;
        cout << "Age: " << age << endl;
        cout << "Sum Assured: " << sum_assured << endl;
        cout << "Policy Holder Name: " << policy_holder_name << endl;
    }
};

/*
Then define two derived classes as Life and General The life class has a member
for Premium mode- annual/semi-annual/quarterly/monthly, Nominee and policy term(no. of
years). The General class should include Vehicle no, vehicle type( car/two wheeler/bus) and cubic
capacity(cc). Implement appropriate member functions to input and display values.
*/

class Life:public Insurance {
protected:
    int premium_mode, policy_term;
    string Nominee;

public:
    // Default Constructor
    Life():Insurance(0, 0, 0, ""){}
    Life(int policy_no, int age, int sum_assured, string policy_holder_name,  int policy_term, string Nominee, int premium_mode):Insurance( policy_no,  age,  sum_assured,  policy_holder_name),premium_mode(premium_mode), policy_term(policy_term), Nominee(Nominee){}

    void print_info() {
        Insurance::print_info();
        cout << "Premium Mode: " << premium_mode << endl;
        cout << "Policy Term: " << policy_term << endl;
        cout << "Nominee: " << Nominee << endl;
    }
};

class General:public Insurance {
protected:
    int vehicle_no, cubic_capacity;
    string vehicle_type;

public:
    // Default Constructor
    General():Insurance(0, 0, 0, ""){}
    
        General(int policy_no, int age, int sum_assured, string policy_holder_name,  int vehicle_no, string vehicle_type, int cubic_capacity):Insurance( policy_no,  age,  sum_assured,  policy_holder_name),vehicle_no(vehicle_no), cubic_capacity(cubic_capacity), vehicle_type(vehicle_type){}

    void print_info() {
        Insurance::print_info();
        cout << "Vehicle No: " << vehicle_no << endl;
        cout << "Vehicle Type: " << vehicle_type << endl;
        cout << "Cubic Capacity: " << cubic_capacity << endl;
    }
};

int main (){
    cout << "Hello World";

    //Invoking Life constructor
    Life L1(1, 2, 3, "Baari", 4, "Nominee", 5);

    //Invoking General constructor
    General G1(1, 2, 3, "Baari", 4, "Car", 5);

    //Invoking print_info() of Life
    L1.print_info();

    //Invoking print_info() of General
    G1.print_info();

    return 0;
}
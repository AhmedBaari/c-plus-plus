#include <iostream>
#include <cstring>
using namespace std;

class ACCOUNT {
    int AccNo;
    string Name;
    double Balance;

public:
    ACCOUNT(){}
    ACCOUNT(int AccNo, string Name):AccNo(AccNo),Name(Name), Balance(1000) {}


    void deposit(double input) {
        Balance += input;
    }

    void debit(double input) {
        if (input > Balance) {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayData() {
        cout << "Account No: " << AccNo << endl;
        cout << "Name: " << Name << endl;
        cout << "Balance: " << Balance << endl;
    }
};

int main () {
    ACCOUNT *myAccounts[3];

    for (int i = 0; i < 3; i++) {
        myAccounts[i] = new ACCOUNT(i, "Account " + i);
    }

    myAccounts[1]->deposit(1000);
    myAccounts[1]->debit(2000);
    myAccounts[1]->displayData();
}
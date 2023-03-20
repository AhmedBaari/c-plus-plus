/*
        ABCD STORES
S.NO. ITEM QTY RATE AMOUNT
1   A    10   100   1000
2   B    20   200   4000
3   C    30   300   9000
4   D    40   400  16000
5   E    50   500  25000
_________________________
TOTAL   150        45000
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string item[5];     // array to store item names
    int qty[5];         // array to store quantity of each item
    float rate[5];      // array to store rate of each item
    float amount[5];    // array to store amount of each item
    float total = 0;    // variable to store total amount
    
    // take input from user
    for(int i=0; i<4; i++)
    {
        cout << "Enter item name, quantity and rate for item: " << i+1 << ": ";
        cin >> item[i] >> qty[i] >> rate[i];

        
        // calculate amount and add to total
        amount[i] = qty[i] * rate[i];
        total += amount[i];
    }
    
    // display output
    cout << endl;
    cout << setw(5) << "S.NO." << setw(5) << "ITEM" << setw(5) << "QTY" << setw(8) << "RATE" << setw(8) << "AMOUNT" << endl;
    cout << setw(5) << "-----" << setw(5) << "----" << setw(5) << "---" << setw(8) << "----" << setw(8) << "------" << endl;
    for(int i=0; i<4; i++)
    {
        cout << setw(5) << i+1 << setw(5) << item[i] << setw(5) << qty[i] << setw(8) << rate[i] << setw(8) << amount[i] << endl;
    }
    cout << setw(21) << "TOTAL" << setw(20) << total << endl;
    
    return 0;
}

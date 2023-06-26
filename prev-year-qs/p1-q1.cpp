/*In the heyday of the British empire, Great Britain used a monetary system based on
pounds, shillings, and pence. There were 20 shillings to a pound, and 12 pence to a
shilling. The notation for this old system used the pound sign, E, and two decimal points,
so that, for example, E5.2.8 meant 5 pounds, 2 shillings, and 8 pence. (Pence is the
plural of penny.) The new monetary system, introduced in the 1950s, consists of only
pounds and pence, with 100 pence to a pound (like U.S. dollars and cents). We'll call
this new system decimal pounds. Thus E5.2.8 in the old notation is E5.13 in decimal
pounds (actually É5.1333333).
Create a class OldPound with three attributes for pounds, shillings and pence.
Add operator overloading function for converting OldPound object into float type which
is the decimal pound equivalent.
An example of the user's interaction with the program would be
Enter pounds: 7
Enter shillings: 17
Enter pence: 9
Decimal pounds = 7.89
Hint: Conversion logic has to be derived from the numerical example given in the
question.*/

// 1 pound = 20 shillings
// 1 shilling = 12 pence
// E5.2.8 -- 5 pounds, 2 shillings, 8 pence


// 100 pence = 1 pound
// E5.2.8 old is E5.13 in decimal pounds

class OldPound {
    int pounds, shillings, pence;

public:
    float operator = (OldPound O1) {
        return ((O1.pence / (12 * 20)) + (O1.shillings / 20) + O1.pounds);
    }
};
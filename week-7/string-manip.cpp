#include <iostream>
#include <string> // include the string header

using namespace std;

int main() {
    string str, s2; // declare two string variables
    int pos = -1; 
    int a = -1; 
    int j; 

    // prompt user to input a string and read it into variable str
    cout << "Enter a string: ";
    getline(cin, str);

    s2 = str; // copy the content of str into s2
    int count = 0; 

    // loop through the string and count the number of vowels
    while (true) {
        pos = str.find_first_of("AEIOUaeiou"); // find the position of the next vowel

        if (pos == -1) break; // exit the loop if no vowel is found

        str = str.substr(pos + 1); // remove the characters before the vowel
        count++; // increment the count of vowels
    }

    cout << "Number of vowels: " << count << endl;

    // prompt user to input a string to search for a substring
    cout << "Enter a string to check: ";
    getline(cin, str);

    string substr = "the";
    int p = 0; 

    // loop through the string and find the positions of the substring "the"
    while ((p = str.find(substr, p)) != string::npos) {
        cout << "Substring found at position " << p << endl;
	p++;
    }

	cout << "Enter string for erase: ";
   string s5;
	getline(cin, s5);

    string sub;
	cout << "Enter erase query: "; 
    getline(cin, sub); // prompt user to input a string and read it into sub
    int po = 0; 

    // loop through the string s5 and erase the substring specified by sub
    while ((po = s5.find(sub, po)) != string::npos) {
        s5.erase(po, sub.length());
    }

    // output the modified string s5
    cout << "The erased string is: " << s5 << endl;

    return 0; // exit the program
}


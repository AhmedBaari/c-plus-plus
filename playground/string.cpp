#include <iostream>
#include <string>
using namespace std;

int main () {
    /* We are going to explore all methods of String Class */

    string s1, s2, s3 = "Baari";
    s1 = "Hello World";
    cout << "Initial: " << s1 << endl;

    // METHODS
    // 1) push_back()
    s1.push_back('r');
    cout << "Pushed Back 'r': "<< s1 << endl;

    // 2) push_back()
    s1.pop_back();
    cout << "Popped Back: "<< s1 << endl;

    // CAPACITY FUNCTIONS
    cout << "Capacity: " << s1.capacity() << endl;
    s1.resize(3);
    cout << "Resized To Size : " << s1.size() << endl;

    /* ELEMENT ACCESS */

    // Create a string object called "s"
    string s = "Hello, world!";

    // Use the at() function to access the character at index 7
    cout << "Character at index 7: " << s.at(7) << endl;

    // Use the back() function to access the last character in the string
    cout << "Last character: " << s.back() << endl;

    // Use the front() function to access the first character in the string
    cout << "First character: " << s.front() << endl;

    // Use the += operator to append a string to the end of "s"
    s += " How are you?";
    cout << "Appended string: " << s << endl;

    // Use the append() function to append a string to the end of "s"
    s.append(" I'm fine, thank you.");
    cout << "Appended string: " << s << endl;

    // Use the assign() function to replace the contents of "s" with a new string
    s.assign("Goodbye, world!");
    cout << "New string: " << s << endl;

    // Use the insert() function to insert a string into "s" at a specific position
    s.insert(8, "cruel ");
    cout << "Inserted string: " << s << endl;

    // Use the erase() function to remove a portion of "s" starting at a specific position
    s.erase(8, 6);
    cout << "Erased string: " << s << endl;

    // Use the replace() function to replace a portion of "s" with a new string
    s.replace(0, 7, "Hello, my name is");
    cout << "Replaced string: " << s << endl;

    // Use the substr() function to extract a substring from "s"
    string sub = s.substr(17, 5);
    cout << "Substring: " << sub << endl;


    /* Search Functions*/
    // Find an occurrence of 'e' within'str'. If found returns its location (index
    string str = "SASTRA Deemed University";
    int pos = str.find('e');
    if (pos!= -1){
    }
    return 0;

    // Find first of
    // Find first of any of the characters in 'str2' in 'str1'. If found returns its location (index)
    string str1 = "SASTRA Deemed University";
    string str2 = "aeiou";
    int pos = str1.find_first_of(str2);

    // Find last of
    // Find last of any of the characters in 'str2' in 'str1'. If found returns its location (index)
    string str1 = "SASTRA Deemed University";
    string str2 = "aeiou";
    int pos = str1.find_last_of(str2);

    // Find first not of
    // Find first not of any of the characters in 'str2' in 'str1'. If found returns its location (index)
    string str1 = "SASTRA Deemed University";
    string str2 = "aeiou";
    int pos = str1.find_first_not_of(str2);

    //compare
    // Compare two strings
    string str1 = "SASTRA Deemed University";
    string str2 = "SASTRA Deemed University";
    int result = str1.compare(str2);
    if (result == 0)
        cout << "Strings are equal" << endl;
    else if (result < 0)
        cout << "String 1 is less than string 2" << endl;
    else
        cout << "String 1 is greater than string 2" << endl;
}

/* 3. Create an array of pointers to strings to store your friends’ names and populate the array.
Include the following functions:
a. Longest() – pass the pointer to array as argument and find out the longest name and display its length
b. Sorted() – display the names in the increasing order of length
c. checkNames() – display the names that does not contain the given set of characters.
Make appropriate calls to the functions in the main method and demonstrate them. */

#include <iostream>
#include <string>
using namespace std;

/* Create an array of pointers to strings to store your friends’ names and populate the array. */
string* friends[5] = {
    new string("Baari"),
    new string("Vaibhav"),
    new string("Manas"),
    new string("Raghav"),
    new string("Lisa")
};

/* a. Longest() – pass the pointer to array as argument and find out the longest name and display its length */ 
void Longest(string* friends[]) { // Array of pointers to strings
    int longest = 0; // Length of longest name 
    string* longest_name = friends[0]; // Assuming first element as longest

    for (int i = 0; i < 5; i++) {
        int length = (*friends[i]).length(); // length of the i'th name
        if (length > longest) { // If current name is longer than longest
            longest = length; // Replace longest length with current length
            longest_name = friends[i]; // Replace longest name with current name
        }
    }
    cout << "Longest name is " << *longest_name << " with length " << longest << endl;
}

/* b. Sorted() – display the names in the increasing order of length */ 
void Sorted(string* friends[]) {
    cout << "Sorted names: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *friends[i] << endl;
    }
}

/* c. checkNames() – display the names that does not contain the given set of characters. */
void checkNames(string* friends[], string characters) {
    cout << "Names that does not contain the given set of characters: " << endl;
    for (int i = 0; i < 5; i++) { 
        // If the name does not contain the given set of characters
        // (find returns the "npos" of the string, which is not equal to length of actual name)
        if ((*friends[i]).find(characters) == (*friends[i]).length()) {
        // Print the name
         cout << *friends[i] << endl;
}
    }
}

int main() {
    Longest(friends);
    Sorted(friends);
    checkNames(friends, "s");
}
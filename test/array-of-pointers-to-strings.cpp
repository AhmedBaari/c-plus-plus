#include <iostream>
#include <cstring>
using namespace std;

//emulating string concatenation using pointers
void strconcat(char* a, const char* b) {
    // Iterate through string a until the end is reached
    while (*a != '\0') {
        a++;
    }

    // Iterate through string b until the end is reached
    while (*b != '\0') {
        // Copy the current character from string b to string a
        *a = *b;

        // Increment the pointer for string a and string b
        a++;
        b++;
    }

    // Terminate the string with a null character
    *a = '\0';
}

int main() {
    int i, j;
    char* ptr;

    const char* names[3] = {"hello", "world", "baari"};

    //Printing the contents 
    for (i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    //finding the length of each string using the pointer
    for (i = 0; i < 3; i++) {
        ptr = const_cast<char*>(names[i]);
        j = 0;
        while (*ptr) {
            j++;
            ptr++;
        }
        cout << "Length of " << names[i] << " is " << j << endl;
    }

    // Concatenate two strings using the strconcat function
    char str1[20] = "Hello, ";
    const char* str2 = "world!";
    strconcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
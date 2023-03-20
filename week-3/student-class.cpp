/* Create a class named 'Student' with Name, RollNo and PhoneNo as private data members. Include member functions getData() and putData() to input and print all details of the objects, respectively. Add a member function checkName() that accepts a name as input, checks if the name matches with the object Name. If yes, it prints all the details of the object with putData() function. Else, it prints
the message “Names do not match”. Write a c++ code to implement this. */

#include <cstring>
#include <iostream>
using namespace std;


/* Initializing a class named Student */
class Student {
  /* Private Members 
  In this case, all data members */
  char Name[30];
  int RollNo;
  long PhoneNo;

  /* Public Members
  In this case, all member functions */
  public:

    /* Function to insert data into the object */
    void getData(void) {
      cout << "Enter Name:";
      cin.getline(Name, 30);
      cout << endl << "Enter Roll Number and Phone number, seperated by whitespace: ";
      cin >> RollNo >> PhoneNo;
    }

    /* Function to print data from the object */
    void putData(void) {
      cout << "Student Details" << endl << "Name: " << Name << endl << "RollNo: " << RollNo << endl << "PhoneNo: " << PhoneNo << endl;
    }

    /* Function to check the name */
    void CheckName(char name[30]) {
      if (strcmp(Name, name) == 0) putData();
      else cout << "Names do not match" << endl;
    }

};

int main () {
  /* Initializing an object of datatype "Student" */
  Student S1;

  /* Entering all the details */
  S1.getData();

  /* Printing all the details */
  S1.putData();

  /* Searching Name */
  char searchName[30];
  cin.ignore();
  cout << "Enter the name to search: "; 
  cin.getline(searchName,30); // Getting user input
  S1.CheckName(searchName); // Calling the CheckName member function of Student
  
}

/*
2. Create a class Student with protected data members – Name(string), RegNo(long) and
Branch(string). Include a display() member function to print the data members. Derive Exam
class from Student as protected. Exam class has the protected data members – mark[6] (int
array) and total (int). Include member function getmarks() to populate the mark array and
compute and update the total data member. Sum of all 6 marks is to be stored in total.
Include a display() member function to print the data members Derive Result class from
Exam in private manner. Result class has one data member Grade (string). Include
computeGrade() member function that will update the Grade member based on total as
follows: total - Grade
>=90% S
>=85% AND <90 A+
>=75 AND <85 A
>=65 AND <75 B
>=55 AND <65 C
>=50 AND <55 D
ELSE FAIL

If the student has scored less than 50 in any of the subjects, the grade is FAIL. Else, compute
the grade as above. Create appropriate object in main method, invoke the required member
function and demonstrate the implementation.
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/* Create a class Student with protected data members – Name(string), RegNo(long) and
Branch(string). Include a display() member function to print the data members. */
class Student {
protected:
    string Name;
    long RegNo;
    string Branch;

public:
    Student() {
        cout << "Enter Name: ";
        getline(cin, Name);

        cout << "Enter RegNo: ";
        cin >> RegNo;

        cout << "Enter Branch: ";
        cin.ignore(); // ignore the newline character left in the input stream
        getline(cin, Branch);
    }

    void display() {
        cout << "Student Information\nName: " << Name.c_str() << "\nRegister No: " << RegNo << "\nBranch: " << Branch << endl;
    }
};

/* Derive Exam class from Student as protected.
Exam class has the protected data members – mark[6] (int array) and total (int).
Include member function getmarks() to populate the mark array and compute and update the total data member.
Sum of all 6 marks is to be stored in total.
Include a display() member function to print the data members. */
class Exam : public Student {
protected:
    int mark[6];
    int total;

public:
    Exam() : total(0) {getmarks();}
    void getmarks() {
        int i, total;
        total = 0;
        for (i = 0; i < 6; i++) {
            int temp_mark = 0;
            cout << "Enter mark for subject " << i + 1 << ": ";
            cin >> temp_mark;

            mark[i] = temp_mark;
            total += temp_mark;
        }
    }

    void display() {
        Student::display();
        cout << "Marks: ";
        int i;
        for (i = 0; i < 6; i++) {
            cout << mark[i] << " ";
        }
        cout << endl
             << "Total: " << total << endl;
    }
};

/*
 Derive Result class from Exam in private manner.
 Result class has one data member Grade (string).
 Include computeGrade() member function that will update the Grade member based on total as
follows:
total - Grade
>=90%  S
>=85% AND <90  A+
>=75 AND <85   A
>=65 AND <75   B
>=55 AND <65   C
>=50 AND <55   D
ELSE FAIL

If the student has scored less than 50 in any of the subjects, the grade is FAIL. Else, compute
the grade as above.
*/

class Result : private Exam {
protected:
    string Grade;

public:
    Result():Grade(""){}

    string gradeChecker(int grade) {
        if (grade >= 90)
            return "S";
        else if (grade >= 85 && grade < 90)
            return "A+";
        else if (grade >= 75 && grade < 85)
            return "A";
        else if (grade >= 65 && grade < 75)
            return "B";
        else if (grade >= 55 && grade < 65)
            return "C";
        else if (grade >= 50 && grade < 55)
            return "D";
        else
            return "F";
    }

    string computeGrade() {
        int i;
        for (i = 0; i < 6; i++) {
            if (gradeChecker(mark[i]) == "F")
                return "FAIL";
        }
        return gradeChecker(total / 6);
    }

    void display() {
        Exam::display();
        cout << "RESULT: " << computeGrade() << endl;
    }
};

/* Create appropriate object in main method, invoke the required member
function and demonstrate the implementation. */
int main() {
    Result R1; // Note: The default constructor of base class will record student info
    R1.computeGrade(); // Get marks and compute grade
    R1.display(); // Display student data, marks and result (invoking base class member functions)
}

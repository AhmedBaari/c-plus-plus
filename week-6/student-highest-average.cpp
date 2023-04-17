/* In this program, we will take student details and their marks. Then, we will find out which student scored the highest average. */

#include <iostream>
#include <cstring>

using namespace std;

class student
{
    char name[20], branch[20];
    long regno;
    int marks[3];
    double average;

public:
    student() {
        average = 0.0;

        for(int i = 0; i < 3; i++) {
            marks[i] = 0;
        }
    }

    student(char n[], char b[], long r) {
        strcpy(name, n);
        strcpy(branch, b);
        regno = r;
    }

    void get_marks() {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            cout << "Enter mark of subject " << i+1 << ": ";
            cin >> marks[i];
            sum += marks[i];
        }
        average = (double)sum / 3;
    }

    void putData() {
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Regno: " << regno << endl;
        cout << "Marks: ";
        for(int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Average: " << average << endl;
    }

    student highest(student x, student y) {
        if(x.average > y.average) {
            return x;
        } else {
            return y;
        }
    }

    student highest(student a) {
        if(average > a.average) {
            return *this; // return this;
        } else {
            return a;
        }
    }
    
};

int main() {
    char name[20], branch[20];
    long regno;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter branch: ";
    cin >> branch;
    cout << "Enter regno: ";
    cin >> regno;

    student s1(name, branch, regno);
    s1.get_marks();

    student s2("Test", "Mechanical", 126156000);
    s2.get_marks();

    student s3 = s1.highest(s1,s2);

    student s4 = s1.highest(s2);

    s3.putData();
    s4.putData();

}
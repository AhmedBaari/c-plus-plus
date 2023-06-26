#include <iostream>
#include <cstring>
using namespace std;

class PATIENT {
private:
    int PatientId;
    char Name[50];
    int Age;
    char Gender;
    char NatureOfSickness[100];
    char DoctorName[50];
public:
    PATIENT(int id, char name[], int age, char gender) {
        PatientId = id;
        strcpy(Name, name);
        Age = age;
        Gender = gender;
    }
    void sicknessDetail(char sickness[], char doctor[]) {
        strcpy(NatureOfSickness, sickness);
        strcpy(DoctorName, doctor);
    }
    void findPatient(char name[]) {
        if (strcmp(Name, name) == 0) {
            cout << "Patient found!" << endl;
            displayDetails();
        }
        else {
            cout << "Patient not found." << endl;
        }
    }
    void doctorList(char doctor[]) {
        if (strcmp(DoctorName, doctor) == 0) {
            displayDetails();
        }
    }
    void displayDetails() {
        cout << "Patient ID: " << PatientId << endl;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Gender: " << Gender << endl;
        cout << "Nature of Sickness: " << NatureOfSickness << endl;
        cout << "Doctor Name: " << DoctorName << endl;
    }
};
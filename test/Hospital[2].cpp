/* Program for demonstrating run time polymorphism
Create a class called Hospital that includes members
for ld. Name, Gender. Age. Date of joining (DOJ),
Provide pure virtual methods for payment(), admit() and
Then two derived classes as Patients and
Doctors. Patients class should add members for Disease,
Ward (General or Room or ICIJ), Doctor_ld and should
override payment(), admit() and show_details(). Doctors
class should add members for Specialization. Type
(visiting or regular) and override payment(), admit() and
Patients class should implement payments() method for
bill generation. It is calculated as follows
Ward fee = 1000 per day if
Ward fee 3000 per day if ward-"Room"
Ward fee = 5000 per day if wardz"lCU"
Bill amount = ward fee • number of days admitted + doctor
fee ( 2000 per day)
Show_details should display summary Of the patient
admit should admit a new patient by collecting the details.
At that time show the list of doctors available and let the
user enter the ld of the doctor from the list.
Doctor class should implement payments method for
salary generation as follows
Number of patients under him X 2000 + additional pay
(visiting Rs 1000 per day. Regular Rs 3000 per day)
Show_details should display summary of the doctor
admit should enroll a new doctor into the hospital by
collecting the details.
Create a pointer array Of type Hospital class. Insert new
patients and doctors into that array. Keep a count variable
to keep track of array size as it increases. */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Hospital {
protected:
    string id;
    string name;
    char gender;
    int age;
    int DOJ[3];

public:
    virtual void admit(string, string, char, int, int[], string, int, string) = 0;
    virtual void showDetails() = 0;
    virtual void incrementPatientCount() {};
    
    string getId() {
        return id;
    }
};

class Patient : public Hospital {
    string disease;
    int ward;
    string doctor_id;

public:
    void admit(string id, string name, char gender, int age, int DOJ[], string disease, int ward, string doctor_id);
    void payment();
    void showDetails();
};

void Patient::admit(string id1, string name1, char gender1, int age, int DOJ[], string disease, int ward, string doctor_id) {
    id = id1;
    name = name1;
    this->gender = gender;
    this->age = age;
    this->DOJ[0] = DOJ[0];
    this->DOJ[1] = DOJ[1];
    this->DOJ[2] = DOJ[2];
    this->disease = disease;
    this->ward = ward;
    this->doctor_id = doctor_id;
}

void Patient::showDetails() {
    cout << id << setw(20) << name << setw(20) << disease << setw(20) << ward << setw(20) << doctor_id << endl;
}

class Doctor : public Hospital {
    string specialization;
    int type;
    int patient_count;

public:
    Doctor() : patient_count(0) {}
    void admit(string, string, char, int, int[], string, int, string);
    void showDetails();
    void incrementPatientCount() {
        patient_count++;
    }
};

void Doctor::admit(string id, string name, char gender, int age, int DOJ[], string specialization, int type, string dummy) {
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->age = age;
    this->DOJ[0] = DOJ[0];
    this->DOJ[1] = DOJ[1];
    this->DOJ[2] = DOJ[2];
    this->specialization = specialization;
    this->type = type;
    this->patient_count = 0;
}

void Doctor::showDetails() {
    cout << id << setw(20) << name << setw(20) << specialization << setw(20) << type << setw(20) << patient_count << endl;
}

int main() {
    int choice, count = 0, pid = 100, did = 100;
    string specialization;
    int type;
    stringstream ss;
    string name, id, ID1, ID2, ID3, disease;
    char gender;
    int DOJ[3], age, ward;
    Hospital* hptl[10]; // Run-time polymorphism

    do {
        cout << endl;
        cout << "1. Admit new patient" << endl;
        cout << "2. Appoint new doctor" << endl;
        cout << "3. Patient details" << endl;
        cout << "4. Doctor details" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter patient name: ";
            cin >> name;
            cout << "Enter gender (1. Male 2. Female): ";
            cin >> gender;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter date of admission (dd mm yyyy): ";
            cin >> DOJ[0] >> DOJ[1] >> DOJ[2];
            cout << "Enter patient's disease: ";
            cin >> disease;
            cout << "Enter ward type (1. General 2. Room 3. ICU): ";
            cin >> ward;

            for (int i = 0; i < count; i++) {
                ID1 = hptl[i]->getId();
                cout << "Doctor Id" << setw(20) << "Doctor name" << setw(20) << "Specialization" << "Type" << setw(20) << endl;
                if (ID1[0] == 'D') {
                    hptl[i]->showDetails();
                    cout << endl;
                }
            }

            cout << "Enter the doctor id: ";
            cin >> ID2;

            for (int i = 0; i < count; i++) {
                ID3 = hptl[i]->getId();
                if (ID3 == ID2) {
                    hptl[i]->incrementPatientCount();
                    break;
                }
            }

            ss << pid;
            ss >> id;
            id = "P" + id;
            hptl[count] = new Patient();
            hptl[count]->admit(id, name, gender, age, DOJ, disease, ward, ID2);
            count++;
            pid++;
        }
        else if (choice == 2) {
            cout << "Enter doctor name: ";
            cin >> name;
            cout << "Enter gender (1. Male 2. Female): ";
            cin >> gender;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter specialization: ";
            cin >> specialization;
            cout << "Enter date of joining (dd mm yyyy): ";
            cin >> DOJ[0] >> DOJ[1] >> DOJ[2];
            cout << "Enter type of appointment (1. Visiting 2. Regular): ";
            cin >> type;

            ss.clear();
            ss << did;
            ss >> id;
            id = "D" + id;

            hptl[count] = new Doctor();
            hptl[count]->admit(id, name, gender, age, DOJ, specialization, type, "nil");
            count++;
            did++;
            id = "";
        }
        else if (choice == 3) {
            cout << "Patient Id" << setw(20) << "Name" << setw(20) << "Disease" << setw(20) << "Ward" << setw(20) << "Doctor Id" << endl;
            for (int i = 0; i < count; i++) {
                string id = hptl[i]->getId();
                if (id[0] == 'P') {
                    hptl[i]->showDetails();
                }
            }
        }
        else if (choice == 4) {
            cout << "Doctor Id" << setw(20) << "Doctor name" << setw(20) << "Specialization" << setw(20) << "Type" << setw(20) << "Patient count" << endl;
            for (int i = 0; i < count; i++) {
                string id = hptl[i]->getId();
                if (id[0] == 'D') {
                    hptl[i]->showDetails();
                }
            }
        }

    } while (choice != 5);
}

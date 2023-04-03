/* Create a class Patient 
that has data members – PatientId(int), Name(string), Age(int), and Disease(string). 

Add parameterized constructor to create the necessary Patient objects. 

Add a member function searchPatient() that takes a name as input; 
-- if the name matches with the patient name, then display the patient details with another member function displayData(). 

Write a c++ code to  demonstrate this. */

#include <iostream>
using namespace std;

class Patient {
	// Private Data Members
	int PatientId, Age;
	string Name, Disease;
	
	// Public Member Functions
	public:
		// Parameterized constructor to set values the object's data members
		Patient(int patientId, int age, string name, string disease) {
			PatientId = patientId;
			Age = age;
			Name = name;
			Disease = disease;	
		}
	
		// Function to display data
		void displayData() {
			cout << "ID: " << PatientId << "\nAge: " << Age << "\nName: " << Name << "\nDisease: " << Disease << endl;
		}
	
		// Function to search patient by name
		void searchPatient(string query) {
			if (query == Name) {
				displayData();
			} else {
				cout << "Not Found\n";
			}
		}
};

int main () {
	// Declaring 2 objects of type Patient
	Patient P1(1,18,"Baari", "ADHD");
	Patient P2(2,17, "Dhyey", "Insomnia");
	
	// Calling "searchPatient" function
	P1.searchPatient("Baari");
}

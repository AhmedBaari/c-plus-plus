#include<iostream>
using namespace std;

/* Defining a class Machine */
class Machine {
	// Private Data Members
	private:
		double price;
	public:
		// Public Data Members
	        string manufracturer;
                int modelno,year;
		
		// Public Member Functions
		/* Function to post data */
	        void postData() {
				cout<<"Enter Model no.:";
				cin>>modelno;
				cout<<"Enter Manufacturer name:";
				cin>>manufracturer;
				cout<<"Enter year of manufacturing:";
				cin>>year;
				cout<<"Enter Price:";
				cin>>price;
		}
		
		/* Function to print data */
		void printData() {
			cout<<"\nModel: "<<modelno<<"\nManufracturer: "<<manufracturer<<"\nYear: "<<year<<"\nprice: "<<price << endl;	   				                       
		}
};

/* Main Function */
int main() {
	Machine M1; // Initializing a Machine Object Called M1
	M1.postData(); //posting data
        M1.printData(); //printing data
}

/* Sample Input Output 
Enter Model no.:12345 
Enter Manufacturer name:Baari
Enter year of manufacturing:2023
Enter Price:345

Model: 12345
Manufracturer: Baari
Year: 2023
price: 345
*/


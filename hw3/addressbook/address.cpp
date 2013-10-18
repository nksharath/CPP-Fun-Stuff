/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/23/2012 11.15 AM
*
*/
#include "address.h"
#include<iostream>
using namespace std;

int main () {
	AddressBook1 a1;
	char choice[5];
	char name[256];
	// While loop that goes through feature od address book app.
	while(strcmp(choice,"5") != 0) {
		cout << "Enter" << endl <<"1 to Add Contact" << endl << "2 to Edit Contact" << endl << "3 to Delete Contact";
		cout << endl << "4 to Search Contact" << endl  << "5 to Exit" << endl;
		cin.getline(choice,5);
		if(strcmp(choice,"1") == 0) {
			a1.AddPerson();
		} else if(strcmp(choice,"2") == 0) {
			cout << "Enter name of the Person to edit : ";
			cin.getline(name,256);
			a1.EditPerson(name);
		}  else if(strcmp(choice,"3") == 0) {
			cout << "Enter name of the Person to delete : ";
			cin.getline(name,256);
			a1.DeletePerson(name);
		} else if(strcmp(choice,"4") == 0) {
			cout << "Enter name of the Person to search : ";
			cin.getline(name,256);
			a1.SearchPerson(name);
		}
	}
	return 0;
}


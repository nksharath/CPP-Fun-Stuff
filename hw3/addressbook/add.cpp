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

void AddressBook1::DeletePerson(char name[256]) {
	//Deleting the file
	if( remove(name) == -1 ) {
		cout << "No such Contact Exists" << endl;
	} else {
		cout << "File Deleted Successfully" << endl;
	}
}
void AddressBook1::SearchPerson(char name[256]) {
	//Searches the name of the file and displays the content
	char address[512] , phone[25] , email[100];
	FILE * file;
	// Opening a file
	file = fopen(name,"r");
	if(file != NULL) {
		cout << "Contact Found " << endl;
		cout << "Name : " << name << endl;
		if (fgets(address,512,file) != NULL) {
			cout << "Address : " << address ;
		} else {
			cout << "Address : " << endl;
		}
		if (fgets(phone,25,file) != NULL) {
			cout << "Phone : " << phone ;
		} else {
			cout << "Phone : " << endl;
		}
		if (fgets(email,100,file) != NULL) {
			cout << "Email : " << email << endl ;
		} else {
			cout << "Email : " << endl;
		}
		fclose(file);
	} else {
		cout << "Contact does not exist" << endl;
		return;
	}
}
void AddressBook1::EditPerson(char name[256]) {
	//Open the file and reads all the values and after edit writes all the values to the file again after erasing it
	char address[512] , phone[25] , email[100] ,newName[256];
	FILE * file;
	file = fopen(name,"r");
	FILE * newFile;
	if(file != NULL) {
		cout << "Contact Found " << endl;
		//Printing File
		cout << "Name : " << name << endl;
		if (fgets(address,512,file) != NULL) {
			cout << "Address : " << address ;
		} else {
			cout << "Address : " << endl;
		}
		if (fgets(phone,25,file) != NULL) {
			cout << "Phone : " << phone ;
		} else {
			cout << "Phone : " << endl;
		}
		if (fgets(email,100,file) != NULL) {
			cout << "Email : " << email << endl;
		} else {
			cout << "Email : " << endl;
		}
		char field[50];
		bool nameFlag = false;
		//Using strcmp to compare between character array and string
		//Loop to edit different fields at once.
		while(strcmp(field,"exit") != 0) {
			cout << "Enter the name of the field to edit or enter exit to exit : ";
			cin.getline(field,50);
			if(strcmp(field,"name") == 0 || strcmp(field,"Name") == 0) {
				cout << "Enter new name : ";
				cin.getline(newName,256);
				nameFlag = true;
			} else if(strcmp(field,"Address") == 0 || strcmp(field,"address") == 0) {
				cout << "Enter new address : " << endl;
				cin.getline(address,512);
			} else if(strcmp(field,"Phone") == 0 || strcmp(field,"phone") == 0) {
				cout << "Enter new phone : ";
				cin.getline(phone,25);
			} else if(strcmp(field,"Email") == 0 || strcmp(field,"email") == 0) {
				cout << "Enter new email : ";
				cin.getline(email,100);
			}
		}
		//Making changes to the file and saving it
		// If the name is changed file in deleted and new file is created
		//else the same file is erased and rewritten
		if(nameFlag) {
			fclose(file);
			remove(name);
			newFile = fopen(newName,"w");
			fputs(address,newFile);
			fputs(phone,newFile);
			fputs(email,newFile);
			fclose(newFile);
		} else {
			fclose(file);
			file = fopen(name,"w");
			fputs(address,file);
			fputc('\n',file);
			fputs(phone,file);
			fputc('\n',file);
			fputs(email,file);
			fclose(file);
		}
	} else {
		cout << "Contact does not exist" << endl;
		return;
	}
}
void AddressBook1::AddPerson(){
	//Adding a new Contact by creating its file.
	char name[256], address[512] , phone[25] , email[100];
	cout << "Enter name: ";
	cin.getline(name,256);
	FILE * file;
	file = fopen(name,"r+");
	if(file != NULL) {
		cout << "Contact already exist";
		return;
	} else {
		cout << "Contact Created ..." << endl;
		file = fopen(name,"w");
		cout << "Enter address : ";
		cin.getline(address,512);
		fputs(address,file);
		fputc('\n',file);
		cout << "Enter phone number : ";
		cin.getline(phone,512);
		fputs(phone,file);
		fputc('\n',file);
		cout << "Enter email : ";
		cin.getline(email,512);
		fputs(email,file);
		fputc('\n',file);
		fclose(file);
	}
}

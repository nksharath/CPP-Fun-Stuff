/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/23/2012 9.30 PM
*
*/
#ifndef _ADDRESSBOOK1_H_
#define _ADDRESSBOOK1_H_
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class AddressBook1
{
    public:
    void AddPerson();
	void DeletePerson(char[]);
	void SearchPerson(char[]);
	void EditPerson(char[]);
	void PrintContact(FILE,char[]);
};
#endif



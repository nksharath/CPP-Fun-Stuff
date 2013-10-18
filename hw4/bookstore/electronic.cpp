/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#include "electronic.h"
#include<iostream>
#include "inventory.h"
using namespace std;

//Takes user input and searchs Eobject

void Ebooks::Search(string inp,int e,Ebooks EObject[])
{
    int i=0;
    while(i<e)
    {
        if(IsAvailable(inp,EObject[i]))
        {

        cout<<endl<<EObject[i].Elec<<endl<<
            EObject[i].Title<<endl<<
            EObject[i].Author<<endl<<
            EObject[i].Price<<endl<<
            EObject[i].Provider<<endl;
        }i++;
    }
}

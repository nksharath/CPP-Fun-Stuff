/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#include "hardback.h"
#include<iostream>
using namespace std;
//Performs search function based on user input and checks HardObject array
void HardBack::Search(string inp,int h,HardBack HardObject[])
{
    int i=0;
    while(i<h)
    {
        if(IsAvailable(inp,HardObject[i]))
        {

            cout<<endl<<HardObject[i].Hard<<endl<<
            HardObject[i].Title<<endl<<
            HardObject[i].Author<<endl<<
            HardObject[i].Price<<endl<<
            HardObject[i].SizeBook<<endl;
        }i++;
    }
}

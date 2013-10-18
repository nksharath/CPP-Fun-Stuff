/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#include "paperback.h"
#include<iostream>
using namespace std;
//Performs search based on user query , and checks PaperObject Array
void PaperBack::Search(string inp,int p,PaperBack PaperObject[])
{
    int i=0;
    while(i<p)
    {
        if(IsAvailable(inp,PaperObject[i]))
        {

        cout<<endl<<PaperObject[i].Paper<<endl<<
            PaperObject[i].Title<<endl<<
            PaperObject[i].Author<<endl<<
            PaperObject[i].Price<<endl;
        }i++;
    }
}

/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 4.45 PM
*
*/
#include "audiobook.h"
#include<iostream>
using namespace std;
//Performs search based on user query, in AudioObject array
void AudioBooks::Search(string inp,int a,AudioBooks AudioObject[])
{
    int i=0;
    while(i<a)
    {
        if(IsAvailable(inp,AudioObject[i]))
        {

        cout<<endl<<AudioObject[i].Aud<<endl<<
            AudioObject[i].Title<<endl<<
            AudioObject[i].Author<<endl<<
            AudioObject[i].Price<<endl<<
            AudioObject[i].NoOfCD<<endl;
        }i++;
    }
}

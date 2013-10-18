/*
simplegrep.cpp    Contains Main function and creates object for class Pattern
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/15/2012 8.25 PM
*
*/
#include <iostream>
#include <vector>
#include<string>
#include<fstream>
#include "pattern.h"


using namespace std;

int main(int argc,char* argv[])
{
    //Creating an object of Pattern
    Pattern Obj;
    ifstream FileRead;
    //If user has filename
    if(argc==2)
    FileRead.open(argv[1],ios::in);
    //default file name
    else if (argc==1)
    FileRead.open("//usr//share//dict//words");
    //Error in specifying filename
    else if(argc>2)
    cout<<"Example : ./simplegrep filename";
    //Local buffer to store value from file.
    string buffer;
    while(getline(FileRead,buffer))
    {
        //Pushing values to vector from file
       Obj.ReadDict.push_back(buffer);
    }

    while(1)
    //Calling the PatternMatch function
    Obj.PatternMatch();
}


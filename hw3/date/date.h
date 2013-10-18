/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/23/2012 11.15 AM
*
*/
#ifndef _DATE_H_
#define _DATE_H_
#include <iostream>

using namespace std;

class Date
{
    //Declaring instance variables
public:
    int Day,Month,Year;
    //Defining a non parameterized constructor
public:
    Date();
    //Defining a paramterized constructor
    Date(int m,int d,int y);
    //Checks if date is a valid one
    bool CheckDate();
    //Displays the date in two formats
    void DisplayDate(int m,int d,int y);
    //Gets all data from user
    void GetData();
};
#endif

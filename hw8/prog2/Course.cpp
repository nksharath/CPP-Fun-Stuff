/*
Course.cpp       This class holds the course name and grade information
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/28/2012 11.25 PM
*
*/
#include "Course.h"
using namespace std;

//Constructor to initialise course name and grade information
Course::Course(string temp1,int temp2)
{
    cname=temp1;
    grade=temp2;
}
//This fucntion returns the name of the course
string Course::getName()
{
    return cname;
}
//This function returns the grade information
int Course::getGrade()
{
    return grade;
}

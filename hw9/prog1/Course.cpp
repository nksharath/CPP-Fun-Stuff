/*
Course.cpp       This class holds the course name and grade information
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 11/05/2012 7.25 PM
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

//This function overloads operator << : To display course names and their grades.

ostream& operator<<(std::ostream& out,const Course& right)
{

 out<<"Overloading << in Course : Course Name :"<<right.cname<<endl<<"Grade :"<<right.grade<<endl;
 return out;
}

/*
Course.h      Declares course name and grade for Course class
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 11/05/2012 7.25 PM
*
*/
#ifndef _COURSE_H_
#define _COURSE_H_
#include<iostream>
#include<vector>


using namespace std;

class Course
{
    public:
    //Declaring course name
    string cname;
    //Declaring grade information for a course
    int grade;
//Constructor to initialise course name and grade information
Course(string temp1,int temp2);
//This fucntion returns the name of the course
string getName();
//This function returns the grade information
int getGrade();
};
//This function overloads operator << : To display course names and their grades.
ostream& operator<<(ostream& out,const Course& right);
#endif



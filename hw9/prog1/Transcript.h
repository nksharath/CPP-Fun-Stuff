/*
Transcript.h   Declaration of classes and member variables for Transcript
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 11/05/2012 7.25 PM
*
*/
#ifndef _TRANSCRIPT_H_
#define _TRANSCRIPT_H_
#include<iostream>
#include<vector>
#include "Course.h"
using namespace std;
class Transcript
{
    //Declaring name to store the student name
public:
    string name;
    //Declaring a vector of Course type, to add/remove courses into transcript
    vector<Course> marksheet;

public:

//Constructor to initialise with student name
Transcript(string temp);
//overloading operater += : to add a course into transcripts
Transcript& operator+=(const Course& right);
//This function calculates gpa and returns a double type
double gpa()const;
//This fucntion overloads operator + : Formal parameter is of Course type
Transcript operator+(const Course& right)const;
//This function overloads the assigment operator
Transcript& operator=(const Transcript& right);
//This function sets the name for (*this) object
void setName(string temp);
//This function overloads -= operator : to remove a course from transcript
Transcript& operator-=(const Course& right);
//This fucntion overloads operator + : Formal parameter is of Transcript type
Transcript operator+(const Transcript& right)const;
//This function overloads operator < for inserting elements into set
bool operator<(const Transcript& right)const;
//This function returns the number of courses added
int numCourses()const;
//This function returns the name of the student
string getName()const;
//This function overloads operator [] : returns the vector of given index
Course operator[](const int c)const;
};
//This function overloads operator << : Makes a call to the operator << overloaded in class Course to display courses.
ostream& operator<<(ostream& out,const Transcript& right);
#endif



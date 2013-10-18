/*
Transcript.cpp    Overloads all necessary operators required for a student Transcript
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/28/2012 11.25 PM
*
*/
#include<iostream>
#include<list>
#include "Transcript.h"
using namespace std;

//Constructor to initialise with student name
Transcript::Transcript(string temp)
{
    name=temp;

}

//overloading operater += : to add a course into transcripts
Transcript& Transcript::operator+=(const Course& right)
{

    *this=*this+right;
    return *this;
}

//This function calculates gpa and returns a double type
double Transcript::gpa()const
{
    double gpa=0;
    for(int i=0;i<marksheet.size();i++)
    {
        gpa+=marksheet[i].grade;

    }
    return gpa/marksheet.size();
}

//This fucntion overloads operator + : Formal parameter is of Course type
Transcript Transcript::operator+(const Course& right)const
{
    Transcript t2(name);
    t2.marksheet=marksheet;
    t2.marksheet.push_back(right);
    return t2;
}

//This function overloads the assigment operator
Transcript& Transcript::operator=(const Transcript& right)//const
{
    marksheet=right.marksheet;
    return *this;
}

//This function sets the name for (*this) object
void Transcript::setName(string temp)
{
    name=temp;
}

//This function overloads -= operator : to remove a course from transcript
Transcript& Transcript::operator-=(const Course& right)
{
    for(vector<Course>::iterator it=marksheet.begin();it!=marksheet.end();it++)
    {
        if(it->cname==right.cname)
        marksheet.erase(it);

    }
    return *this;
}
//This fucntion overloads operator + : Formal parameter is of Transcript type
Transcript Transcript::operator+(const Transcript& right)const
{
    Transcript t2(name+" and "+right.name);
    for(vector<Course>::const_iterator it=marksheet.begin();it!=marksheet.end();it++)
    t2.marksheet.push_back(*it);

    for(vector<Course>::const_iterator it=right.marksheet.begin();it!=right.marksheet.end();it++)
    t2.marksheet.push_back(*it);

    return t2;
}


//This function overloads operator < for inserting elements into set
bool Transcript::operator<(const Transcript& right)const
{
    double temp1=gpa();
    double temp2=right.gpa();
    if(temp1<temp2)
    return true;
    else
    return false;
}

//This function returns the number of courses added
int Transcript::numCourses()const
{
    return marksheet.size();

}

//This function returns the name of the student
string Transcript::getName()const
{
    return name;
}

//This function overloads operator [] : returns the vector of given index
Course Transcript::operator[](const int c)const
{
    return marksheet[c];
}



















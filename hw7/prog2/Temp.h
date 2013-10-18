/*
Temp.h          : Templated Abstract class with required functions for solving constraint satisfaction problems
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/22/2012 4.30 AM
*
*/
#ifndef _TEMP_H_
#define _TEMP_H_
#include <iostream>
#include<vector>

using namespace std;

// Templated class
template <class T>
class Temp
{
public:

    public:
    //method to check if all variables have been assigned
    virtual bool HasAllVariablesAssigned()=0;
    //method to check if the constraints are satisfied
    virtual bool CheckConstraints()=0;
    //method to generate neighbours for recursive backtracking
    virtual vector<T> genNeighbors()=0;

};
#endif

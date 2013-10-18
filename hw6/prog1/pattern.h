/*
pattern.h       : Defines all functions and member variables of class Pattern
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/15/2012 8.25 PM
*
*/
#ifndef _PATTERN_H_
#define _PATTERN_H_
#include <iostream>
#include <vector>
#include<string>
#include<fstream>
using namespace std;
class Pattern
{
    public:
    //To read values from file
    vector<string> ReadDict;
    //Creates a data structure based on string length.
    vector<string>  Dict[100];
    public:
    //A function that search's for the string pattern
    void PatternMatch();
};
#endif




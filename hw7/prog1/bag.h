/*
bag.h           : class declarations and method definitions , of type T with methods add() pick() and empty()
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/21/2012 2.30 PM
*
*/

#ifndef _BAG_H_
#define _BAG_H_
#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

//Creating template
template<class T>

class Bag
{
public:
    //Declaring a member variable : a vector of type T
    vector<T> bag;
public:

//this method adds an argument of type T to vector
void add(T arg)
{
    bag.push_back(arg);
}

//This method picks an element randomly and returns a T type element
T pick()
{
    //Random function based on time
    srand(time(NULL));
    int i=rand() % bag.size();
    //An exception is thrown if vector out of bound element is accessed
    try
    {
        if(i<0 || i>bag.size()-1)
        throw 100;

        return bag[i];
    }
    //The exception is caught here
    catch(int error)
    {
        cout<<endl<<"Exception : Cannot access index : Out of Bound ";
        exit(0);
    }
}
//This function returns a bool based on whether vector is empty or not
bool empty()
{
    return bag.empty();
}
};
#endif

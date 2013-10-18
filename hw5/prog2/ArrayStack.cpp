/*
 ArrayStack.cpp   Performs various stack operations using an ArrayStack
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 6.25 PM
*
*/
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
#include "ArrayStack.h"
//Defining the constructor
ArrayStack::ArrayStack(int Max)
{
    MaxElements=Max;
    Top=0;
    Stack=new int[MaxElements];
}
//Defining function push

void ArrayStack::push(int Element)
{
    try
    {
    if(Top>MaxElements-1)
    throw 100;

    else
    Stack[Top++]=Element;
    }

    catch(int err)
    {
        cout<<endl<<"EXCEPTION : Array Stack Full"<<endl;
        return;
    }




}
//Defining function pop
int ArrayStack::pop()
{
    try
    {

    if(Top==0)
    throw 100;

    else
    return Stack[--Top];
    }
    catch(int err)
    {
        cout<<endl<<"EXCEPTION : Array Stack empty "<<endl;
        return -1;
    }
}
//Defining function top
int ArrayStack::top()
{
    return Stack[Top-1];
}
//Checks if stack is empty
bool ArrayStack::empty()
{
    if(Top==0)
    return true;
    else
    return false;
}
//Checks if stack is full
bool ArrayStack::full()
{
    if(Top==MaxElements)
    return true;
    else
    return false;
}

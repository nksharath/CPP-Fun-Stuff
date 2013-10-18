/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
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
    if(Top==MaxElements)
    return;

    else
    Stack[Top++]=Element;

}
//Defining function pop
int ArrayStack::pop()
{
    if(Top==0)
    return -1;
    else
    return Stack[--Top];
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

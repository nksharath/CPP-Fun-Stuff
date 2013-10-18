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
#include "LinkedStack.h"

//Function push adds an element to the stack

void LinkedStack::push(int Element)
{
    Stack.push_back(Element);
}
//Function pop deletes an element from the stack

int LinkedStack::pop()
{
    cout<<endl<<Stack.back();
    Stack.pop_back();
    return Stack.back();

}
//Displays the top element

int LinkedStack::top()
{
    return Stack.back();

}
//Checks if stack is empty

bool LinkedStack::empty()
{

    if(Stack.empty()==1)
    return true;

    else
    return false;
}
//checks if stack is full : False for linked list

bool LinkedStack::full()
{
    return false;
}



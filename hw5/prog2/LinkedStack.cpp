/*
 ArrayStack.cpp   Performs various stack operations using an LinkedStack
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
#include "LinkedStack.h"

LinkedStack::LinkedStack()
{
    start=0;
}

//Function push adds an element to the stack

void LinkedStack::push(int Element)
{
    Stack.push_back(Element);
    start++;
}
//Function pop deletes an element from the stack

int LinkedStack::pop()
{
    try
    {
    if(start<=0)
    throw 100;
    else
    {
    cout<<endl<<Stack.back();
    Stack.pop_back();
    start--;
    return Stack.back();
    }
    }
    catch(int err)
    {
        cout<<endl<<"EXCEPTION: Linked List empty"<<endl;
        return -1;
    }

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



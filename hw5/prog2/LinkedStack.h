/*
LinkedStack.h    Declares functions of class LinkedStack
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 6.25 PM
*
*/
#ifndef _LINKEDSTACK_H_
#define _LINKEDSTACK_H_
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
#include "Stack.h"

class LinkedStack : public Stack
{
public:
    list<int> Stack;
    int start;

//Funtion declarations of class LinkedStack
LinkedStack();
void push(int Element);
int pop();
int top();
bool empty();
bool full();

};
#endif

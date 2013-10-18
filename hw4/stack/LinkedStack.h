/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
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

//Funtion declarations of class LinkedStack
void push(int Element);
int pop();
int top();
bool empty();
bool full();

};
#endif

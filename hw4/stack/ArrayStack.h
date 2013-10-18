#ifndef _ARRAYSTACK_H_
#define _ARRAYSTACK_H_
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
#include "Stack.h"
class ArrayStack : public Stack
{
    int *Stack;
    int MaxElements;
    int Top;

public :

ArrayStack(int Max);
void push(int Element);
int pop();
int top();
bool empty();
bool full();
};
#endif

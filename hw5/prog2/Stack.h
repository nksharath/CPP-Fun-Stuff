#ifndef _STACK_H_
#define _STACK_H_
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
using namespace std;

class Stack
{
public:
    virtual void push(int Element)=0;
    virtual int pop()=0;
    virtual int top()=0;
    virtual bool empty()=0;
    virtual bool full()=0;

};
#endif

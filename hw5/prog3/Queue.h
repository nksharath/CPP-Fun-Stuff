/*
Queue.h          Abstract Class definition and declares all Queue functions as virtual
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 10.25 PM
*
*/
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
using namespace std;

class Queue
{
public:
    virtual void enqueue(int newInt)=0;
    virtual int dequeue()=0;
    virtual bool empty()=0;
    virtual bool full()=0;

};
#endif

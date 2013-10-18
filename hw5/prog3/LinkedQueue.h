/*
LinkedQueue.h     Declares all Queue functions and class variables
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 10.25 PM
*
*/
#ifndef _LINKEDQUEUE_H_
#define _LINKEDQUEUE_H_
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
#include "Queue.h"

class LinkedQueue : public Queue
{
public:
    list<int> LinkQueue;
    int start;

//Funtion declarations of class LinkedQueue
 LinkedQueue();
 void enqueue(int newInt);
 int dequeue();
 bool empty();
 bool full();
};
#endif

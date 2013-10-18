/*
LinkedQueue.cpp   Performs various queue operations on LinkedQueue
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 10.25 PM
*
*/
#include<iostream>
#include<stdlib.h>
#include<list>
#include<vector>
#include "LinkedQueue.h"

LinkedQueue::LinkedQueue()
{
    start=0;
}

//Function enqueues an element to the Queue

void LinkedQueue::enqueue(int newInt)
{
    LinkQueue.push_back(newInt);
    start++;
}
//Function dequeues an element from the Queue

int LinkedQueue::dequeue()
{
    try
    {
    if(start<=0)
    throw 100;
    else
    {
    cout<<endl<<LinkQueue.front();
    LinkQueue.pop_front();
    start--;
    return LinkQueue.front();
    }
    }
    catch(int err)
    {
        cout<<endl<<"EXCEPTION: Linked Queue empty"<<endl;
        return -1;
    }

}

//Checks if Queue is empty

bool LinkedQueue::empty()
{

    if(LinkQueue.empty()==1)
    return true;

    else
    return false;
}
//checks if Queue is full : False for LinkedQueue

bool LinkedQueue::full()
{
    return false;
}



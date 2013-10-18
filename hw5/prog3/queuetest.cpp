/*
queuetest.cpp    Performs various queue operations on LinkedQueue
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
#include "Queue.h"
#include "LinkedQueue.h"

//Invoking Main Function

int main() {
   vector < Queue* > v(1);
   //Creating a vector of objects of type LinkedQueue for demo

   v[0] =  new LinkedQueue();

   cout<<"\nEnqueue Values from 0-9 to LinkedQueue\n ";

   //Enqueuing values 0-9 into LinkedQueue for demo
   for(int i=0;i<10;i++)
   v[0]->enqueue(i);


    cout<<"\nDequeue values with an example of exception ";

    //Dequeueing all values
    for(int i=0;i<=10;i++)
    v[0]->dequeue();

    //Checking if LinkedQueue is empty

    cout<<"\n\nIs LinkedQueue Empty ? ";
    if(v[0]->empty())
    cout<<"True";
    else
    cout<<"False";

    //Checking if LinkedQueue is full

    cout<<"\n\nIs LinkedQueue Full ? ";
    if(v[0]->full())
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;


}

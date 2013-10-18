/*
Stacktest.cpp   Performs various stack operations on LinkedStack and ArrayStack
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
#include "Stack.h"
#include "ArrayStack.h"
#include "LinkedStack.h"

//Invoking Main Function

int main() {
   vector < Stack* > v(2);
   //Creating a vector of objects of type ArrayStack and LinkedStack for demo
   v[0] =  new ArrayStack(10);
   v[1] =  new LinkedStack();

   cout<<"\nPushing Values from 0-10(11 elements) to both ArrayStack(of size 10) and LinkedStack\n ";
   //Storing values 0-9 into stack for stack demo

   for(int i=0;i<=10;i++)
   v[0]->push(i);

   for(int i=0;i<=10;i++)
   v[1]->push(i);

    cout<<endl<<"Top values\n";

    //Printing the top values of both stacks

    cout<<endl<<"ArrayStack Top "<<v[0]->top()<<endl;
    cout<<endl<<"LinkedStack Top "<<v[1]->top()<<endl;

    cout<<"\nPop Values of ArrayStack : Popping 11 elements from array whose size is 10\n";
    //Popping all values of Array Stack

    for(int i=0;i<=10;i++)
    {
    int temp=v[0]->pop();
    if(temp!=-1)
    cout<<endl<<temp;
    }

    cout<<"\n\nPop Values of LinkedStack: With an example of exception when Linked Stack is empty\n";
    //Popping all values of Linked Stack

    for(int i=0;i<=11;i++)
    v[1]->pop();

    //Checking if Array Stack is empty

    cout<<"\n\nIs ArrayStack Empty ? ";
    if(v[0]->empty())
    cout<<"True";
    else
    cout<<"False";

    //Checking if LinkedStack is empty

    cout<<"\n\nIs LinkedStack Empty ? ";
    if(v[1]->empty())
    cout<<"True";
    else
    cout<<"False";

    //Checking if ArrayStack is full

    cout<<"\n\nIs ArrayStack Full ? ";
    if(v[0]->full())
    cout<<"True";
    else
    cout<<"False";

    //Checking if Linked Stack is full

    cout<<"\n\nIs LinkedStack Full ? ";
    if(v[1]->full())
    cout<<"True";
    else
    cout<<"False\n";

}

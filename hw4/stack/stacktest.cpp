/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
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

   cout<<"\nPushing Values from 0-9 to both ArrayStack and LinkedStack\n ";
   //Storing values 0-9 into stack for stack demo

   for(int i=0;i<10;i++)
   v[0]->push(i);

   for(int i=0;i<10;i++)
   v[1]->push(i);

    cout<<endl<<"Top values\n";

    //Printing the top values of both stacks

    cout<<endl<<"ArrayStack Top "<<v[0]->top()<<endl;
    cout<<endl<<"LinkedStack Top "<<v[1]->top()<<endl;

    cout<<"\nPop Values of ArrayStack\n";
    //Popping all values of Array Stack

    for(int i=0;i<10;i++)
    cout<<endl<<v[0]->pop();

    cout<<"\n\nPop Values of LinkedStack\n";
    //Popping all values of Linked Stack

    for(int i=0;i<10;i++)
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

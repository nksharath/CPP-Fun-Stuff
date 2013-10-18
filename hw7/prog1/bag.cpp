/*
bag.cpp         : Main method definition , and creating objects of type int and char* to test templates
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/21/2012 2.30 PM
*
*/
#include"bag.h"

using namespace std;

int main()
{
    //Creating an object of Bag class : T is of type int here
    Bag<int> obj1;
    //checking if vector<int> is empty
    cout<<"Is vector<int> empty ? "<<obj1.empty()<<endl;
    //adding elements to vector<int>
    obj1.add(0);
    //adding elements to vector<int>
    obj1.add(1);
    //adding elements to vector<int>
    obj1.add(2);
    //adding elements to vector<int>
    obj1.add(3);
    //picking an element from vector<int> randomly
    cout<<"Random pick from vector<int> "<<obj1.pick();
    //checking if vector<int> is empty
    cout<<endl<<"Is vector<int> empty ? "<<obj1.empty()<<endl<<endl;

    //Creating an object of Bag class : T is of type char* here
    Bag<char*> obj2;
    //checking if vector<char*> is empty
    cout<<"Is vector<char*> empty ? "<<obj2.empty()<<endl;
    //adding elements to vector<char*>
    obj2.add("A");
    //adding elements to vector<char*>
    obj2.add("B");
    //adding elements to vector<char*>
    obj2.add("C");
    //adding elements to vector<char*>
    obj2.add("D");
    //picking an element from vector<int> randomly
    cout<<"Random pick from vector<char*> "<<obj2.pick();
    //checking if vector<char*> is empty
    cout<<endl<<"Is vector<int> empty ? "<<obj2.empty()<<endl;

}


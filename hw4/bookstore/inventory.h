/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#ifndef _INVENTORY_H_
#define _INVENTORY_H_
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<algorithm>

using namespace std;

class Inventory
{
public:
    string Title,Author;
    string Price;
public:
//checks if the user query is available or not
int IsAvailable(string inp,Inventory Object);
};
#endif

/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#ifndef _ELECTRONIC_H_
#define _ELECTRONIC_H_
#include "inventory.h"
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<algorithm>
class Ebooks : public Inventory
{
public:
    string Provider;
    string Elec;
public:
//Search performs search operation based on user query
void Search(string inp,int e,Ebooks EObject[]);

};
#endif

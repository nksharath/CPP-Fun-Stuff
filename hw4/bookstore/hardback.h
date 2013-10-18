/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#ifndef _HARDBACK_H_
#define _HARDBACK_H_
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<algorithm>
#include "inventory.h"
class HardBack : public Inventory
{
public:
    string SizeBook;
    string Hard;
public:
//performs search function based on user query
void Search(string inp,int h,HardBack HardObject[]);
};
#endif

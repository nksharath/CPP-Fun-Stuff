/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/22/2012 1.25 PM
*
*/
#ifndef _RADIO_H_
#define _RADIO_H_

#include "am.h"
#include "fm.h"


#include <iostream>
class radio
{
  public:
  //Declaring static variables
    static int power,loud,switcher;
  //Declaring contructor
    radio();
//Signatures of all functions used in the program
static void P();
static void B();
static void L();
static void Q();
static void U();
static void D();
};

#endif

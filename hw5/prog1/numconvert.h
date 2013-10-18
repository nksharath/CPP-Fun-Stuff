/*
* NumConvert.h
* Declares all necessary conversion functions

*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 , RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01, RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 1.45 PM
*
*/
#ifndef _NUMCONVERT_H_
#define _NUMCONVERT_H_
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<exception>
#include "HexFormat.h"
#include "BinFormat.h"


class NumConvert : public HexFormatException,public BinFormatException
{
public:
static int Count;

public:

char* reverse(char *str);
int parseHex(char *hexStr);
int parseBin(char *binStr);
char* parseDecToHex(int decNum);
char* parseDecToBin(int decNum);
int numConversion();
};
int NumConvert::Count;
#endif

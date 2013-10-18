/*
* NumConvert.cpp
* Defines all necessary conversion functions

*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 , RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01, RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 1.45 PM
*
*/


#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<exception>

#include "numconvert.h"
#include<stdio.h>


using namespace std;

// This function reverses a character array

char* NumConvert::reverse(char *temp)
{
      char *a;
      char *b;

      if (! temp)
      return temp;

      if(! *temp)
      return temp;

      for (a = temp, b = temp + strlen(temp) - 1; b > a; ++a, --b)
      {
            *a ^= *b;
            *b ^= *a;
            *a ^= *b;
      }
      return temp;
}

// Parses the Hexadecimal input
int NumConvert::parseHex(char *hexStr)
{
    int Base=16;
    int Power=-1;
    
    
    int Result=0;

    try
    {


    for(int i=strlen(hexStr)-1;i>=0;i--)
    {
        Power++;

        char ch=hexStr[i];
        int Ascii=ch;

        if(ch!='A' && ch!='B' && ch!='C' && ch!='D' && ch!='E' && ch!='F' && Ascii>71)
            Result=Result+(atoi(&ch)*pow(Base,Power));

        else
        {
            //Checks for Corresponding values of input : Eg A is 10, B is 11
            switch(ch)
            {
                case 'A':
                        Result=Result+(10*pow(Base,Power));
                        break;

                case 'B':
                        Result=Result+(11*pow(Base,Power));
                        break;

                case 'C':
                        Result=Result+(12*pow(Base,Power));
                        break;

                case 'D':
                        Result=Result+(13*pow(Base,Power));
                        break;

                case 'E':
                        Result=Result+(14*pow(Base,Power));
                        break;

                case 'F':
                        Result=Result+(15*pow(Base,Power));
                        break;
                default ://throws an exception if input not in Hex format
                        throw HexException;

            }
        }
    }
    }catch(exception& Err)
    {
        cout<<Err.what()<<endl;
        return NULL;
    }
    Count++;
    return Result;
}
// Parses the binary input
int NumConvert::parseBin(char *binStr)
{
    int Base=2;
    int Power=-1;
    int Result=0;

    for(int i=strlen(binStr)-1;i>=0;i--)
    {
        Power++;
        char ch=binStr[i];
        //Throws an exception if not in format
        try
        {
        if(ch=='0' || ch=='1')
        Result=Result+(atoi(&ch)*pow(Base,Power));
        else
        {
        throw BinException;
        break;
        }
        }
        catch(exception& Err)
        {
        cout<<Err.what()<<endl;
        return NULL ;
        }
    }
    Count++;
    return Result;

}
// This function converts Decimal to Hexadecimal
char* NumConvert::parseDecToHex(int decNum)
{
    int Remainder;
    char *Result=new char();

    while(decNum>0)
    {
        Remainder=decNum%16;
        decNum=decNum/16;

        if(Remainder!=0)
        {
            char buffer[10];
            switch(Remainder)
            {
                case 15:
                        strcat(Result,"F");
                        break;
                case 14:strcat(Result,"E");
                        break;
                case 13:strcat(Result,"D");
                        break;
                case 12:strcat(Result,"C");
                        break;
                case 11:strcat(Result,"B");
                        break;
                case 10:strcat(Result,"A");
                        break;
                default:
                        sprintf(buffer,"%d",Remainder);
                        strcat(Result,buffer);
                        break;
            }
        }
        else
        strcat(Result,"0");

    }
Count++;
//Reverse the string to print in correct order
return reverse(Result);


}

//This function converts Decimal to Binary
char* NumConvert::parseDecToBin(int decNum)
{
    int Remainder;
    char *Result=new char();


    while(decNum>0)
    {
        Remainder=decNum%2;
        decNum=decNum/2;
        if(Remainder==0)
        strcat(Result,"0");
        else
        strcat(Result,"1");
    }
    Count++;
    return reverse(Result);

}
//This function stores the number of conversions made
int NumConvert::numConversion()
{

    return Count;
}


int main()
{
    NumConvert obj;

    //Parse hex demo
    
    cout<<obj.parseHex("ABCDEF")<<endl;

    //Parse Binary demo
    cout<<obj.parseBin("1111")<<endl;

    //deicmal to hex demo
    cout<<obj.parseDecToHex(1382923)<<endl;

    //Binary to hex demo
    cout<<obj.parseDecToBin(1111)<<endl;

    //Total Number of Conversions
    
    cout<<endl<<"No. of conversions "<<obj.numConversion()<<endl;
}





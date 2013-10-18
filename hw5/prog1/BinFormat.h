/*
* HexFormat.h
* Declares and Defines Exception class for a binary format exception

*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 , RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01, RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/08/2012 1.45 PM
*
*/
#ifndef _BINFORMAT_H
#define _BINFORMAT_H
#include<exception>
class BinFormatException : public std::exception
{
    virtual const char* what() const throw()
{
        return "BinFormatException";
}
}BinException;
#endif

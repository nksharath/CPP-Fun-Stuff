/*
pattern.cpp     : Search's for a given string pattern
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.1
*@LastModified  : 10/15/2012 8.25 PM
*
*/
#include <iostream>
#include <vector>
#include<string>
#include<fstream>
#include "pattern.h"

//This function searchs for the pattern match
void Pattern::PatternMatch()
{
    //Initializing the array of vectors based on length of the word in input file
    for(int i=0;i<ReadDict.size();i++    )
    {

        string s=ReadDict[i];

        Dict[s.size()].push_back(s);
    }
    cout<<endl<<"Enter the String ";
    string Input;
    cin>>Input;
    //calculating the length of the input string
    int len=Input.size();
    //ch is a local counter for to traverse character by character in a string
    //count is the local variable of each word in an array index of a vector
    //DotCount counts  the number of wildcard entries (.)
    int ch=0;int count=0;int flag=0;int DotCount=0;
    for(int i=0;i<Dict[len].size();i++)
    {
        while(count<len)
        {
            //Checking if if character is a .
            if(Input.at(ch)=='.')
            {
                DotCount++;
                ch++;count++;
                if(DotCount==len)
                flag=1;
                continue;
            }
            else
            {
                //Storing individual characters for comparison
                char a=Dict[len][i].at(ch);
                char b=Input.at(ch);
            //Checking if the two characters match at the same index.
                if(a==b)
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            }
            count++;
            ch++;

        }
        //Prints if flag conditions are true
        if(flag==1)
        cout<<endl<<Dict[len][i];
        count=0;
        ch=0;
 }
}




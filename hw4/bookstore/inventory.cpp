/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/28/2012 1.25 PM
*
*/
#include "inventory.h"
#include<iostream>
using namespace std;

//Every subclass calls IsAvailable to check if user query is available

int Inventory::IsAvailable(string inp,Inventory Object)
{
        string author=Object.Author;
        string title=Object.Title;
        std::transform(inp.begin(), inp.end(),inp.begin(), ::toupper);
        std::transform(author.begin(), author.end(),author.begin(), ::toupper);
        std::transform(title.begin(), title.end(),title.begin(), ::toupper);

        int available1=author.find(inp);
        int available2=title.find(inp);
        return(available1!=string::npos || available2!=string::npos);

}

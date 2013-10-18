/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/23/2012 11.15 AM
*
*/

#include "date.h"
#include <cstdlib>

using namespace std;
//Invoking main function
int main()
{
    //Declaring object1 that is initialized using paramterised constructor
    Date object1(02,29,2000);
    Date object2;

    //object2 uses GetData to fetch all required data
    object2.GetData();


    bool result1,result2;
    //bool to check if dates are valid
    result1=object1.CheckDate();
    result2=object2.CheckDate();

    //Check if first date is valid
    if(!result1)
    {
     cout<<" First Date Invalid out of the two dates ";
     exit(1);
    }
    //Check if second date is valid
    if(!result2)
    {
        cout<<"Second Date Invalid out of the two dates ";
        exit(1);
    }
    //Dislays the first date in two formats
    object1.DisplayDate(object1.Month,object1.Day,object1.Year);
    //Displays the second date in two formats
    object2.DisplayDate(object2.Month,object2.Day,object2.Year);
}


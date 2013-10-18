/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/23/2012 11.15 AM
*
*/
#include "date.h"
#include<time.h>
#include<stdio.h>

//Constructor initializing the instance variables
Date::Date()
    {
        Day=1;
        Month=1;
        Year=2011;

    }
//Parameterized constructor initializing the instance variables
Date::Date(int m,int d,int y)
    {
        Day=d;
        Month=m;
        Year=y;
    }

//Checks if the date is valid or not
//Checks for leap years
//Checks for 30/31 days for corresponding month
bool Date::CheckDate()
    {   //cout<<d<<m;
        struct tm Validate;

        Validate.tm_mday=Day;
        Validate.tm_mon=Month-1;
        Validate.tm_year=Year;

        if(Validate.tm_year>=2012 && Validate.tm_mon>=12 && Validate.tm_mday>=30)
        return false;


        if(mktime(&Validate))
        {
            if(Validate.tm_mon==3 || Validate.tm_mon==6 || Validate.tm_mon==8 || Validate.tm_mon==10)
            {
                if(Validate.tm_mday>=31)
                return false;
            }
            if(Validate.tm_mon==1 && Validate.tm_mday>29)
            return false;
            if(Validate.tm_mon==1 && Validate.tm_mday==29)
            {
                if((Validate.tm_year %4 ==0) && (Validate.tm_year %100 !=0 || Validate.tm_year %400 ==0))
                return true;
                else
                return false;

            }
            return true;
        }
        else
        return false;
    }

//Displays the date in two required formats
    void Date::DisplayDate(int m,int d,int y)
    {
        struct tm display;
        char buff1[120],buff2[120];
        display.tm_mday=d;
        display.tm_mon=m-1;
        display.tm_year=y-1900;

        strftime(buff1,120,"%m/%d/%Y",&display);
        puts(buff1);

        strftime(buff2,120,"%B  %d,%Y",&display);
        puts(buff2);
    }

//GetData fetches date information from the user : for the second object
    void Date::GetData()
    {
        cout<<"\nEnter Month ";
        cin>>Month;
        cout<<"\nEnter Day ";
        cin>>Day;
        cout<<"\nEnter Year ";
        cin>>Year;
    }

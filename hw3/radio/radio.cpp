/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/22/2012 1.25 PM
*
*/

#include "rad.h"

#include<iostream>

//Invoking Main function

int main()
{
    //Declaring objects to invoke constructors
    AM obj1;
    FM obj2;
    radio obj3;

    //Displaying options to the user and calling respective functions
    char ch;
    do
    {
        cout<<"\nPush One : (P)ower, switch (B) and volume (L)ouder or (Q)uieter tune (U)p or (D)own ";
        if(radio::power%2==0)
        cout<<"\nRadio Off";
        cin>>ch;


        switch(ch)
        {
            case 'P': radio::P();
                      break;
            case 'B': radio::B();
                      break;
            case 'L': radio::L();
                      break;
            case 'Q': radio::Q();
                      break;
            case 'U': radio::U();
                       break;
            case 'D': radio::D();
                      break;
            default : cout<<"\nInvalid Choice";
        }


        }while(1); // Program stays alive even if radio is switched off
}


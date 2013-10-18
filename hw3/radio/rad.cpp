/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/22/2012 1.25 PM
*
*/
#include "rad.h"

using namespace std;
//Re-declaration of static variables
int radio::power;
int radio::loud;
int radio::switcher;


//Constructor to Initialise variables
radio::radio()
    {
        power=0;
        loud=0;
        switcher=0;
    }

//P switches radio on or off
void radio::P()
{
    ++radio::power;
    if(radio::power%2!=0)
        if(radio::switcher%2==0)
            cout<<"\nAM "<<AM::MinimumFrequency<<" VOL "<<radio::loud;
        else
            cout<<"\nFM "<<FM::MinimumFrequency<<" VOL "<<radio::loud;
}
//B Switches the mode from FM to AM and vice versa
void radio::B()
{
    if(radio::power%2!=0)
                      {
                          radio::switcher++;
                          if(radio::switcher%2==0)
                          cout<<"\nAM "<<AM::MinimumFrequency<<" VOL "<<radio::loud;
                          else
                          cout<<"\nFM "<<FM::MinimumFrequency<<" VOL "<<radio::loud;
                      }
}
//L increases the volume level
void radio::L()
{
    if(radio::power%2!=0)
                      {

                          radio::loud++;
                          if(radio::switcher%2==0)
                          cout<<"\nAM "<<AM::MinimumFrequency<<" VOL "<<radio::loud;
                          else
                          cout<<"\nFM "<<FM::MinimumFrequency<<" VOL "<<radio::loud;
                      }
}
//Q decreases the volume level
void radio::Q()
{
    if(radio::power%2!=0)
                      {
                          radio::loud--;
                          if(radio::switcher%2==0)
                          cout<<"\nAM "<<AM::MinimumFrequency<<" VOL "<<radio::loud;
                          else
                          cout<<"\nFM "<<FM::MinimumFrequency<<" VOL "<<radio::loud;
                      }
}
//Frequency tune up and wraps around min and max frequency values
void radio::U()
{
    if(radio::power%2!=0)
                      {
                        if(radio::switcher%2==0)
                        {
                            if(AM::MinimumFrequency>=AM::MaximumFrequency)
                                AM::MinimumFrequency=40;
                            AM::MinimumFrequency=AM::MinimumFrequency+AM::FrequencyIncreament;
                        cout<<"\nAM "<<AM::MinimumFrequency<<" VOL "<<radio::loud;
                        }
                        else
                        {
                            if(FM::MinimumFrequency>=FM::MaximumFrequency)
                                FM::MinimumFrequency=40;
                            FM::MinimumFrequency=FM::MinimumFrequency+FM::FrequencyIncreament;
                        cout<<"\nFM "<<FM::MinimumFrequency<<" VOL "<<radio::loud;
                        }
                      }
}
//Frequency tune down and wraps around min and max frequency values
void radio::D()
{
    if(radio::power%2!=0)
    {
        if(radio::switcher%2==0)
        {
            if(AM::MinimumFrequency<=50)
            AM::MinimumFrequency=160;

            AM::MinimumFrequency-=AM::FrequencyIncreament;
            cout<<"\nAM "<<AM::MinimumFrequency<<" VOL "<<radio::loud;
        }
        else
        {
            if(FM::MinimumFrequency<=50)
            FM::MinimumFrequency=60;

            FM::MinimumFrequency-=FM::FrequencyIncreament;
            cout<<"\nFM "<<FM::MinimumFrequency<<" VOL "<<radio::loud;
        }
    }
}

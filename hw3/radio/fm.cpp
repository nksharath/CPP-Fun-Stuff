/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/22/2012 1.25 PM
*
*/
#include "fm.h"

//Re-declaration of static variables
int FM::MinimumFrequency;
int FM::MaximumFrequency;
int FM::FrequencyIncreament;
//Initializing static variables
FM::FM()
    {
        MinimumFrequency=50;
        MaximumFrequency=150;
        FrequencyIncreament=10;
    }

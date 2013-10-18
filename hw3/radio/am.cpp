/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.1
*@LastModified  : 09/22/2012 1.25 PM
*
*/
#include "am.h"

// Re-declration of static variables

int AM::MinimumFrequency;
int AM::MaximumFrequency;
int AM::FrequencyIncreament;
//Initializing static variables
AM::AM()
    {
        MinimumFrequency=50;
        MaximumFrequency=150;
        FrequencyIncreament=10;
    }

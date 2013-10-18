/*
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01
*@Author        : Pratik Mehta : : Batch : 4003-700-01
*@Version       : 1.0.6
*@LastModified  : 09/09/2012 1.44 PM
*
*/





#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>

#define MAX 100000

using namespace std;

//Funtion Signatures for functions generating primes, calculating distance and to display data

void IsPrime();
void CalculateDistance();
void DisplayData();

int LowerBound,UpperBound; // Prime No.s are generated within these limits
int Distance;// The distance between lower and upper bound of prime pairs.
int PrimeNos[MAX];
int k=0; // A count to keep tract of number of of prime's generated.

vector < pair<pair<int,int>,int > > PrimePairs; // vector->pair->pair stores ( Prime1,Prime2,Distance ) where Prime1 and Prime2 are prime pairs.

// A function that sort's a vector based upon Distance ( vector.second.second )
bool SortVector(pair<pair<int,int>,int> p1,pair<pair<int,int>,int> p2)
{
    return p1.second<p2.second;
}


int main()
{
    //Getting the Limits from the user
    cout<<"Enter Lower and Upper Bounds\n";
    cin>>LowerBound>>UpperBound;

    //Initialising the Array - To store primes.
    for(int i=0;i<UpperBound;i++)
    PrimeNos[i]=0;

    IsPrime();// This function generates prime numbers between the user defined limits.
    CalculateDistance();//This function Calculates distances between prime pairs
    DisplayData();//Display's the sorted vector.

}


void IsPrime()
{
    for(int i=LowerBound;i<=UpperBound;i++)
    {
        bool flag=true;

      for(int j=2;j<=i/2;j++)
      {
          if(i%j==0) // Primality test from 2 to n/2 to check if the number is a prime.
          {
              flag=false;
              break;
          }

      }

      if(flag==true)
      {
          PrimeNos[k]=i;// Storing primes if primality test is TRUE
          k++;

      }
    }

    if(PrimeNos[0]==0 || PrimeNos[1]==0 )// Exception : We need atleast two prime numbers to calculate the distance.
    {
        cout<<endl<<"We atleast need two prime numbers to evaluate distance"<<endl;
        exit(1);
    }

}

void CalculateDistance()
{
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {

            Distance=PrimeNos[j]-PrimeNos[i]; // Calculating the distance between prime pairs.

            PrimePairs.push_back(make_pair(make_pair(PrimeNos[i],PrimeNos[j]),Distance)); // storing the prime pairs and distance in the vector.

        }


    }

}

void DisplayData()
{
     sort(PrimePairs.begin(),PrimePairs.end(),SortVector);//Sorting the Vector over distance, by a user-defined function SortVector

     // The following code displays the vector in required format, Grouping all prime pairs under the same distance.

    cout<<endl<<"Distance =\t"<<PrimePairs[0].second;
    cout<<"\n\t"<<PrimePairs[0].first.first<<"\t"<<PrimePairs[0].first.second<<endl;

    for(int i=1;i<PrimePairs.size();i++)
    {
        if(PrimePairs[i].second==PrimePairs[i-1].second)
        cout<<"\n\t"<<PrimePairs[i].first.first<<"\t"<<PrimePairs[i].first.second<<endl;

        else
       {

        cout<<"\nDistance =\t"<<PrimePairs[i].second;
        cout<<"\n\t"<<PrimePairs[i].first.first<<"\t"<<PrimePairs[i].first.second<<endl;
       }

    }
}












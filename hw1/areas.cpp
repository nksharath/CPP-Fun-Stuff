/*
*@Author        : Sharath Navalpakkam Krishnan
*@Author        : Pratik Dilip Mehta
*@Version       : 1.0.0
*@LastModified  : 09/09/2012 2.00 PM
*
*/
#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;

//This function calculates the area of a Square
int AreaSquare(int Side )
{
    return Side*Side;
}

//This function calculates the area of a Circle
double AreaCircle(int Radius)
{
    return PI*Radius*Radius;
}

//This function calculates the area of a Triangle using Heron's formula.
double AreaTriangle(int Side[])
{
    int SemiPerimeter=(Side[1]+Side[2]+Side[3])/2;
    double Expr=(SemiPerimeter)*(SemiPerimeter-Side[1])*(SemiPerimeter-Side[2])*(SemiPerimeter-Side[3]);

    if(Expr<=0)
        return 0;

    else
    return sqrt(Expr);

}

//Reads data from user
void GetData()
{
    char Choice;
    int Side;
    char ch;
    do
    {
        cout<<"\n(S)quare, (C)ircle or (T)riangle ? ";
        cin>>Choice;// Reads user choice.
        switch(Choice)
            {
                case 'S': cout<<"\nEnter the side of the square : ";

                          cin>>Side;
                          cout<<"\nArea is "<<AreaSquare(Side);// Calculates Area of Square
                          break;

                case 'C': cout<<"\nEnter the Radius of Circle : ";

                          cin>>Side;
                          cout<<"\nArea is "<<AreaCircle(Side);//Calculates Area of Circle
                          break;

                case 'T': {
                          int TSide[3];
                          for(int i=1;i<=3;i++)
                          {
                              cout<<"\nEnter length of Side "<<i<<" : ";
                              cin>>TSide[i];// Read's three sides of a triangle
                          }
                          double Result=AreaTriangle(TSide);// Calculate Area of Triangle

                          if(Result==0)// Exception : when heron's formula evaluates to a negative square root.
                          cout<<"\n No Such Trinagle ";

                          else
                          cout<<"\nArea is "<<Result;
                          break;
                          }

                default: cout<<"\n Sorry Please Enter S,C or T\n";// Accepts only S,C or T as per problem definition.
                          continue;
            }



        cout<<"\nAnother Shape (Y/N)? ";
        cin>>ch;
    }while(ch!='N' && ch!='n');// While the user wants to quit program.

}

int main()
{
    GetData();// Get all data from User.

}

/*
backtrack.cpp   : Main method definition , and templated Solve method to find solution for constraint satisfaction problems
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/22/2012 4.30 AM
*
*/
#include <iostream>
#include<vector>
#include"Temp.h"
#include"graph.h"
#include"latin.h"

using namespace std;

//Flag to check if solution exists for a given constraint satisfaction problem
static int flag=0;

//Templated solve function that solves constraint satisfaction problems , given a configuration object
template<class T>
T Solve(T config)
{
    //checks if all variables has been assigned
    if(config.HasAllVariablesAssigned())
    return config;

    //stores the generated neighbour in a vector
    vector<T> neighbors=config.genNeighbors();
    T Result;

    // checks for each neighbour
     for(int i=0;i<neighbors.size();i++)
    {
        //if the constraints are satisfied : recursive backtracking
        if(neighbors[i].CheckConstraints())
        Result=Solve(neighbors[i]);


        if(Result.HasAllVariablesAssigned() && Result.CheckConstraints()) {
           break;
        }

    }
    //If a solution has been found : set flag =1 and return solution
    if(Result.HasAllVariablesAssigned() && Result.CheckConstraints())
        flag=1; return Result;


}

int main()
{
    //Creating object for Graph coloring problem
    Graph obj1;
    int size1=sizeof(obj1.VertexColors)/sizeof(obj1.VertexColors[0]);
    obj1.VertexColors[0] = 1;
    obj1.NumAssigned = 1;
    //passing the configuration object as input to solve method
    Graph result1=Solve(obj1);

    if(flag==1)
    {
        cout<<endl<<"Solution for Puzzle 1 : Graph Colouring "<<endl;

        for(int i=0;i<size1;i++)
            cout<<endl<<"Vertex "<<i<<":"<<result1.VertexColors[i]<<endl;
    }
    if(flag==0)
        cout<<"No Solution";

    cout<<endl<<endl;

    //Setting flag=0 for second puzzle
    flag=0;
    //creating a object of Latin class : for Latin Square puzzle
    Latin obj2;
    int size2=sizeof(obj2.VertexColors)/sizeof(obj2.VertexColors[0]);
    obj2.VertexColors[0]=1;
    obj2.NumAssigned=1;
    //obj2.DisplayAdjacency();
    //passing the configuration object as input to solve method
    Latin result2=Solve(obj2);

    if(flag==1)
    {
        cout<<endl<<"Solution for Puzzle 2 : Latin Square (4x4)"<<endl;
        for(int i=0;i<size2;i++)
            {
            cout<<result2.VertexColors[i]<<"  ";
            if((i+1)%17==0)
            cout<<endl;

            }
    }

    if(flag==0)
    cout<<"No Solution";
}


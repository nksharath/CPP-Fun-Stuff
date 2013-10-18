/*
latin.cpp       : class definition for solving constraint satisfaction problems : Latin Square Problem
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/22/2012 4.30 AM
*
*/
#include"latin.h"
#include<string.h>
//Constructor specifying input for the puzzle
Latin::Latin()
{
    // There are four numbers 1,2,3,4 that can be placed in a 4X4 Latin square

    int temp1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    memcpy(Colors,temp1,sizeof(temp1));

    //Initializing all vertices to -1
    for(int i=0;i<289;i++)
    {
        VertexColors[i]=-1;
    }

    //Example of a solution : With constraints given as per question
    VertexColors[0] = 1;
    /*
    VertexColors[3] =3;
    VertexColors[5] =2;
    VertexColors[10] =3;
    VertexColors[15] =4;*/


    //Example of another possible solution
    /*
    VertexColors[0] = 1;
    VertexColors[3] =4;
    VertexColors[5] =1;
    VertexColors[10] =1;
    VertexColors[15] =1;
    */

    //No Solution Example : Input where the diagonals are the same.
    /*VertexColors[0] = 3;
    VertexColors[3] =1;
    VertexColors[5] =3;
    VertexColors[10] =3;
    VertexColors[15] =3;*/

    //Specifies the number of vertices
    NumVertices=289;
    //Number of vertices already assigned :
    NumAssigned=5;
    int row=17;
    int column=17;
    //Generating the graph from grid : Building the adjacency matrix
    for(int i=0;i<row*column;i++)
    {
        for(int j=0;j<row*column;j++)
        {
            if(((i/column)==(j/column)) || ((j%column)==i%column))
            AdjacencyMatrix[i][j]=1;
            else
            AdjacencyMatrix[i][j]=0;
        }
    }


}
//Displays the adjacency matrix : Used for test purposes only
void Latin::DisplayAdjacency()
{
    cout<<"Adjacency Matrix for 4X4 Latin Square"<<endl;
    for(int i=0;i<289;i++)
    {
        for(int j=0;j<289;j++)
        {
            cout<<AdjacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//checks if all constraints are satisfied
bool Latin::CheckConstraints()
{

    for(int i=0;i<(sizeof(AdjacencyMatrix)/sizeof(AdjacencyMatrix[0]));i++)
    {

        for(int j=0;j<(sizeof(AdjacencyMatrix)/sizeof(AdjacencyMatrix[0]));j++)
        {
            //if vertices are connected
            if(AdjacencyMatrix[i][j]==1)
            {
                //if vertices are not colored : and not colored with the same color
                if(i!=j && VertexColors[i]!=-1 && VertexColors[j]!=-1&& VertexColors[i]==VertexColors[j])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

//Checks if all variables have been assigned
bool Latin::HasAllVariablesAssigned()
{
    //if all vertices are assigned : return true
    if(NumAssigned==NumVertices){
    return true;}

    else
    return false;
}

//Generates a vector of neighbor configurations objects for backtracking
vector<Latin> Latin::genNeighbors()
{
    vector<Latin> neighbors;
    int i;


    for(i=0;i<sizeof(VertexColors)/sizeof(VertexColors[0]);i++)
    {
        //if color is not assigned
        if(VertexColors[i]==-1){
            break;
        }
    }

    int notassigned=i;
    for(int j=1;j<=sizeof(Colors)/sizeof(Colors[0]);j++)
    {
        //Creating a neighbor
        Latin graph;
        graph=*this;
        graph.VertexColors[notassigned]=j;
        //Pushing the neighbour to the vector
        neighbors.push_back(graph);
        graph.NumAssigned++;
    }


    return neighbors;

}

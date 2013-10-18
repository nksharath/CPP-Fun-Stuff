/*
graph.cpp       : class definition for solving constraint satisfaction problems : Graph Colouring
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/22/2012 4.30 AM
*
*/
#include"graph.h"
#include<string.h>
Graph::Graph()
{
    /*
     3-----2
     |   / |
     |  /  |
     | /   |
     0-----1
     */
    
    
    int temp1[][4]={{1,1,1,1},{1,1,1,0},{1,1,1,1},{1,0,1,1}};
    
    memcpy(AdjacencyMatrix,temp1,sizeof(temp1));
    int temp2[]={1,2,3};
    memcpy(Colors,temp2,sizeof(temp2));
    int temp3[]={-1,-1,-1,-1};
    memcpy(VertexColors,temp3,sizeof(temp3));
   
    NumVertices=4;
    NumAssigned=0;

    //Example for No Solution
    //AdjacencyMatrix={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,0,1,1}};
    /*
     3-----2
     | \ / |
     |  \  |
     | / \ |
     0-----1
     */

}

//checks if constraints are satisfied
bool Graph::CheckConstraints()
{

    for(int i=0;i<(sizeof(AdjacencyMatrix)/sizeof(AdjacencyMatrix[0]));i++)
    {
        for(int j=0;j<(sizeof(AdjacencyMatrix)/sizeof(AdjacencyMatrix[0]));j++)
        {
            //Checking if two vertices are connected
            if(AdjacencyMatrix[i][j]==1)
            {
                // -1 represnts no color assigned : and also checks if colors are not the same for two adjacent vertices
                if(i!=j && VertexColors[i]!=-1 && VertexColors[j]!=-1&& VertexColors[i]==VertexColors[j])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

//Checks if all variables have been assigned.

bool Graph::HasAllVariablesAssigned()
{
    //If all vertices are coloured : return true
    if(NumAssigned==NumVertices){
    return true;}

    else
    return false;
}

// this method returns a vector of neighbouring configuration objects.
vector<Graph> Graph::genNeighbors()
{
    vector<Graph> neighbors;
    int i;
    for(i=0;i<sizeof(VertexColors)/sizeof(VertexColors[0]);i++)
    {
        //When not assigned a color
        if(VertexColors[i]==-1){
            break;
        }
    }
    int notassigned=i;
    for(int i=1;i<=sizeof(Colors)/sizeof(Colors[0]);i++)
    {
        //Create a neighbour
        Graph graph;
        graph=*this;
        graph.VertexColors[notassigned]=i;
        //build the vector of Graph objects : Neighbours
        neighbors.push_back(graph);
        graph.NumAssigned++;
    }

    return neighbors;

}


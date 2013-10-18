/*
graph.h         : class declaration with required functions for solving constraint satisfaction problems : Graph Colouring
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/22/2012 4.30 AM
*
*/
#ifndef _GRAPH_H_
#define _GRAPH_H_
#include<iostream>
#include<vector>
#include"Temp.h"
//Inheriting abstract class with type Graph
class Graph : public Temp<Graph>
{
public:
    //Number of colors used for coloring a graph
    int Colors[3];
    //Adjacency Matrix to represent connected vertices
    int AdjacencyMatrix[4][4];
    //To count the number of vertices to which a color is assigned
    int NumAssigned;
    //An array storing the color of each vertex
    int VertexColors[4];
    //Total number of vertices in a graph
    int NumVertices;

public:
//Constructor initializes the input for the puzzle
Graph();
//checks if all constraints have been satisfied
bool CheckConstraints();
//checks if all variables have been assigned
bool HasAllVariablesAssigned();
//generate all neighbours and push back into a vector
vector<Graph> genNeighbors();
};
#endif

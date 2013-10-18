/*
latin.h         : class declaration with required functions for solving constraint satisfaction problems : Latin Square
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/22/2012 4.30 AM
*
*/
#ifndef _LATIN_H_
#define _LATIN_H_
#include<iostream>
#include<vector>
#include"Temp.h"
class Latin : public Temp<Latin>
{
public:
    //Here colors represent numbers from 1-4 :

    int Colors[17];
    //An adjacency matrix to solve 4X4 latin square problem
    int AdjacencyMatrix[289][289];
    //Count on how many vertices have been assigned a color
    int NumAssigned;
    //Storing vertices and its corresponding colors
    int VertexColors[289];
    //Number of vertices
    int NumVertices;

public:
//Constructor initializes the input to the puzzle
Latin();
//displays the adjacency matrix : For test Purposes only
void DisplayAdjacency();
//checks if all constraints are satisfied
bool CheckConstraints();
//checks if all variables have been assigned
bool HasAllVariablesAssigned();
//generating neighbor configuration objects for recursive backtracking
vector<Latin> genNeighbors();
};
#endif

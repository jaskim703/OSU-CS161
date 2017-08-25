/*******************************
**Author: Jasmine Kim
**Date: 7/19/17
**Description: This will define the functions set in the Taxicab.hpp class 
*********************************/

#include <cmath>
#include "Taxicab.hpp"
using namespace std;

Taxicab::Taxicab() //default constructor
{
    xCoord = 0;
    yCoord = 0;
    distanceTraveled = 0;
}

Taxicab::Taxicab(int xCoord, int yCoord)  
{
    getXCoord();
    getYCoord();
    distanceTraveled = 0;
}


int Taxicab::getXCoord()
{
    return xCoord;
}


int Taxicab::getYCoord()
{
    return yCoord;
}

//By using abs, the distance traveled is accurate regardless of whether the Taxicab shifted up/down or left/right.
void Taxicab::moveX(int X)
{
    distanceTraveled += abs(X);
    xCoord += X;
}


void Taxicab::moveY(int Y)
{
    distanceTraveled += abs(Y);
    yCoord += Y;
}

//This function gives us the total distance that was traveled by the Taxicab.
int Taxicab::getDistanceTraveled()
{
    return distanceTraveled;
}



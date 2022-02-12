/******************************************************************
** Author:      Xiaoying Li
** Date:        5/1/2019
** Description: The implementation file for class Taxicab. It has
                three int firlds(data members) to store its 
                current x and y coordinates and the total distance
                it has driven so far. The class has a constructor 
                that takes two parameters and uses them to 
                initialize the coordinates, and also initializes 
                the distance traveled to zero. The class has a 
                default constructor that sets all three fields to 
                zero. The class has a get method for each data 
                member. It has a method called moveX that takes
                an int parameter that tells how far the Taxicab 
                should shift left or right. It has a method 
                called moveY that takes an int parameter that 
                tells how far the Taxicab should shift up or down.  
******************************************************************/


#include <iostream>
#include <cmath>
//Include the header file Taxicab.hpp
#include "Taxicab.hpp"

//Define default contructor and initialize each data member to 0
Taxicab::Taxicab()
{
    xCoord = 0;
    yCoord = 0;
    distanceTraveled = 0;
}

//Define overload contructor to access data member variables
Taxicab::Taxicab(int x, int y)
{
    xCoord = x;
    yCoord = y;
    distanceTraveled = 0;
}

//Define getter function to return the x-coordinate
int Taxicab::getXCoord()
{
    return xCoord;
}

//Define getter function to return the y-coordinate
int Taxicab::getYCoord()
{
    return yCoord;
}

//Define function that takes an int parameter that tells how far
//the Taxicab should shift left or right and calculate the total
//distance on x-coordinate
void Taxicab::moveX(int X)
{
    //Calculate the total distance on x-coordinate 
    distanceTraveled += std::abs(X);
    //Calculate the new x-coordinate
    xCoord += X;
}

//Define function that takes an int parameter that tells how far
//the Taxicab should shift up or down and calculate the total
//distance on y-coordinate
void Taxicab::moveY(int Y)
{
    //Calculate the total distance on y-coordinate 
    distanceTraveled += std::abs(Y);
    //Calculate the new y-coordinate
    yCoord += Y;
}

//Define getter function to return the total distance traveled
int Taxicab::getDistanceTraveled()
{
    return distanceTraveled;
}


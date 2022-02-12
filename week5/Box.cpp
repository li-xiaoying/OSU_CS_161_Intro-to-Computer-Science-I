/************************************************************
** Author:      Xiaoying Li
** Date:        5/1/2019
** Description: The implementation file for class Box. It
                holds the function definitions of the header
                file Box.hpp.
************************************************************/


#include <iostream>
//Include the header file Box.hpp
#include "Box.hpp"

//Define default contructor and initialize each data member
//to 1.0
Box::Box()
{
    height = 1.0;
    width = 1.0;
    length = 1.0;
}

//Define overloading contructor to access data member variables
Box::Box(double h, double w, double l)
{
    height = h;
    width = w;
    length = l;
}

//Define setter functions to make sure h's value is acceptable
void Box::setHeight(double h)
{
    height = h;
}

//Define setter functions to make sure w's value is acceptable
void Box::setWidth(double w)
{
    width = w;
}

//Define setter functions to make sure l's value is acceptable
void Box::setLength(double l)
{
    length = l;
}

//Define function that calculate and return the volume of the
//box
double Box::calcVolume()
{
    return height*width*length;
}

//Define function that calculate and return the surface area
//of the box
double Box::calcSurfaceArea()
{
    return (height*width+height*length+width*length)*2;
}

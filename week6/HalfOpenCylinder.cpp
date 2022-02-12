/********************************************************************
** Author:      Xiaoying Li
** Date:        5/8/2019
** Description: The implementation file for class HalfOpenCylinder,
                which has two data members: a double for the height 
                in inches and a double for the radius in inches. It 
                has a constructor that takes two parameters and uses 
                them to initialize the data members. It has a default 
                constructor that initializes the height to 10 and the
                radius to 2. It has a method named surfaceArea that 
                returns the surface area (in square inches) of a 
                cylinder with that height and radius which is closed 
                on one end but open on the other.
********************************************************************/


#include <iostream>
#include "HalfOpenCylinder.hpp"

//Define default contructor and initialize each data member
HalfOpenCylinder::HalfOpenCylinder()
{
    height = 10;
    radius = 2;
}

//Define overload contructor to access data member variables
HalfOpenCylinder::HalfOpenCylinder(double h, double r)
{
    height = h;
    radius = r;
}

//Define function that returns the surface area of the cylinder
//with the height and radius which is closed on one end but 
//open on the other.
double HalfOpenCylinder::surfaceArea()
{
    //Calculate and return the surface area of the cylinder
    return 3.14159*radius*radius+2*3.14159*radius*height;
}

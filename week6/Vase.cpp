/************************************************************************************
** Author:      Xiaoying Li
** Date:        5/8/2019
** Description: The implementation file for class Vase, which has two data members:
                a HalfOpenCylinder that gives the dimensions of the vase and a 
                double that gives the cost per square inch for the vase. It has a 
                constructor that takes two parameters and uses them to initialized 
                the data members. It has a method named totalCost that returns the 
                surface area of the vase multiplied by its cost per square inch. It 
                has a method named costsMoreThan that takes a Vase parameter and 
                returns true if the Vase the method is called on costs more than the 
                Vase that was passed as a parameter. Otherwise it returns false.
************************************************************************************/


#include <iostream>
#include "Vase.hpp"

//Define contructor that takes two parameters and uses them to initialized the
//data members
Vase::Vase(HalfOpenCylinder dimensions, double perCost)
{
    dimensionsOfVase = dimensions;
    costPerSquareInch = perCost;
}

//Define function that returns the surface area of the vase multiplied by its 
//cost per square inch
double Vase::totalCost()
{
    return costPerSquareInch*dimensionsOfVase.surfaceArea();
}

//Define function that takes a Vase parameter and returns true if the Vase the 
//method is called on costs more than the Vase that was passed as a parameter. 
//Otherwise it returns false.
bool Vase::costsMoreThan(Vase vase)
{
    //If the Vase the method is called on costs more than the Vase that was
    //passed as a parameter, return true
    if ( costPerSquareInch*dimensionsOfVase.surfaceArea()>vase.totalCost() )
        return true;
    //Otherwise return false
    else
        return false;
}


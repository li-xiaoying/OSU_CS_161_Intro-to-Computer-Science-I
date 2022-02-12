/***********************************************************
** Author:      Xiaoying Li
** Date:        5/8/2019
** Description: The header file for class Vase, which has 
                two data members: a HalfOpenCylinder that 
                gives the dimensions of the vase and a 
                double that gives the cost per square inch
                for the vase. It has a constructor that 
                takes two parameters and uses them to 
                initialized the data members. It has a 
                method named totalCost that returns the 
                surface area of the vase multiplied by its
                cost per square inch. It has a method named
                costsMoreThan that takes a Vase parameter 
                and returns true if the Vase the method is 
                called on costs more than the Vase that was 
                passed as a parameter. Otherwise it returns 
                false.
***********************************************************/


#ifndef VASE_HPP
#define VASE_HPP
#include "HalfOpenCylinder.hpp"

//Vase class declaration
class Vase
{
//Private data members
private:
    HalfOpenCylinder dimensionsOfVase;
    double costPerSquareInch;

//Function declaration
public:
    //Constructor to initialized the data members
    Vase(HalfOpenCylinder, double);
    //Function that returns the surface area of the
    //vase multiplied by its cost per square inch
    double totalCost();
    //Function that takes a Vase parameter and returns
    //true if the Vase the method is called on costs 
    //more than the Vase that was passed as a parameter.
    //Otherwise it returns false.
    bool costsMoreThan(Vase);
};

#endif

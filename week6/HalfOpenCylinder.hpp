/**************************************************************
** Author:      Xiaoying Li
** Date:        5/8/2019
** Description: The header file for class HalfOpenCylinder,
                which has two data members: a double for 
                the height in inches and a double for the
                radius in inches. It has a constructor that
                takes two parameters and uses them to 
                initialize the data members. It has a default
                constructor that initializes the height to 10
                and the radius to 2. It has a method named
                surfaceArea that returns the surface area (in 
                square inches) of a cylinder with that height 
                and radius which is closed on one end but open 
                on the other.
**************************************************************/


#ifndef HALFOPENCYLINDER_HPP
#define HALFOPENCYLINDER_HPP

//HalfOpenCylinder class declaration
class HalfOpenCylinder
{
//Private date members
private:
    double height;
    double radius;

//Function declaration
public:
    //Default constructor
    HalfOpenCylinder();
    //Overload constructor to initialize the data members
    HalfOpenCylinder(double, double);
    //Function that returns the surface area of a cylinder
    //which is closed on one end but open on the other
    double surfaceArea();
};

#endif

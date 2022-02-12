/****************************************************************************
** Author:      Xiaoying Li
** Date:        5/26/2019
** Description: The implementation file for class Quadratic, which has three 
                double data members, one for each of the coefficients a, b 
                and c. It has a default constructor that initializes each 
                coefficient to 1.0. It has a constructor that takes three 
                parameters and uses them to initialize the data members. It 
                has set methods for each data member: setA, setB and setC. 
                It has a method named valueFor that takes as a double 
                parameter the value to use for x, which returns the value of 
                the Quadratic (ax2+bx+c) given that value of x. It has a 
                method called calcDiscriminant that takes no parameters and 
                returns the discriminant of the Quadratic.
****************************************************************************/

#include <iostream>
#include "Quadratic.hpp"

//Define default constructor that initializes each coefficient to 1.0
Quadratic::Quadratic()
{
    a = 1.0;
    b = 1.0;
    c = 1.0;
}

//Define constructor that takes three parameters and uses them to
//initialize the data member
Quadratic::Quadratic(double A, double B, double C)
{
    a = A;
    b = B;
    c = C;
}

//Define setter function for data menber a
void Quadratic::setA(double A)
{
    a = A;
}

//Define setter function for data menber b
void Quadratic::setB(double B)
{
    b = B;
}

//Define setter function for data menber c
void Quadratic::setC(double C)
{
    c = C;
}

//Define method that takes as a double parameter the value to use for x 
//and returns the value of the Quadratic (ax2+bx+c) given that value of x
double Quadratic::valueFor(double x)
{
    return a*x*x+b*x+c;
}

//Define method that returns the discriminant of the Quadratic
double Quadratic::calcDiscriminant()
{
    return b*b-4*a*c;
}

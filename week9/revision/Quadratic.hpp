/**********************************************************
** Author:      Xiaoying Li
** Date:        5/29/2019
** Description: The header file for class Quadratic, which 
                has three double data members, one for 
                each of the coefficients a, b and c. It 
                has a default constructor that initializes
                each coefficient to 1.0. It has a 
                constructor that takes three parameters 
                and uses them to initialize the data 
                members. It has set methods for each data 
                member: setA, setB and setC. It has a 
                method named valueFor that takes as a 
                double parameter the value to use for x, 
                which returns the value of the Quadratic 
                (ax2+bx+c) given that value of x. It has a 
                method called calcDiscriminant that takes 
                no parameters and returns the discriminant 
                of the Quadratic.
**********************************************************/


#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP

//Quadratic class declaration
class Quadratic
{
//Private data members
private:
    double a;
    double b;
    double c;

//Function declaration
public:
    //Default constructor
    Quadratic();
    //Constructor initializes the data members
    Quadratic(double, double, double);
    //Set methods for each data member
    void setA(double);
    void setB(double);
    void setC(double);
    //Method returns the value of the Quadratic
    //(ax2+bx+c) given by the value of x
    double valueFor(double);
    //Method returns the discriminant of the Quadratic
    double calcDiscriminant();
};

#endif

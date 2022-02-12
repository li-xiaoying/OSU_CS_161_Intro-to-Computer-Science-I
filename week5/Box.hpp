/********************************************************************
** Author:      Xiaoying Li
** Date:        5/1/2019
** Description: A header file for class Box, which has three private
                data menbers heigth, width and length, as well as
                five public function declarations.
********************************************************************/


#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
//Private data members
private:
    double height;
    double width;
    double length;

//Function declaration
public:
    //Default contructor
    Box();
    //Overloading constructor
    Box(double h, double w, double l);
    //Setter functions
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    //Function that calculate and return the volume of the box
    double calcVolume();
    //Function that calculate and return the surface area of the box
    double calcSurfaceArea();
};

#endif

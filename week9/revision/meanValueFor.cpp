/****************************************************************
** Author:      Xiaoying Li
** Date:        5/29/2019
** Description: This function takes two parameters: a vector of 
                pointers to Quadratics and a value to use for x. 
                It returns the average value of all the 
                Quadratics pointed to by the vector's elements, 
                using the second parameter as the value of x for 
                each Quadratic.
****************************************************************/


#include <iostream>
#include <vector>
#include "Quadratic.hpp"

//Function header
double meanValueFor(std::vector<Quadratic*> vec, double x)
{
    //Get the size of the vector
    int size=vec.size();
    double totalValue=0.0;

    //Calculate the sum of value of all the Quadratics pointed
    //to by the vector's elements, using the second parameter 
    //as the value of x for each Quadratic
    for( int i=0; i<size; i++ ){
        totalValue+=vec.at(i)->valueFor(x);
    }

    //Calculate and return the average value of all the 
    //Quadratics pointed to by the vector's elements
    return totalValue/size;
}

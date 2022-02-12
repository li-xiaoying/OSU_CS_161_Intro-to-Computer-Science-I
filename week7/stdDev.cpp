/***************************************************************
** Author:      Xiaoying Li
** Date:        5/15/2019
** Description: This function takes two parameters: an array of 
                Person objects and the size of the array, and 
                returns the standard deviation of all the ages.
***************************************************************/


#include <iostream>
#include <cmath>
#include "Person.hpp"

//Function header
double stdDev(Person array[], int size)
{
    double totalAge=0.0;
    double meanAge=0.0;
    double totalDeviation=0.0;
    double standardDeviation=0.0;

    //Calculate the sum of all the ages
    for( int i=0; i<size; i++ ){
        totalAge+=array[i].getAge();
    }

    //Calculate the mean of all the ages
    meanAge=totalAge/size;

    //Calculate the sum of the power of all the ages minus mean
    for( int i=0; i<size; i++ ){
        totalDeviation+=pow((array[i].getAge()-meanAge), 2.0);
    }

    //Calculate the standard deviation of all the ages
    standardDeviation=sqrt(totalDeviation/size);
    //Return the standard deviation of all the ages
    return standardDeviation;
}

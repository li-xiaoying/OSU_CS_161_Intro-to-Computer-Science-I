/*******************************************************************
** Author:      Xiaoying Li
** Date:        5/15/2019
** Description: The implementation file for class Person, which has 
                two data members: a string variable called name and 
                a double variable called age. It has a constructor 
                that takes two values and uses them to initialize 
                the data members. It has get methods for both data 
                members.
*******************************************************************/


#include <iostream>
//Include the header file 
#include "Person.hpp"

//Define constructor takes two values and uses them to initialize 
//the data members
Person::Person(std::string initializedName, double initializedAge)
{
    name = initializedName;
    age = initializedAge;
}

//Define getter function to return the name
std::string Person::getName()
{
    return name;
}

//Define getter function to return the age
double Person::getAge()
{
    return age;
}

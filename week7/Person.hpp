/**************************************************
** Author:      Xiaoying Li
** Date:        5/15/2019
** Description: The header file for class Person, 
                which has two data members: a 
                string variable called name and a 
                double variable called age. It 
                has a constructor that takes two 
                values and uses them to initialize
                the data members. It has get 
                methods for both data members.
**************************************************/


#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

//Person class declaration
class Person
{
//Private data members
private:
    std::string name;
    double age;

//Function declaration
public:
    //Constructor initializes the data members
    Person(std::string, double);
    //Getter function for both data members
    std::string getName();
    double getAge();
};    

#endif

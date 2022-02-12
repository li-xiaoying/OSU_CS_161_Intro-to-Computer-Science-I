/********************************************************
** Author:      Xiaoying Li
** Date:        5/1/2019
** Description: A header file for class Taxicab. It has
                three int firlds(data members) to store
                its current x and y coordinates and the
                total distance it has driven so far. The
                class has a constructor that takes two 
                parameters and uses them to initialize 
                the coordinates, and also initializes 
                the distance traveled to zero. The class
                has a default constructor that sets all
                three fields to zero. The class has a
                get method for each data member. It has 
                a method called moveX that takes an int 
                parameter that tells how far the Taxicab 
                should shift left or right. It has a
                method called moveY that takes an int
                parameter that tells how far the Taxicab
                should shift up or down.  
*********************************************************/


#ifndef TAXICAB_HPP
#define TAXICAB_HPP

//Taxicab class declaration
class Taxicab
{
//Private data members
private:
    int xCoord;
    int yCoord;
    int distanceTraveled;

//Function declaration
public:
    //Default constructor
    Taxicab();
    //Overload constructor
    Taxicab(int, int);
    //Getter functions
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    //Function that takes an int parameter that tells 
    //how far the Taxicab should shift left or right
    void moveX(int);
    //Function that takes an int parameter that tells 
    //how far the Taxicab should shift up or down
    void moveY(int);
};

#endif

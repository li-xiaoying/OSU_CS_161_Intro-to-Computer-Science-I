/**********************************************************
** Author:      Xiaoying Li
** Date:        4/24/2019
** Description: This function return the distance in meters
                that an object falls due to gravity in a 
		specific time peried.
**********************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Function prototype
double fallDistance(double time, double g=9.8);

int main()
{
    double distance, fallTime;
    cout << "Please enter the falling time." << endl;
    cin >> fallTime;
    distance = fallDistance(fallTime);
    cout << distance << endl;
    return 0;
}

//Function header
double fallDistance(double time, double g)
{   
    //return value
    return g*time*time/2;
}

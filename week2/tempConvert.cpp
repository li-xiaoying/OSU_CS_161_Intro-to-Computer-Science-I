/*************************************************************************
** Author:      Xiaoying Li
** Date:        4/9/2019
** Description: Coverts Celsius temperatures to Fahrenheit temperatures.
*************************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double F,C;
    cout << "Please enter a Celsius temperature." << endl;
    cin >> C;
    F=9*C/5+32;
    cout << "The equivalent Fahrenheit temperature is:\n" << F << endl;

    return 0;
}

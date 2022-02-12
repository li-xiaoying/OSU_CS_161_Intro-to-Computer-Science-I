/************************************************************************
** Author:      Xiaoying Li
** Date:        5/8/2019
** Description: This recursive function takes two positive integers as
                parameters and returns the product of those two numbers.
************************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int multiply(int, int);

int main()
{
    int integerOne, integerTwo, product;
    cout << "Please enter two positive integers." << endl;
    cin >> integerOne;
    cin >> integerTwo;
    product=multiply(integerOne, integerTwo);
    cout << "The product of those two numbers is " << product << endl;
    return 0;
}

int multiply(int integer1, int integer2)
{
    if( integer1==1 )
        return integer2;
    else
        return multiply(integer1-1, integer2)+integer2;
}


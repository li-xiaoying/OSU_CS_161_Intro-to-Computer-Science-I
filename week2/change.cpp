/******************************************************************************************************************************************************************************************
** Author:      Xiaoying Li
** Date:        4/9/2019
** Description: Asks the user for a (integer) number of cents, from 0 to 99, and outputs how many of each type of coin would represent that amount with the fewest total number of coins.
******************************************************************************************************************************************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int cent,Q,D,N,P;
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cent;
    Q=cent/25;
    D=(cent-Q*25)/10;
    N=(cent-Q*25-D*10)/5;
    P=cent-Q*25-D*10-N*5;
    cout << "Your change will be:" 
         << "\nQ: " << Q 
         << "\nD: " << D
         << "\nN: " << N
         << "\nP: " << P << endl;

    return 0;
}


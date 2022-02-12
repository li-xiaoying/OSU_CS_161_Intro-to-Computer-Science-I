/*************************************************************************************************
** Author:      Xiaoying Li
** Date:        4/10/2019
** Description: Asks the user for five numbers and then prints out the average of those numbers.
*************************************************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double num1,num2,num3,num4,num5;
    cout << "Please enter five numbers." << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    double average=(num1+num2+num3+num4+num5)/5;
    cout << "The average of those numbers is:\n" << average << endl;

    return 0;
}

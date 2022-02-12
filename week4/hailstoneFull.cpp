/*******************************************************
** Author:      Xiaoying Li
** Date:        4/24/2019
** Description: 
*******************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int hailstone(int startInt);

int main()
{
    int positiveInt, count;
    cout << "Please enter a positive integer." << endl;
    cin >> positiveInt;
    count = hailstone(positiveInt);
    cout << count << endl;
    return 0;
}

int hailstone(int startInt)
{
    int counter=0;	
    while ( startInt > 1 )
    {        
	if ( startInt%2 == 0 )
	{    startInt=startInt/2;
             counter++;
	} 
	else
        {    startInt=startInt*3+1;
	     counter++;
	}
    }
    return counter;
}

	


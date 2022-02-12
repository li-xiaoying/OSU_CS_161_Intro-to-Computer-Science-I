/*************************************************************************
** Author:      Xiaoying Li
** Date:        4/16/2019
** Description: Asks the user how many integers they would like to enter,
                then prompts the user to enter that many integers, and 
		then display the largest and smallest of those numbers.
*************************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int min, max, numberOfInteger, firstInteger, nextInteger, count;
    
    // Get the number of integers user would like to enter
    // (assume the number>=1) 
    cout << "How many integers would you like to enter?" << endl;
    cin >> numberOfInteger;

    // Ask user to input integers
    cout << "Please enter " << numberOfInteger << " integers." << endl;
    cin >> firstInteger;

    // After user input the first integer, 
    // initialize min and max with the first integer
    min = firstInteger;
    max = firstInteger;
    // Initialize count with the value 1
    count = 1;

    // User input the remaining integers, 
    // the while loop end until user input all integers.
    // if user only want to enter 1 number, 
    // the program will not enter into the while loop
    while ( count < numberOfInteger )
    {
        cin >> nextInteger;

	// If the next integer is smaller than min,
	// then give the value of the next integer to min
	if ( nextInteger < min)
	    min = nextInteger;
	// If the next integer is larger than min, 
	// then give the value of the next integer to max
	if ( nextInteger > max)
	    max = nextInteger;

	// Add 1 to count
	count = count+1;
    }

    // Output the largest and smallest of those integers
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}

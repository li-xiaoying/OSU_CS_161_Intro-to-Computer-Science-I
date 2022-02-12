/*******************************************************
** Author:      Xiaoying Li
** Date:        4/24/2019
** Description: A hailstone sequence starts with some
                positive integer. If that integer is even,
		then divide it by two to get the next 
		integer in the sequence, but if it is odd,
		then multiply it by three and add one to
		get the next integer in the sequence. Then
		use the value just generated to fide the 
		next value, according to the same rules.
                This function takes the starting integer
		as a parameter and returns how many steps
		it take to reach 1.
*******************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
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
*/

//Function header
int hailstone(int startInt)
{
    //Initialize the step counter to 0
    int counter=0;

    //Loop until the value of integer is 1   
    while ( startInt > 1 )
    {        
	
	//If the value of integer is even
	if ( startInt%2 == 0 ){
	    //Devide the integer by two to get the next
	    //integer
            startInt=startInt/2;
            //Add one to the step counter
	    counter++;
	}
    
        //If the value of integer is odd
	else {
	    //multiply the integer by three and add one
	    //to get the next integer
            startInt=startInt*3+1;
	    //Add one to the step counter
	    counter++;
	}
    }

    //Return the valve of how many steps the integer take
    //to reach 1
    return counter;
}

	


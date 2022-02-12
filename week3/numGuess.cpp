/*********************************************************************************
** Author:      Xiaoying Li
** Date:        4/17/2019
** Description: Prompt the user for an integer that the player will try to guess.
                If the play's guess is higher than the target number, display 
		"too high". If the play's guess is lower than the target number, 
		display "too low". Repeat until the player correctly guess the 
		number. Then print how many guesses it took.
*********************************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number, guess, numberOfGuess;

    // Get an integer from user for the player to guess
    cout << "Enter the number for the player to guess." << endl;
    cin >> number;

    // Ask player to guess
    cout << "Enter your guess." << endl;
    cin >> guess;

    // Initialize numberOfGuess with the valve 1
    numberOfGuess = 1;

    // Loop until player correctly guesses the number 
    while ( guess != number )
    {
        // If play's guess is higher than the target number, process it
	if ( guess > number )
        {   cout << "Too high - try again." << endl;
	    cin >> guess;
	    numberOfGuess++;
	}
	// If play's guess is lower than the target number, process it
	if ( guess < number )
        {   cout << "Too low - try again." << endl;
	    cin >> guess;
	    numberOfGuess++;
	}
    }

    // Player correctly guess the number, process it
    cout << "You guessed it in " << numberOfGuess << " tries." << endl;
    
    return 0;
}

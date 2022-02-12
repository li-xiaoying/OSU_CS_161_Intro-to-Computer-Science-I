/***************************************************************
** Author:      Xiaoying Li
** Date:        4/17/2019
** Description: Prints "please enter your filename.",  reads in 
                the name of the file, and then try to open it. 
		If the input file is there and can be opened, 
		reads the list of integers in the file. Then 
		adds together all the integers in the file, 
		creates an outputfile called sum.txt, writes 
	       	the sum to that file, and then prints "result
	       	written to sum.txt". If the input file is not 
		there or is there but couldn't be opened for 
		for some reason, prints out " could not access 
		file".
***************************************************************/


#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string fileName;
    int numberOfInteger, integer, total;
    // initialize numberOfInteger and total with the valve 0
    numberOfInteger = 0;
    total = 0;
    
    // Let user to enter the file name 
    cout << "Please enter your filename." << endl;
    cin >> fileName;
    
    // open the input file
    inputFile.open(fileName);

    // Test for file open errors
    // If the file successfully opened, process it
    if (inputFile)
    {
        // Detecting the end of the file
	// If an integer is read, excute the loop again
	// Loop until the EOF is reached
	while (inputFile >> integer)
        {
            // Count the number of integers
	    numberOfInteger++;
	    // Add the integer to the total
	    total += integer;
        }

	// Create an output file
        outputFile.open ("sum.txt");
	// Write total to the output file
        outputFile << total << endl;

        cout << "result written to sum.txt" << endl;
    }

    // If the file could not be found or opended, process it
    else
        cout << "could not access file" << endl;
    
    // Closing file
    inputFile.close();
    outputFile.close();

    return 0;
}

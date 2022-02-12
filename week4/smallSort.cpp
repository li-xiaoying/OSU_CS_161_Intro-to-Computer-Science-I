/**************************************************************
** Author:      Xiaoying Li
** Date:        4/24/2019
** Description: This function takes three int parameters by
                reference and sorts their values into ascending
		order.
**************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
void smallSort(int &first, int &second, int &third);

int main()
{
    int first, second, third;
    cout << "Please enter three integers." << endl;
    cin >> first;
    cin >> second;
    cin >> third;
    smallSort(first, second, third);
    cout << first << ", " << second << ", " << third << endl;
    return 0;
}
*/

//Function header
void smallSort(int &first, int &second, int &third)
{
    //Variable for switch two numbers
    int temp1, temp2, temp3;  
    
    //If first has the lowet valve, set first to first
    if ( first<=second && first<=third ){
        //if second has the highest value,
	//switch the value of second and third  
       	if ( second>third ){
	    temp1=second;
            second=third;
	    third=temp1;
	}
    }

    //If second has the lowest valve,
    //switch the value of first and second
    if ( second<=first && second<=third ){
        temp2=second;
	second=first;
	first=temp2;

	//If the new second has the hightest valve,
	//switch the value of second and third
        if ( second>third ){
	    temp1=second;
            second=third;
	    third=temp1;
	}
    }

    //If third has the lowest valve,
    //switch the value of first and third
    if ( third<=first && third<=second ){
        temp3=third;
	third=first;
	first=temp3;

	//If second has the hightest valve,
	//switch the value of second and the new third
        if ( second>third ){
	    temp1=second;
            second=third;
	    third=temp1;
	}
    }
}         

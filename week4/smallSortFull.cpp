/*************************************************************
** Author:      Xiaoying Li
** Date:        4/24/2019
** Description: 
*************************************************************/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

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

void smallSort(int &first, int &second, int &third)
{
    int temp1, temp2, temp3;  
    if ( first<=second && first<=third )
    {    if ( second>third )
	 {    temp1=second;
              second=third;
	      third=temp1;
	 }
    }
    if ( second<=first && second<=third )
    {    temp2=second;
	 second=first;
	 first=temp2;
         if ( second>third )
	 {    temp1=second;
              second=third;
	      third=temp1;
	 }
    }
    if ( third<=first && third<=second )
    {    temp3=third;
	 third=first;
	 first=temp3;
         if ( second>third )
	 {    temp1=second;
              second=third;
	      third=temp1;
	 }
    }
}         

/***************************************************************
** Author:      Xiaoying Li
** Date:        5/11/2019
** Description: This function takes two parameters: an array of 
                int and the size of the array, and returns the 
                median of the array.
***************************************************************/


#include <iostream>
#include <algorithm>

/*
using std::cout;
using std::endl;

double findMedian(int arr[], int length);

int main()
{
    int arr[3]={2,3,4};
    double medianInteger=findMedian(arr, 3);
    cout << medianInteger << endl;
    return 0;
}
*/

//Function header
double findMedian(int array[], int size)
{
    //Sort numbers in the array in ascending numeric order
    std::sort(array, array+size);
    double median;

    //If the size of the array is odd
    if( size%2==1 ){
        //The median of the array is the middle number of the 
        //array in ascending numeric order
        int medianOdd = (size-1)/2;
        median = array[medianOdd];
    }

    //If the size of the array is even
    else{
        //The median of the array is the mean of the middle two
        //numbers of the array in ascending numeric order
        int medianEven1 = size/2-1;
        int medianEven2 = size/2;
        median = (array[medianEven1]+array[medianEven2])/2.0;
    }

    //Return the median of the array
    return median;
}

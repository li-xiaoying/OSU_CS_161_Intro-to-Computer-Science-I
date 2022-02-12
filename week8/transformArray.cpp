/*********************************************************
** Author:      Xiaoying Li
** Date:        5/22/2019
** Description: This function takes two parameters - a 
                reference to a pointer to a dynamically 
                allocated array of ints, and the size of 
                that array. The function dynamically 
                allocates an array that is twice as long, 
                filled with the values from the original 
                array followed by each of those values 
                times 2. The address of the new array is 
                assigned to the pointer that was passed 
                as a parameter.
*********************************************************/


#include <iostream>

/*
using std::cout;
using std::endl;

void transformArray(int *&, int);

int main()
{
    int *myArray = new int[3];
    myArray[0] = 4;
    myArray[1] = 2;
    myArray[2] = 5;
    transformArray(myArray, 3);
    for( int i=0; i<6; i++ )
        cout << myArray[i] << endl;
    delete []myArray;
}
*/

//Function header
void transformArray(int *&array, int size)
{
    //Dynamically allocate an array that is
    //twice as long as the original array
    int *newArray=new int[size*2];

    //Fill the first half elements of the new array
    //with the values from the original array
    for( int i=0; i<size; i++ ){
        newArray[i]=array[i];
    }

    //Fill the rest half elements of the new array with
    //each of the value from the original array times 2 
    for( int i=size; i<size*2; i++){
        newArray[i]=array[i-size]*2;
    }

    //Assign the address of the new array to the 
    //pointer that was passed as a parameter
    array=newArray;

    //Free dynamically created memory
    newArray=NULL;
    delete []newArray;
}

/**********************************
**Author: Jasmine Kim
**Date: 8/4/17
**Description: This function will take an array and replace it with one that is twice as large, with the values from the original array appearing twice. 
************************************/

#include <iostream>
using namespace std;

/***********************
**Description: This function will take a function and replace
it with one that is two times the size, with the values from
the original array appearing twice.
***********************/
void repeatArray(double* &myArray, int size) //a reference to a pointer to a dynamically allocated array
{
	double* newArray = new double[2*size];  //new array that will be twice as large

	for (int i = 0; i < size ; i++)
	    {
		newArray[i] = myArray[i];
		newArray[i+size] = myArray[i];
	    }
	
	delete []myArray;  //here to free the allocated memory

	myArray = newArray;  


}

int main()
{
   int size = 3;
   double* myArray = new double[size];
   for (int i=0; i<3; i++)
	{
     	    myArray[i] = (i+1)*2;
	}
   repeatArray(myArray, size);

   for (int i=0; i<6; i++)
	{
     	    cout << myArray[i] << endl;
	}
   delete []myArray;
   return 0;
}

/******************************
**Author: Jasmine Kim
**Date: 7/29/17
**Description: The function descriped in this program will return the median of an array after sorting it. 
****************************/

#include <iostream>
using namespace std;

/**************************************
**Description:This function will sort the given array in ascending order
 and then give the median of that array. If the array has an odd number 
of values, the median is found by outputting the middle value of the array.
 If the number of values is even, then the function will take the average of
 the middle 2 numbers.
***********************************/
double findMedian(int newArray[], int n)
{
	double median;
	int temp = 0;
	for(int i=0; i < n; i++){
	    for(int j=i+1; j<n; j++){
		if (newArray[i] > newArray[j]){
		    temp = newArray[i];
		    newArray[i] = newArray[j];
		    newArray[j] = temp;
		}
	    }
	}
	
	if (n%2 == 0){
	     median = newArray[n/2];
	   
	}else{
	     median = 0.5*(newArray[n/2] + newArray[n/2-1]);
	   
	}

	return median;
}

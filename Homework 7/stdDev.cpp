/******************************
**Author: Jasmine Kim
**Date: 7/29/17
**Description: This file will utilize the Person header file and functions to calculate and return the standard deviation of all the ages given.
********************************/

#include <iostream>
#include <cmath>
#include <string>
#include "Person.hpp"
using namespace std;

/**********************
*Description: This function will take two parameters and the size of the
array to return the standard deviation of all the ages.
************************/
double stdDev(Person persons[], int size)
{
	double mean = 0.0;
	double mean2 = 0.0;
	double sumOfAges = 0.0;
	double sumOfDiff = 0.0;
	double standardDeviation;

	for (int i = 0; i < size; i++)     //this will add up all the ages given
	  {
		sumOfAges += persons[i].getAge();
	  }
	mean = sumOfAges / size;
	
	for (int i = 0; i < size; i++)     //this will add up the sum of the squared differences
	  {
		sumOfDiff += pow((persons[i].getAge() - mean),2);
	  }

	mean2 = sumOfDiff / size;
	standardDeviation = sqrt(mean2);
	
	return standardDeviation;
}
	 

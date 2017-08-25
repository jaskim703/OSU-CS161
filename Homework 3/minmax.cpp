/***********************
**Author: Jasmine Kim
**Date: 7/10/2017
**Description: This program will prompt the user to enter a certain amount of integers they choose and from those numbers display the minimum and maximum value.
*************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, numbers, min, max, newValue;
	cout << "How many integers would you like to enter?" << endl;
	cin >> numbers;
	cout << "Please enter " << numbers << "  integers." << endl;
	for (int i = 0; i < numbers; i++)
	{
		cin >> newValue;
		if ( i == 0){
			min = max = newValue;
		}else{
		if (newValue > max){
			max = newValue;
		}else if (newValue < min){
			min = newValue;
		}
	      }

	}
	
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;

}

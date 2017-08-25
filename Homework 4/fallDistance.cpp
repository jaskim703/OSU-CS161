/****************************************
**Author: Jasmine Kim
**Date: 7/14/17
**Description: Using the formula given to calculate the distance an object falls due to gravity, write a function that takes the falling time as an argument
*****************************************/

#include<iostream>
using namespace std;

/*
double fallDistance (double time);

int main()
{
	cout << fallDistance(3.0) << endl;
}

*/

double fallDistance(double time) //time labeled as parameter
{
	return 0.5 * 9.8 * time * time;
}

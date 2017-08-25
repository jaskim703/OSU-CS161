/****************************
**Author: Jasmine Kim
**Date: 7/14/17
**Description: Write a function that will take the starting integer as a parameter and return how many steps it takes to reach the value 1.
*****************************/

#include<iostream>
using namespace std;


/*
int hailstone(int num);

int main()
{
	cout << hailstone(3) << endl;
	return 0;
}
*/

int hailstone(int num) //establishes the integer as the parameter
{
	if (num == 1) //return set to 0 since it took no steps to reach 1
	{
	    return 0;
	}
	
	if (num%2 == 0) //if integer is even, divide by 2 for next integer
	{
	    num/=2;
	}
	else //if integer is odd, multiply by 3 and add 1
	{
	    num = num*3 + 1;
	}

	return 1 + hailstone(num);
}

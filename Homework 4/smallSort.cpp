/****************************
**Author: Jasmine Kim
**Date: 7/14/17
**Description:Take three int parameters by reference and sort the values into ascending order so the parameter values get replaced in that order.
*****************************/

#include<iostream>
using namespace std;

/*
void smallSort(int &num1, int &num2, int &num3);



int main()
{
	int a = 14;
	int b = -90;
	int c = 2;
	smallSort(a, b, c);
	cout << a << ", " << b << ", " << c << endl;
}
*/

void smallSort(int &num1, int &num2, int &num3) //reference variables because values will be switched around
{

	if (num2 < num1)
	{
	    int temp = num1;
	    num1 = num2;
	    num2 = temp;
	}

	if (num3 < num2)
	{
	    int temp = num2;
	    num2 = num3;
	    num3 = temp;
	}

}	    

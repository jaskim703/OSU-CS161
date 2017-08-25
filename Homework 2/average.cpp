/*******************************
**Author: Jasmine Kim
**Date: 7/5/17
**Description: This program will calculate the average of five numbers given by the user
*******************************/

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, e;
	double average;
	cout << "Please enter five numbers." << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	average = (a+b+c+d+e)/5;
	cout << "The average of those numbers is:\n" << average << endl;

	return 0;

}

/*********************************
**Author: Jasmine Kim
**Date: 7/5/17
**Description: The user will input a celcius temperature and the program will convert that value into fahrenheit and output the new temperature in fahrenheit
*****************************/

#include <iostream>
using namespace std;

int main()
{
     double c, f;
     cout << "Please enter a Celcius temperature.\n";
     cin >> c;
     f = (c*9)/5 + 32;
     cout << "The equivalent Fahrenheit temperature is:\n" << f << endl;
     
     return 0;
}



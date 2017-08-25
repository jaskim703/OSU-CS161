/*******************************************
**Author: Jasmine Kim
**Date: 8/3/17
**Description: This void function willl take the addresses of three int variables as parameters and sort into ascending order.
*********************************************/

#include <iostream>
using namespace std;


/**************************
**Description: This function will sort the ints at the
 addresses given by the pointers into ascending order.
****************************/
void smallSort2 (int* a, int* b, int* c)
{
	int temp;
	
	//if a is greater than b, they will be switched
	if (*a > *b)
	    {
		temp = *a;
		*a = *b;
		*b = temp;
	    }

	//if a is greater than c, they will be switched
	if (*a > *c)
	    {
		temp = *a;
		*a = *c;
		*c = temp;
	    }

	//if b is greater than c, they will be switched
	if (*b > *c)
	    {
		temp = *b;
		*b = *c;
		*c = temp;
	    }

}

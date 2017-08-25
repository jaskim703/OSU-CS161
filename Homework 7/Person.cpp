/**********************************
**Author: Jasmine Kim
**Date: 7/29/17
**Description: This is the implementation file for the functions defined in the header function for Person.
**********************************/

#include <string>
#include "Person.hpp"
using namespace std;


Person::Person(string n, double a) //this sets data members according to the parameters.
{
	name = n;
	age = a;
}

string Person::getName()     //function that gets the name of the person
{
	return name;
}

double Person::getAge()	     //function that gets the age of the person
{
	return age;
}

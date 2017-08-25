/**********************
**Author: Jasmine Kim
**Date: 7/24/17
**Description: This is the implementation file for the functions defined in the header file for Entree.
***********************/
#include <iostream>
#include <string>
#include "Entree.hpp"
using namespace std;

Entree::Entree()
{
	name = "";		//default constructor sets the name to empty string
	numCalories = 0;	//default constructor sets the number of calories to 0.
}

Entree::Entree(string name1, int calories)
{
	name = name1;
	numCalories = calories;
}

string Entree::getName()	//function that gets the name of the entree
{
	return name;
}

int Entree::getNumCalories()	//function that gets the number of calories for the entree.
{
	return numCalories;
}

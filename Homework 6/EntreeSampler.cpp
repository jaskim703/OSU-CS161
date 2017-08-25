/**************************
**Author: Jasmine Kim
**Date: 7/24/17
**Description: This is the implementation file for the EntreeSampler header file.
***************************/

#include <iostream>
#include <string>
#include "EntreeSampler.hpp"
using namespace std;

EntreeSampler::EntreeSampler(Entree e1, Entree e2, Entree e3, Entree e4)
{
	ent1 = e1;
	ent2 = e2;
	ent3 = e3;
	ent4 = e4;
}

void EntreeSampler::listEntrees()
{
	cout << ent1.getName() << endl;		//Gets the name of the first entree and prints it out.
	cout << ent2.getName() << endl;
	cout << ent3.getName() << endl;
	cout << ent4.getName() << endl;
}

int EntreeSampler::totalCalories()
{
	return ent1.getNumCalories() + ent2.getNumCalories() + ent3.getNumCalories() + ent4.getNumCalories();
}


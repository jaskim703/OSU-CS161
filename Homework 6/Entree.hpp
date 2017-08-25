/***********************
**Author: Jasmine Kim
**Date: 7/24/17
**Description: This is the header file for Entree that will define the public and private domains of the class.
***************************/

#ifndef ENTREE_HPP
#define ENTREE_HPP

class Entree
{
    private:
	std::string name;		//The program would not compile with using #include <string> but worked with using std::string
	int numCalories;	

    public:
	Entree();            		//default constructor
	Entree(std::string, int);       //parameters included
	std::string getName();	
	int getNumCalories();

};

#endif

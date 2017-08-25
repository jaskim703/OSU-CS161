/***********************************
**Author: Jasmine Kim
**Date: 7/29/17
**Description: This is the header file for Person that will define the public and private domains of the class.
************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
	private:
	    std::string name;
	    double age;

	public:
	    Person(std::string, double);  //parameters included   
	    std::string getName();   	  //function to get name
	    double getAge();		  //function to get age

};


#endif

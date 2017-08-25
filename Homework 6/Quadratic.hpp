/******************************
**Author: Jasmine Kim
**Date: 7/24/17
**Description: This is the .h file for the quadratics assignment. This file will contain the class quadratic and all its elements.
***************************/

#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP

//Quadratic class declaration
class Quadratic
{
    private:
	double a;
	double b;
	double c;

    public:
	Quadratic();				//default constructor
	Quadratic(double, double, double);
	double getA();				//function to get the value of a
	double getB();
	double getC();
	void setA(double);			//function to set the value of a
	void setB(double);
	void setC(double);
	double valueFor(double);		//function to return the value of the quadratic given a value
	double numRealRoots();			//function to return the number of real roots with given values

};

#endif

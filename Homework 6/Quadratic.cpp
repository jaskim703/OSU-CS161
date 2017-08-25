/********************************
**Author: Jasmine Kim
**Date: 7/25/17
**Description: This is the implementation file for the Quadratic class.
************************************/

#include <cmath>
#include "Quadratic.hpp"
using namespace std;

Quadratic::Quadratic()     //default constructor
{
	a = 1.0;
	b = 1.0;
	c = 1.0;
}


Quadratic::Quadratic(double valueA, double valueB, double valueC)
{
	setA(valueA);
	setB(valueB);
	setC(valueC);
}


double Quadratic::getA()
{
        return a;
}

double Quadratic::getB()
{
        return b;
}

double Quadratic::getC()
{
        return c;
}


void Quadratic::setA(double valueA)
{
	a = valueA;
}


void Quadratic::setB(double valueB)
{
	b = valueB;
}

void Quadratic::setC(double valueC)
{
	c = valueC;
}



double Quadratic::valueFor(double x)
{
	return (a*x*x) + (b*x) + c;
}


double Quadratic::numRealRoots()	//uses the discriminant to determine how many real roots there are given the values of a, b, and c.	
{
	double discriminant;
	discriminant = (b*b) - (4*a*c);
	if (discriminant<=0.00001 && discriminant>= -0.00001){
		 return 1;
	}else if (discriminant > 0.00001){
		 return 2;
	}else if (discriminant < -0.00001){
		 return 0;
	}

}

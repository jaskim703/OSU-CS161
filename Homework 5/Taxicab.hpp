/****************************
**Author: Jasmine Kim
**Date: 7/19/17
**Description: This is the Taxicab specification file.
****************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP


class Taxicab
{
    private: 
	int xCoord;
	int yCoord;
	int distanceTraveled;

    public:
	Taxicab();		    //default constructor
	Taxicab(int, int);
	int getXCoord();            //returns x value
	int getYCoord();	    //returns y value
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);
};
#endif

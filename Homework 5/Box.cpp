/***************************
**Author: Jasmine Kim
**Date: 7/19/17
**Description: This is the implementation file for Box.hpp and will be used to define the functions set forth in the class Box.
*************************/

//This is the Box class function implementation file.
#include "Box.hpp"

Box::Box()
{
}

Box::Box(double len, double w, double h){
	setLength(len);
	setWidth(w);
	setHeight(h);
}

/*
Box::~Box()
{
}
*/

/*This function sets the value of the variable height.
If thevalue is greater than zero, the height is accepted.
However, if the value is negative, 1.0 is assigned to height. */

void Box::setHeight(double h)
{
  
    if (h >= 0){
	height = h;
    }else{
	height = 1.0;
    }


}


/*This function sets the value of the variable width. 
If the value is greater than zero, the width is accepted.
However, if the value is negative, 1.0 is assigned to width. */

void Box::setWidth(double w)
{
    
    if (w >= 0){
	width = w;
    }else{
	width = 1.0;
    }

}


/*This function sets the value of the variable length.
If the value is greater than zero, the length is accepted.
However, if the value is less than zero, 1.0 is assigned to length.*/
 
void Box::setLength(double len)
{
    
    if (len >= 0){
	length = len;
    }else{
	length = 1.0;
    }

}


//This function calculates and returns the volume of the box.
double Box::calcVolume()
{
     return length * width * height;
}


//This function calculates and returns the surface area of the box.
double Box::calcSurfaceArea()
{
    return 2*((length*width)+(length*height)+(width*height));
}




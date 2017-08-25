/**************
**Author: Jasmine Kim
**Date: 7/19/17
**Description: This is the Box class specification file.
*******************/

//Box.hpp is the Box class specification file.
#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
   private:
	double height;
	double width;
	double length;
   public:
	Box();
       //	~Box();
	Box(double, double, double);
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double calcVolume();
	double calcSurfaceArea();
};

#endif

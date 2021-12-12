#ifndef _Rectangle_h
#define _Rectangle_h
#include "Polygon.h"
class Rectangle : public Polygon
{
public:
	Rectangle(double width, double height, const char* type)
		:Polygon(width, height, type) {}
	double GetArea() { return width * height; }
};

#endif 



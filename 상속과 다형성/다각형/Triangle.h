#ifndef _Triangle_h
#define _Triangle_h
#include "Polygon.h"
class Triangle : public Polygon
{
public:
	Triangle(double width, double height);

	virtual double GetArea();
};

#endif // !_Triangle_h


#ifndef _Rectangle_h
#define _Rectangle_h

#include "Point.h"

class Rectangle {
	Point lt;
	Point rb;
public:
	bool Init(Point& lt, Point& rb);

	int getWidth(void) const;
	int getHeight(void) const;
	int getArea(void) const;
	int getPerimeter(void) const;
};
#endif // !_Rectangle_h


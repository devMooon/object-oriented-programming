#ifndef _Rectangle_h
#define _Rectangle_h

#include "Point.h"

class Rectangle {
	Point lt, rb;

public:
	bool Init(Point& leftTop, Point& rightBottom);

	int getArea(void) const;
	int getPerimeter(void) const;
};

#endif // !_Rectangle_h
#ifndef _Rectangle_h
#define _Rectangle_h

#include "Point.h"

class Rectangle {
	Point lt;
	Point rb;

public:
	Rectangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
	Rectangle(Point& lt, Point& rb);
	bool Init(Point& lt, Point& rb);

	int getWidth(void) const;
};
#endif // !_Rectangle_h

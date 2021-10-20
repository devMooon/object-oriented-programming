#ifndef _Rectangle_h
#define _Rectangle_h

#include "Point.h"

class Rectangle {
	Point lt;
	Point rb;
public:
	Rectangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
	Rectangle(Point lt, Point rb) :lt(lt), rb(rb) {};

	Point getLt(void) const { return lt; };
	Point getRb(void) const { return rb; };
	int getWidth(void) const { return rb.getX() - lt.getX(); };
	int getHeight(void) const { return rb.getY() - lt.getY(); };
	int getRound(void) const { return (getWidth() + getHeight()) * 2; };
	int getArea(void) const { return getWidth() * getHeight(); };

	bool isVaild() const;
	void set();
	void show() const;
};
#endif // !_Rectangle_h


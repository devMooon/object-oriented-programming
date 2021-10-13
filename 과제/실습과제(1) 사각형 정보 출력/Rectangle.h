#include "Point.h"

#ifndef _Rectangle_h
//컴퓨터공학전공20200675문서연
#define _Rectangle_h

class Rectangle {
	Point lt; //좌측상단 꼭지점
	Point rb; //우측하단 꼭지점

public:
	Rectangle(void);
	Rectangle(int x1, int y1, int x2, int y2);
	Rectangle(Point p1, Point p2);

public:
	inline Point getLt(void) const { return lt; };
	inline Point getRb(void) const { return rb; };
	inline void setLt(Point lt) { Rectangle::lt = lt; };
	inline void setRb(Point rb) { Rectangle::rb = rb; };
	void show(void);
	inline int getWidth(void) const { return rb.getX() - lt.getX(); };
	inline int getHeight(void) const { return rb.getY() - lt.getY(); };
	inline int getArea(void) const { return getWidth() * getHeight(); };
	inline int getRound(void) const { return 2 * (getWidth() + getHeight()); };
};

#endif //_Rectangle_h
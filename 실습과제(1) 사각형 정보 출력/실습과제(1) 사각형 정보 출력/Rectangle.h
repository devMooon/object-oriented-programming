//컴퓨터공학전공20200675문서연
#include "Point.h"
#ifndef _Rectangle_h
#define _Rectangle_h

class Rectangle {
	Point lt; //좌측상단 꼭지점
	Point rb; //우측하단 꼭지점

public:
	Rectangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
	Rectangle(Point& p1, Point& p2) :lt(p1), rb(p2) {};

public:
	Point getLt(void) const { return lt; };
	Point getRb(void) const { return rb; };
	void setLt(Point lt) { this->lt = lt; };
	void setRb(Point rb) { this->rb = rb; };

	void show(void) const;

	int getWidth(void) const { return rb.getX() - lt.getX(); };
	int getHeight(void) const { return rb.getY() - lt.getY(); };
	int getArea(void) const { return getWidth() * getHeight(); };
	int getRound(void) const { return 2 * (getWidth() + getHeight()); };
};
#endif //_Rectangle_h
#include "Point.h"

#ifndef _Rectangle_h
#define _Rectangle_h

class Rectangle {
	Point lt, rb; //좌측상단 꼭지점, 우측하단 꼭지점

public:
	Rectangle(void);
	Rectangle(int x1, int y1, int x2, int y2);
	Rectangle(Point p1, Point p2);

public:
	Point getLt(void) const;
	Point getRb(void) const;
	void setLt(Point lt);
	void setRb(Point rb);
	void show(Rectangle r);
	int width(Rectangle r) const;
	int height(Rectangle r);
	int area(Rectangle r);
	int round(Rectangle r);
};

#endif _Rectangle_h
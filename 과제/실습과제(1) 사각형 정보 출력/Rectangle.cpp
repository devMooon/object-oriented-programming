//컴퓨터공학전공20200675문서연
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

Rectangle::Rectangle(void)
{
	Point p1;
	Point p2;
	Rectangle::Rectangle(p1, p2);
};
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	Point p1(x1, y1);
	Point p2(x2, y2);
	Rectangle(p1, p2);
};
Rectangle::Rectangle(Point p1, Point p2)
{
	lt = p1;
	rb = p2;
};

void Rectangle::show(void)
{
	getLt().show();
	getRb().show();
};
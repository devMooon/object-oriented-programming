#include <iostream>
#include "Point.h"
#include "Rectangle.h"

Rectangle::Rectangle(void)
//위임생성자 :Rectangle(Point p1, Point p2) 안됨.. (Point에는 인자가 없는 생성자가 존재.)
{
	Point p1;
	Point p2;
	Rectangle::Rectangle(p1, p2);
};
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
//위임생성자 :Rectangle(Point p1(x1, y1), Point p2(x2, y2) 안됨.. (Point에는 int형 인자 두개 받는 생성자가 존재.)
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
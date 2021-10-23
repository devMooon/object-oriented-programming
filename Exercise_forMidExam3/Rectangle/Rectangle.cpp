#include "Rectangle.h"
#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	Point lt(x1, y1);
	Point rb(x2, y2);
	this->lt = lt;
	this->rb = rb;
}
Rectangle::Rectangle(Point& lt, Point& rb)
{
	this->lt = lt;
	this->rb = rb;
}
bool Rectangle::Init(Point& lt, Point& rb)
{
	if (lt.GetX() > rb.GetX() || lt.GetY() > rb.GetY()) {
		cout << "오류: 잘못 설정된 값!" << endl;
		return false;
	}
	this->lt = lt;
	this->rb = rb;
	return true;
}
int Rectangle::getWidth(void) const
{
	return rb->GetX() - lt.GetX();
}
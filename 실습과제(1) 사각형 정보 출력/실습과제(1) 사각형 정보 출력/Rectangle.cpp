#include <iostream>
#include "Point.h"
#include "Rectangle.h"

Rectangle::Rectangle(void)
//���ӻ����� :Rectangle(Point p1, Point p2) �ȵ�.. (Point���� ���ڰ� ���� �����ڰ� ����.)
{
	Point p1;
	Point p2;
	Rectangle::Rectangle(p1, p2);
};
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
//���ӻ����� :Rectangle(Point p1(x1, y1), Point p2(x2, y2) �ȵ�.. (Point���� int�� ���� �ΰ� �޴� �����ڰ� ����.)
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

Point Rectangle::getLt(void) const
{
	return lt;
};
Point Rectangle::getRb(void) const
{
	return rb;
};
void Rectangle::setLt(Point lt)
{
	Rectangle::lt = lt;
};
void Rectangle::setRb(Point rb)
{
	Rectangle::rb = rb;
};

void Rectangle::show(Rectangle r)
{
	Point lt = r.getLt();
	lt.show(lt);
	Point rb = r.getRb();
	rb.show(rb);
};

int Rectangle::width(Rectangle r) const
{
	return r.rb.getX() - r.lt.getX();
};
int Rectangle::height(Rectangle r)
{
	return r.rb.getY() - r.lt.getY();
};
int Rectangle::area(Rectangle r)
{
	return r.width(r) * r.height(r);
};
int Rectangle::round(Rectangle r)
{
	return 2 * (r.width(r) + r.height(r));
};
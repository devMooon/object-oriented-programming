#include "Point.h"
#include <iostream>

Point::Point(void)
	:Point(0, 0) {};

Point::Point(int x, int y)
	: x(x), y(y) {};

int Point::getX(void) const
{
	return x;
};
int Point::getY(void) const
{
	return y;
};
void Point::setX(int x)
{
	if (x >= 0 && x <= 100) {
		Point::x = x;
	}
	else {
		std::cout << "error!! : ��ǥ�� ���� 0~100." << std::endl;
	}
};
void Point::setY(int y)
{
	if (y >= 0) {
		Point::y = y;
	}
	else {
		std::cout << "error!! : ��ǥ�� ���� 0~100." << std::endl;
	}
};
void Point::show(Point p) const
{
	std::cout << "��ǥ : (" << p.getX() << ", " << p.getY() << ")" << std::endl;
};
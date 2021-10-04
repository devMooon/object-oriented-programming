#include "Point.h"
#include <iostream>

Point::Point(void)
	:Point(0, 0) {};

Point::Point(int x, int y)
	: x(x), y(y) {};


void Point::setX(int x)
{
	if (x >= 0 && x <= 100) {
		Point::x = x;
	}
	else {
		std::cout << "error!! : ÁÂÇ¥°ª ¹üÀ§ 0~100." << std::endl;
	}
};
void Point::setY(int y)
{
	if (y >= 0) {
		Point::y = y;
	}
	else {
		std::cout << "error!! : ÁÂÇ¥°ª ¹üÀ§ 0~100." << std::endl;
	}
};
void Point::show(void) const
{
	std::cout << "ÁÂÇ¥ : (" << getX() << ", " << getY() << ")" << std::endl;
};
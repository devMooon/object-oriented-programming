//컴퓨터공학전공20200675문서연
#include "Point.h"
#include <iostream>

void Point::setX(int x)
{
	if (x >= 0 && x <= 100) {
		this->x = x;
	}
	else {
		std::cout << "error!! : 좌표값 범위 0~100." << std::endl;
	}
};
void Point::setY(int y)
{
	if (y >= 0) {
		this->y = y;
	}
	else {
		std::cout << "error!! : 좌표값 범위 0~100." << std::endl;
	}
};
void Point::show(void) const
{
	std::cout << "좌표 : (" << getX() << ", " << getY() << ")" << std::endl;
};
//��ǻ�Ͱ�������20200675������
#include "Point.h"
#include <iostream>

void Point::setX(int x)
{
	if (x >= 0 && x <= 100) {
		this->x = x;
	}
	else {
		std::cout << "error!! : ��ǥ�� ���� 0~100." << std::endl;
	}
};
void Point::setY(int y)
{
	if (y >= 0) {
		this->y = y;
	}
	else {
		std::cout << "error!! : ��ǥ�� ���� 0~100." << std::endl;
	}
};
void Point::show(void) const
{
	std::cout << "��ǥ : (" << getX() << ", " << getY() << ")" << std::endl;
};
//��ǻ�Ͱ�������20200675������
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(void)
{
	Point p1;
	Point p2(10, 10);

	Rectangle r(p1, p2);
	r.show();

	std::cout << "�غ� : " << r.getWidth() << std::endl;
	std::cout << "���� : " << r.getHeight() << std::endl;
	std::cout << "�ѷ� : " << r.getRound() << std::endl;
	std::cout << "���� : " << r.getArea() << std::endl;

	return 0;
}
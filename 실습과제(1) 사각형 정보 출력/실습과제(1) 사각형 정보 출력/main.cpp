//��ǻ�Ͱ�������20200675������
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(void)
{
	Point p1;
	Point p2(10, 10);

	Rectangle r(p1, p2);

	std::cout << "1�� �簢��" << std::endl;
	r.show();

	std::cout << "�غ� : " << r.getWidth() << std::endl;
	std::cout << "���� : " << r.getHeight() << std::endl;
	std::cout << "�ѷ� : " << r.getRound() << std::endl;
	std::cout << "���� : " << r.getArea() << std::endl;
	std::cout << std::endl;

	Rectangle r1(1, 1, 4, 4);
	std::cout << "2�� �簢��" << std::endl;
	r1.show();

	std::cout << "�غ� : " << r1.getWidth() << std::endl;
	std::cout << "���� : " << r1.getHeight() << std::endl;
	std::cout << "�ѷ� : " << r1.getRound() << std::endl;
	std::cout << "���� : " << r1.getArea() << std::endl;
	std::cout << std::endl;

	Rectangle r2;
	std::cout << "3�� �簢��" << std::endl;
	r2.show();

	std::cout << "�غ� : " << r2.getWidth() << std::endl;
	std::cout << "���� : " << r2.getHeight() << std::endl;
	std::cout << "�ѷ� : " << r2.getRound() << std::endl;
	std::cout << "���� : " << r2.getArea() << std::endl;
	std::cout << std::endl;

	return 0;
}
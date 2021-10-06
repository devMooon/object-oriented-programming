//컴퓨터공학전공20200675문서연
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(void)
{
	Point p1;
	Point p2(10, 10);

	Rectangle r(p1, p2);

	std::cout << "1번 사각형" << std::endl;
	r.show();

	std::cout << "밑변 : " << r.getWidth() << std::endl;
	std::cout << "높이 : " << r.getHeight() << std::endl;
	std::cout << "둘레 : " << r.getRound() << std::endl;
	std::cout << "넓이 : " << r.getArea() << std::endl;
	std::cout << std::endl;

	Rectangle r1(1, 1, 4, 4);
	std::cout << "2번 사각형" << std::endl;
	r1.show();

	std::cout << "밑변 : " << r1.getWidth() << std::endl;
	std::cout << "높이 : " << r1.getHeight() << std::endl;
	std::cout << "둘레 : " << r1.getRound() << std::endl;
	std::cout << "넓이 : " << r1.getArea() << std::endl;
	std::cout << std::endl;

	Rectangle r2;
	std::cout << "3번 사각형" << std::endl;
	r2.show();

	std::cout << "밑변 : " << r2.getWidth() << std::endl;
	std::cout << "높이 : " << r2.getHeight() << std::endl;
	std::cout << "둘레 : " << r2.getRound() << std::endl;
	std::cout << "넓이 : " << r2.getArea() << std::endl;
	std::cout << std::endl;

	return 0;
}
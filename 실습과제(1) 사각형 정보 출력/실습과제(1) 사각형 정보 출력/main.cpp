//컴퓨터공학전공20200675문서연
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(void)
{
	Point p1;
	Point p2(10, 10);

	Rectangle r(p1, p2);
	r.show();

	std::cout << "밑변 : " << r.getWidth() << std::endl;
	std::cout << "높이 : " << r.getHeight() << std::endl;
	std::cout << "둘레 : " << r.getRound() << std::endl;
	std::cout << "넓이 : " << r.getArea() << std::endl;

	return 0;
}
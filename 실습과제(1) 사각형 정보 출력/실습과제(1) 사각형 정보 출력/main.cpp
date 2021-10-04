#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(void)
{
	Point p1;
	Point p2(10, 10);

	Rectangle r(p1, p2);
	r.show();

	std::cout << "¹Øº¯ : " << r.getWidth() << std::endl;
	std::cout << "³ôÀÌ : " << r.getHeight() << std::endl;
	std::cout << "µÑ·¹ : " << r.getRound() << std::endl;
	std::cout << "³ÐÀÌ : " << r.getArea() << std::endl;

	return 0;
}
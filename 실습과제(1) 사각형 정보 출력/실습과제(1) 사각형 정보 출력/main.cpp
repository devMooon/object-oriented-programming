#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main(void)
{
	Point p1;
	Point p2(10, 10);

	Rectangle r(p1, p2);
	r.show(r);

	std::cout << "¹Øº¯ : " << r.width(r) << std::endl;
	std::cout << "³ôÀÌ : " << r.height(r) << std::endl;
	std::cout << "µÑ·¹ : " << r.round(r) << std::endl;
	std::cout << "³ÐÀÌ : " << r.area(r) << std::endl;

	return 0;
}
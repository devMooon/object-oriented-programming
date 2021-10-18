#include "Rectangle.h"
#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Rectangle r1(1, 2, 5, 6);
	Point p1;
	Point p2(2, 4);

	Rectangle r2(p1, p2);

	r1.ShowRectangle();
	r2.ShowRectangle();

	return 0;
}
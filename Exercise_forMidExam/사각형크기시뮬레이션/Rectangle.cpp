#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using namespace std;

bool Rectangle::Init(Point& leftTop, Point& rightBottom)
{
	if (leftTop.GetX() > rightBottom.GetX() || leftTop.GetY() > rightBottom.GetY()) {
		cout << "오류: 잘못된 설정값!" << endl;
		return false;
	}

	lt = leftTop;
	rb = rightBottom;

	return true;
}
int Rectangle::getArea(void) const
{
	int dx = rb.GetX() - lt.GetX();
	int dy = rb.GetY() - lt.GetY();

	return dx * dy;
}
int Rectangle::getPerimeter(void) const
{

}
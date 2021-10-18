#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

Point::Point(int x, int y) {
	SetXY(x, y);
}
void Point::SetXY(int x, int y)
{
	if (x < 0 || y < 0) {
		cout << "오류! 좌표에 음수값 입력" << endl;
	}
	else {
		this->x = x;
		this->y = y;
	}
}
void Point::ShowPoint() const
{
	cout << "(" << x << ", " << y << ")";
}
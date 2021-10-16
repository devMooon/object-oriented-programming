#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int x, int y)
{
	if (x < 0 || x > 100) {
		cout << "x값이 0~100 사이의 값이 아닙니다." << endl;
	}
	else if (y < 0 || y > 100) {
		cout << "y값이 0~100 사이의 값이 아닙니다." << endl;
	}
	else {

	}
}

bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos > 100) {
		cout << "오류: 범위가 벗어난 값; " << xPos << endl;
		return false;
	}
	x = xPos;

	return true;
}
bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos > 100) {
		cout << "오류: 범위가 벗어난 값; " << yPos << endl;
		return false;
	}
	y = yPos;

	return true;
}
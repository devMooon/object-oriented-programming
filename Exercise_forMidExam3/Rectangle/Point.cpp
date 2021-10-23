#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos > 100) {
		cout << "오류: 범위가 벗어난 값" << xPos << endl;
		return false;
	}

	x = xPos;
	return true;
}
bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos > 100) {
		cout << "오류: 범위가 벗어난 값" << yPos << endl;
		return false;
	}

	y = yPos;
	return true;
}
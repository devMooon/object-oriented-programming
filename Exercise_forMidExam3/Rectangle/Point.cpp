#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos > 100) {
		cout << "����: ������ ��� ��" << xPos << endl;
		return false;
	}

	x = xPos;
	return true;
}
bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos > 100) {
		cout << "����: ������ ��� ��" << yPos << endl;
		return false;
	}

	y = yPos;
	return true;
}
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int x, int y)
{
	if (x < 0 || x > 100) {
		cout << "x���� 0~100 ������ ���� �ƴմϴ�." << endl;
	}
	else if (y < 0 || y > 100) {
		cout << "y���� 0~100 ������ ���� �ƴմϴ�." << endl;
	}
	else {

	}
}

bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos > 100) {
		cout << "����: ������ ��� ��; " << xPos << endl;
		return false;
	}
	x = xPos;

	return true;
}
bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos > 100) {
		cout << "����: ������ ��� ��; " << yPos << endl;
		return false;
	}
	y = yPos;

	return true;
}
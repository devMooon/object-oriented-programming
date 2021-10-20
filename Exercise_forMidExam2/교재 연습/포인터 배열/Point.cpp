#include "Point.h"

Point::Point(int x, int y) :x(x), y(x) {
	if (x < 0 || y < 0) {
		cout << "Point�� 0���� ���� �� �����ϴ�.. 0���� �ʱ�ȭ�մϴ�.." << endl;
		this->x = 0;
		this->y = 0;
	}
};
void Point::setX(int x)
{ 
	if (x < 0) {
		cout << "Point �� 0���� ���� �� �����ϴ�.. 0���� ���� ���� 0���� �ʱ�ȭ�մϴ�.." << endl;
		this->x = 0;
	}
	else this->x = x;

};
void Point::setY(int x)
{
	if (y < 0) {
		cout << "Point �� 0���� ���� �� �����ϴ�.. 0���� ���� ���� 0���� �ʱ�ȭ�մϴ�.." << endl;
		this->y = 0;
	}
	else this->y = y;

};
void Point::setXY(int x, int y)
{
	setX(x); setY(x);

};
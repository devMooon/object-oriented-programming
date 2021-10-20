#include "Point.h"

Point::Point(int x, int y) :x(x), y(x) {
	if (x < 0 || y < 0) {
		cout << "Point는 0보다 작을 수 없습니다.. 0으로 초기화합니다.." << endl;
		this->x = 0;
		this->y = 0;
	}
};
void Point::setX(int x)
{ 
	if (x < 0) {
		cout << "Point 는 0보다 작을 수 없습니다.. 0보다 작은 값은 0으로 초기화합니다.." << endl;
		this->x = 0;
	}
	else this->x = x;

};
void Point::setY(int x)
{
	if (y < 0) {
		cout << "Point 는 0보다 작을 수 없습니다.. 0보다 작은 값은 0으로 초기화합니다.." << endl;
		this->y = 0;
	}
	else this->y = y;

};
void Point::setXY(int x, int y)
{
	setX(x); setY(x);

};
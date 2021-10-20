#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using std::cout;
using std::cin;
using std::endl;

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	Point lt(x1, y1);
	Point rb(x2, y2);
	this->lt = lt;
	this->rb = rb;
}
void Rectangle::set()
{
	int num;
	cout << "lt와 rb의 x, y를 순서대로 입력하세요. >> ";
	cin >> num; lt.setX(num);
	cin >> num; lt.setY(num);
	cin >> num; rb.setX(num);
	cin >> num; rb.setY(num);
	if (!isVaild()) {
		cout << "lt, rb값이 바뀐 것 같습니다. 다시 0으로 초기화 합니다.." << endl;
		lt.setXY(0, 0);
		rb.setXY(0, 0);
	};
	
}
bool Rectangle::isVaild() const
{
	if ((lt.getX() > rb.getX()) || (lt.getY() > rb.getY())) return false;
	return true;
}
void Rectangle::show() const
{
	cout << ">>  가로길이 " << getWidth() << ", 세로길이 " << getHeight() << ", 넓이 " << getArea() << ", 둘레 " << getRound() << endl;
}
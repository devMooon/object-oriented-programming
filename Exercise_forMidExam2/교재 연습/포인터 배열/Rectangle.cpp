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
	cout << "lt�� rb�� x, y�� ������� �Է��ϼ���. >> ";
	cin >> num; lt.setX(num);
	cin >> num; lt.setY(num);
	cin >> num; rb.setX(num);
	cin >> num; rb.setY(num);
	if (!isVaild()) {
		cout << "lt, rb���� �ٲ� �� �����ϴ�. �ٽ� 0���� �ʱ�ȭ �մϴ�.." << endl;
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
	cout << ">>  ���α��� " << getWidth() << ", ���α��� " << getHeight() << ", ���� " << getArea() << ", �ѷ� " << getRound() << endl;
}
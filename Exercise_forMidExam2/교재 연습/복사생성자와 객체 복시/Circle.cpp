#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

Circle::Circle(const Circle& c) //��������� ����
{
	this->radius = c.radius;
	cout << "��������� ���� radius = " << radius << endl;
}
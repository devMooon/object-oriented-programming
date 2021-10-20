#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

Circle::Circle(int radius)
{
	this->radius = radius;
}
int Circle::getRadius(void) const
{
	return radius;
}
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
void Circle::show(void) const
{
	cout << "�������� " << radius << "�� ��" << endl;
}
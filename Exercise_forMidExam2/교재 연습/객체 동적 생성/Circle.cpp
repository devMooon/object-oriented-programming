#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;
using std::cin;

const double Circle::PI = 3.14159265;

Circle::Circle(int radius):radius(radius)
{
	cout << "������ ȣ��" << endl;
}
Circle::~Circle()
{
	cout << "�Ҹ��� ȣ��" << endl;
}
void Circle::Start(void)
{
	while (true) {
		int radius;
		cout << "���� ������ �Է�(�����̸� ����)>>";
		cin >> radius;
		if (radius < 0) break;
		Circle* c = new Circle(radius);
		cout << "���� ���� : " << c->getArea() << endl;
		delete c;
	}
}
double Circle::getArea(void) const
{
	return radius * radius * PI;
}
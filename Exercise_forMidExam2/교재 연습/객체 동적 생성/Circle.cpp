#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;
using std::cin;

const double Circle::PI = 3.14159265;

Circle::Circle(int radius):radius(radius)
{
	cout << "생성자 호출" << endl;
}
Circle::~Circle()
{
	cout << "소멸자 호출" << endl;
}
void Circle::Start(void)
{
	while (true) {
		int radius;
		cout << "정수 반지름 입력(음수이면 종료)>>";
		cin >> radius;
		if (radius < 0) break;
		Circle* c = new Circle(radius);
		cout << "원의 면적 : " << c->getArea() << endl;
		delete c;
	}
}
double Circle::getArea(void) const
{
	return radius * radius * PI;
}
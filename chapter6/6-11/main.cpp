#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

int main(void)
{
	Circle c1;
	Circle c2(4);

	Circle* circles = new Circle[10];

	cout << "������ ���� ���� " << Circle::getNumOfCircle() << endl;

	delete[] circles;

	cout << "������ ���� ���� " << Circle::getNumOfCircle() << endl;

	return 0;
}
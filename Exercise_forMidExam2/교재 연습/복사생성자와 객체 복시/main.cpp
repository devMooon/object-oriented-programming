#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

int main(void)
{
	Circle c1(30);
	Circle c2(c1);

	cout << "������ ���� : " << c1.getArea() << endl;
	cout << "�纻�� ���� : " << c2.getArea() << endl;
	return 0;
}
#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

void readRadius(Circle& d)
{
	int r;
	cout << "������ ������ ���� �Է��ϼ���>>";
	cin >> r;
	d.setRadius(r);
}
int main(void)
{
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;
}
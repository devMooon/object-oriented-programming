#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

void readRadius(Circle& d)
{
	int r;
	cout << "정수로 반지름 값을 입력하세요>>";
	cin >> r;
	d.setRadius(r);
}
int main(void)
{
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;
}
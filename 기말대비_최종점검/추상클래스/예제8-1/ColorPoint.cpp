#include "Point.h"
#include "ColorPoint.h"
#include <iostream>

using std::cout;
using std::endl;

void ColorPoint::show()
{
	Point::show();
	cout << color << "��" << endl;
}
void ColorPoint::draw()
{
	cout << "�� color point!" << endl;
}
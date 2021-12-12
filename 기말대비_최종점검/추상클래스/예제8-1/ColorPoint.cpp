#include "Point.h"
#include "ColorPoint.h"
#include <iostream>

using std::cout;
using std::endl;

void ColorPoint::show()
{
	Point::show();
	cout << color << "»ö" << endl;
}
void ColorPoint::draw()
{
	cout << "³­ color point!" << endl;
}
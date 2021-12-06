#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

void Circle::show() const
{
	cout << "radius: " << getRadius() << "/area: " << getArea() << endl;
}

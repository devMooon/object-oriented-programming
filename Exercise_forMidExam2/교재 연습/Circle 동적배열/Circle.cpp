#include "Circle.h"

const double Circle::PI = 3.14;

double Circle::getArea(void)
{
	return PI * radius * radius;
}
#include "Circle.h"
#include <iostream>

using std::ostream;
using std::endl;

ostream& operator<<(ostream& os, const Circle& circle)
{
	os << "radius = " << circle.radius << "ÀÎ ¿ø" << endl;
	return os;
}
Circle& operator++(Circle& circle)
{
	circle.radius++;
	return circle;
}
Circle operator++(Circle& circle, int dumy)
{
	Circle newCircle(circle.radius);
	circle.radius++;
	return newCircle;
}
Circle operator+(int radius, const Circle& circle)
{
	Circle newCircle(circle.radius + radius);
	return newCircle;
}

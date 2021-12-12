#include "Circle.h"

bool Circle::operator==(const int r) const
{
	return this->radius == r;
}
ostream& operator<<(ostream& os, const Circle& c)
{
	return os << "radius: " << c.radius;
}
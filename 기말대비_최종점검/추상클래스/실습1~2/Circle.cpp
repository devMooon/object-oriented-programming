#include "NamedCircle.h"
#include "Circle.h"

ostream& operator<<(ostream& os, const Circle& c)
{
	return os << "반지름이 " << c.radius << "원";
}
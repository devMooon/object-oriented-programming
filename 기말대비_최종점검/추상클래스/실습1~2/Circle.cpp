#include "NamedCircle.h"
#include "Circle.h"

ostream& operator<<(ostream& os, const Circle& c)
{
	return os << "�������� " << c.radius << "��";
}
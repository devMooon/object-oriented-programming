#include "NamedCircle.h"

ostream& operator<<(ostream& os, const NamedCircle& c)
{
	return os << "�������� " << c.getRadius() << "�� " << c.name;
}

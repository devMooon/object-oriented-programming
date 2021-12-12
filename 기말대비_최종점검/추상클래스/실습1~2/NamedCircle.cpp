#include "NamedCircle.h"

ostream& operator<<(ostream& os, const NamedCircle& c)
{
	return os << "반지름이 " << c.getRadius() << "인 " << c.name;
}

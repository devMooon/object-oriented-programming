#include "Shape.h"
#include <iostream>

using std::ostream;

Shape& Shape::operator*=(const int NUM)
{
	this->width *= NUM;
	this->height *= NUM;

	return *this;
}
ostream& operator<<(ostream& os, const Shape& shape)
{
	return os << "[" << shape.type << "] "
		<< shape.width << "x" << shape.height;
}
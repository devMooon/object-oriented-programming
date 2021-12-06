#include "Rectangle.h"
#include <iostream>

using std::ostream;

Rectangle::Rectangle(int width, int height)
	:width(width), height(height)
{

}
bool operator==(const Rectangle& r1, const Rectangle& r2)
{
	if (r1.width == r2.width && r1.height == r2.height) return true;
	else return false;
}
ostream& operator<<(ostream& os, const Rectangle& r)
{
	return os << r.width << "x" << r.height;
}

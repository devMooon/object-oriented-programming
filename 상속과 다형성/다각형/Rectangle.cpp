#define _CRT_SECURE_NO_WARNINGS
#include "Rectangle.h"
#include <cstring>

Rectangle::Rectangle(double width, double height) :Polygon(width, height, "Rectangle") {}
double Rectangle::GetArea()
{
	return this->width * this->height;
}
bool Rectangle::IsSquare() const
{
	if (this->width == this->height) return true;
	else return false;
}
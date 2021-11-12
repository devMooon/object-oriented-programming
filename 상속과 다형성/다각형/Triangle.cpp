#include "Triangle.h"

Triangle::Triangle(double width, double height) :Polygon(width, height, "Triangle"){}
double Triangle::GetArea()
{
	return this->width * this->height / 2;
}

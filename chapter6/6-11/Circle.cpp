#include "Circle.h"

int Circle::numOfCircle = 0;

Circle::Circle(int radius)
{
	this->radius = radius;
	numOfCircle++;
}
Circle::~Circle()
{
	numOfCircle--;
}
int Circle::getNumOfCircle()
{
	return numOfCircle;
}
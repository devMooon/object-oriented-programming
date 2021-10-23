#include "Rectangle.h"

int Rectangle::getWidth(void) const
{
	return rb.GetX() - lt.GetX();
}
int Rectangle::getHeight(void) const
{
	return rb.GetY() - lt.GetY();
}
int Rectangle::getArea(void) const
{
	return (getWidth() + getHeight()) * 2;
}
int Rectangle::getPerimeter(void) const
{
	return getWidth() * getHeight();
}

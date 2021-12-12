#ifndef _Circle_h
#define _Circle_h
#include <iostream>

using std::ostream;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) :radius(radius) {}
	int getRadius() const { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() const { return radius * radius * 3.14; }

	friend ostream& operator<<(ostream& os, const Circle& c);
};
#endif // !_Circle_h
#ifndef _Circle_h
#define _Circle_h
#include <iostream>

using std::ostream;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; };
	friend ostream& operator<<(ostream& os, const Circle& circle);
	friend Circle& operator++(Circle& circle);
	friend Circle operator++(Circle& circle, int dumy);
	friend Circle operator+(int radius, const Circle& circle);
};

#endif // !_Circle_h
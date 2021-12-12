#ifndef _Circle_h
#define _Circle_h
#include <iostream>

using std::ostream;

class Circle
{
	int radius;
public:
	Circle(int radius) :radius(radius) {}
	double getArea() { return radius * radius * 3.14159265; }
	bool operator==(const int r) const;

	friend ostream& operator<<(ostream& os, const Circle& c);
};
#endif // !_Circle_h
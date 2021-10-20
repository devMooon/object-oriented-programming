#ifndef _Circle_h
#define _Circle_h

#include <iostream>

using std::cout;
using std::endl;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; };
	void setRadius(int r) { radius = r; }
	void show() { cout << "반지름이" << radius << "인 원" << endl; };
};
#endif // !_Circle_h


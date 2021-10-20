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
	void show() { cout << "��������" << radius << "�� ��" << endl; };
};
#endif // !_Circle_h


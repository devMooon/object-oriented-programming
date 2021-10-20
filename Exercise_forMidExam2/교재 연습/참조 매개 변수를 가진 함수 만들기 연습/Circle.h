#ifndef _Circle_h
#define _Circle_h

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
#endif // !_Circle_h

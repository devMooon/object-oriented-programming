#ifndef _Circle_h
#define _Circle_h

class Circle {
	static const double PI;
	int radius;

public:
	Circle(int radius = 0) :radius(radius) {};
	double getRadius(void) const { return radius; };
	void setRadius(int radius) { this->radius = radius; };

	double getArea(void);
};
#endif // !_Circle_h
#ifndef _Circle_h
#define _Circle_h
class Circle
{
	int radius;
public:
	Circle(int radius = 0) :radius(radius) {}
	int getRadius() const { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() const { return 3.14 * radius * radius; }

	virtual void show() const;
};
#endif // !_Circle_h
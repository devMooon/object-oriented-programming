#ifndef _Circle_h
#define _Circle_h

class Circle {
	int radius;
public:
	Circle(int radius = 0);
	int getRadius(void) const;
	void setRadius(int radius);

	void show(void) const;
};
#endif // !_Circle_h

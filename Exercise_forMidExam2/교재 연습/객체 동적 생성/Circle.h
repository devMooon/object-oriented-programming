#ifndef _Circle_h
#define _Circle_h

class Circle {
	static const double PI;
	int size;
	int radius;

public:
	Circle(int radius = 0);
	~Circle();

	void Start(void);
	double getArea(void) const;
};
#endif // !_Circle_h


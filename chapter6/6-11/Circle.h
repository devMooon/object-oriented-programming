#ifndef _Circle_h
#define _Circle_h

class Circle {
	static int numOfCircle;
	int radius;

public:
	Circle(int radius = 1);
	~Circle();
	static int getNumOfCircle();
};
#endif // !_Circle_h

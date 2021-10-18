#ifndef _Circle_h
#define _Circle_h

#include <iostream>

using std::cout;
using std::endl;

class Circle {
	static const double PI;
	static int circleNum;
	int radius;

public:
	Circle(int radius = 0) :radius(radius) { circleNum++; };
	~Circle() { 
		circleNum--;
		cout << "¿ø °´Ã¼ ¼Ò¸ê.." << endl;
		cout << "¿ø °´Ã¼ ¼ö : " << Circle::getCircleNum() << endl;
	};

	int getRadius(void) const {	return radius; };
	static int getCircleNum() { return circleNum; };

	double getRound() const { return 2 * PI * radius; };
	double getArea() const { return PI * radius * radius; };
};
#endif // !_Circle_h
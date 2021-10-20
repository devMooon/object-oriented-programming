#ifndef _Point_h
#define _Point_h

#include <iostream>

using std::cout;
using std::endl;

class Point {
	int x;
	int y;
public:
	Point(int x = 0, int y = 0);
	int getX(void) const { return x; };
	int getY(void) const { return y; };
	void setX(int x);
	void setY(int y);
	void setXY(int x, int y);
};
#endif // !_Point_h


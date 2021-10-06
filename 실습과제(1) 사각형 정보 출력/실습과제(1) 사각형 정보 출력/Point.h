//컴퓨터공학전공20200675문서연
#ifndef _Point_h
#define _Point_h

class Point {
	int x;
	int y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {};

public:
	int getX(void) const { return x; };
	int getY(void) const { return y; };
	void setX(int x);
	void setY(int y);
	void show(void) const;
};
#endif //_Point_h
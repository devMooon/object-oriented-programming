#ifndef _Point_h
#define _Point_h

class Point {
	int x;
	int y;

public:
	Point(void);
	Point(int x, int y);

public:
	inline int getX(void) const { return x; };
	inline int getY(void) const { return y; };
	void setX(int x);
	void setY(int y);
	void show(void) const;
};

#endif //_Point_h
#ifndef _Point_h
#define _Point_h

class Point {
	int x;
	int y;

public:
	Point(void);
	Point(int x, int y);

public:
	int getX(void) const;
	int getY(void) const;
	void setX(int x);
	void setY(int y);
	void show(Point p) const;
};

#endif _Point_h
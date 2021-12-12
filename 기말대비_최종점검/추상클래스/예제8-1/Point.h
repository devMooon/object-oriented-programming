#ifndef _Point_h
#define _Point_h
class Point
{
	int x, y;
public:
	Point(int x, int y) :x(x), y(y) {}

	virtual void show();
};
#endif // !_Point_h
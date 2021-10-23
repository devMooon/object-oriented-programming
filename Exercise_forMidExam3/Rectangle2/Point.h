#ifndef _Point_h
#define _Point_h

class Point {
	int x;
	int y;
public:
	Point(int x, int y) :x(x), y(y) {}
	int GetX() const { return x; };
	int GetY() const { return y; };

	void SetX(int x) { this->x = x; };
	void SetY(int y) { this->y = y; };
};
#endif // !_Point_h


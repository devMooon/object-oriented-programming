#ifndef _Point_h
#define _Point_h

class Point {
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) :x(x), y(x) {};
	int GetX() { return x; };
	int GetY() { return y; };

	bool SetX(int xPos);
	bool SetY(int yPos);
};
#endif // !_Point_h

#ifndef _Point_h
#define _Point_h

class Point {
	int x;
	int y;

public:
	Point(int x = 0, int y = 0);

	int GetX() const { return x; };
	int GetY() const { return y; };
	void SetXY(int x, int y);

	void ShowPoint() const;
};
#endif // !_Point_h
#ifndef _Point_h
#define _Point_h
class Point {
	int x, y; //각 좌표값은 0~100 사이값

public:
	int GetX(void) const { return x; };
	int GetY(void) const { return y; };

	bool SetX(int yPos);
	bool SetY(int yPos);

	Point(int x, int y);
};

#endif // !_Point_h
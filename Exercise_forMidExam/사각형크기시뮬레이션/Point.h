#ifndef _Point_h
#define _Point_h
class Point {
	int x, y; //�� ��ǥ���� 0~100 ���̰�

public:
	int GetX(void) const { return x; };
	int GetY(void) const { return y; };

	bool SetX(int yPos);
	bool SetY(int yPos);

	Point(int x, int y);
};

#endif // !_Point_h
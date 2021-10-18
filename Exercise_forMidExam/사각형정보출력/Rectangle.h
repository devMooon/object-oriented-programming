#ifndef _Rectangle_h
#define _Rectangle_h

#include "Point.h"

class Rectangle {
	Point lt;
	Point rb;

public:
	Rectangle(int x1, int y1, int x2, int y2);
	Rectangle(Point lt, Point rb) :lt(lt), rb(rb) {};

	Point GetLt() const { return lt; };
	Point GetRb() const { return rb; };

	int GetWidth() const; //�غ�
	int GetHeight() const; //����
	int GetRound() const; //�ѷ�
	int GetArea() const; //����
	void ShowRectangle() const;
};
#endif // !_Rectangle_h

#include "Rectangle.h"
#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	if (x1 > x2 || y1 > y2) {
		cout << "오류! lt와 rb 값은 변경될 수 없습니다." << endl;
	}
	else {
		lt.SetXY(x1, y1);
		rb.SetXY(x2, y2);
	}
}
int Rectangle::GetWidth() const //밑변
{
	return rb.GetX() - lt.GetX();
}
int Rectangle::GetHeight() const //높이
{
	return rb.GetY() - lt.GetY();
}
int Rectangle::GetRound() const //둘레
{
	return (GetWidth() + GetHeight()) * 2;
}
int Rectangle::GetArea() const //넓이
{
	return (GetWidth() * GetHeight());
}
void Rectangle::ShowRectangle() const
{
	cout << "* "; lt.ShowPoint(); cout << ", "; rb.ShowPoint(); cout << " 사각형 *" << endl;
	cout << "둘레: " << GetRound() << ", 넓이: " << GetArea() << endl;
}
#include "Rectangle.h"
#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	if (x1 > x2 || y1 > y2) {
		cout << "����! lt�� rb ���� ����� �� �����ϴ�." << endl;
	}
	else {
		lt.SetXY(x1, y1);
		rb.SetXY(x2, y2);
	}
}
int Rectangle::GetWidth() const //�غ�
{
	return rb.GetX() - lt.GetX();
}
int Rectangle::GetHeight() const //����
{
	return rb.GetY() - lt.GetY();
}
int Rectangle::GetRound() const //�ѷ�
{
	return (GetWidth() + GetHeight()) * 2;
}
int Rectangle::GetArea() const //����
{
	return (GetWidth() * GetHeight());
}
void Rectangle::ShowRectangle() const
{
	cout << "* "; lt.ShowPoint(); cout << ", "; rb.ShowPoint(); cout << " �簢�� *" << endl;
	cout << "�ѷ�: " << GetRound() << ", ����: " << GetArea() << endl;
}
#include <iostream>
#include "CircleList.h"
#include "Circle.h"

using std::cin;
using std::cout;
using std::endl;

CircleList::CircleList(int size)
{
	cout << "생성자 호출" << endl;
	this->size = size;
	cList = new Circle[size];
}
CircleList::CircleList(const CircleList& cl)
{
	cout << "복사 생성자 호출" << endl;
	size = cl.size;
	cList = new Circle[size];
	for (int i = 0; i < size; i++)
		cList[i] = cl.cList[i];
}
CircleList::~CircleList()
{
	cout << "소멸자 호출" << endl;
	delete[] cList;
}
int CircleList::getClist(int index) const
{
	return cList[index].getRadius();
}
void CircleList::setClist(int size)
{
	if (size != 0) {//크기가 다를 때 새로운 동적할당 배열 만들기
		Circle* c = new Circle[size];
		for (int i = 0; i < this->size; i++) {
			c[i] = cList[i];
		}
		delete[] cList;
		cList = c;
		this->size = size;
	}

	int r;

	for (int i = 0; i < this->size; i++) {
		cout << (i + 1) << "번 원의 넓이 >>";
		cin >> r;
		cList[i].setRadius(r);
	}
	cout << endl;
}
void CircleList::show(void) const
{
	for (int i = 0; i < this->size; i++) {
		cout << cList[i].getRadius() << " ";
	}
	cout << endl;
}
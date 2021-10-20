#include <iostream>
#include "CircleList.h"
#include "Circle.h"

using std::cin;
using std::cout;
using std::endl;

CircleList::CircleList(int size)
{
	cout << "������ ȣ��" << endl;
	this->size = size;
	cList = new Circle[size];
}
CircleList::CircleList(const CircleList& cl)
{
	cout << "���� ������ ȣ��" << endl;
	size = cl.size;
	cList = new Circle[size];
	for (int i = 0; i < size; i++)
		cList[i] = cl.cList[i];
}
CircleList::~CircleList()
{
	cout << "�Ҹ��� ȣ��" << endl;
	delete[] cList;
}
int CircleList::getClist(int index) const
{
	return cList[index].getRadius();
}
void CircleList::setClist(int size)
{
	if (size != 0) {//ũ�Ⱑ �ٸ� �� ���ο� �����Ҵ� �迭 �����
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
		cout << (i + 1) << "�� ���� ���� >>";
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
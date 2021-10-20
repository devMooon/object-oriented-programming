#include <iostream>
#include "CircleList.h"
#include "Circle.h"

using std::cout;
using std::endl;

CircleList::CircleList(int size):size(size)
{
	cList = new Circle[size];
	maxNum = 0;
}
CircleList::~CircleList()
{ 
	cout << "객체 소멸 전 동적할당 해제.." << endl;
	delete[]cList;
	cout << "객체 소멸.." << endl;
}

void CircleList::setSize(int size)
{
	Circle* newClist = new Circle[size];

	for (int i = 0; i < getSize(); i++) {
		newClist[i] = cList[i];
	}
	delete[] cList;
	cList = newClist;
	this->size = size;
}
void CircleList::setcList(int index, int num)
{
	cList[index] = num;
	if (cList[index].getArea() >= 100 && cList[index].getArea() <= 200) maxNum++;
}
void CircleList::show(void)
{
	for (int i = 0; i < size; i++) {
		cout << cList[i].getArea() << " ";
	}
	cout << endl;
	cout << "면적이 100에서 200 사이인 원의 개수는 " << maxNum << endl;
}

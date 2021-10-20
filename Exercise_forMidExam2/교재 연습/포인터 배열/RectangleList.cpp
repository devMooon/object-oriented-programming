#include <iostream>
#include "RectangleList.h"
#include "Rectangle.h"

using std::cout;
using std::cin;
using std::endl;

RectangleList::RectangleList()
{
	int num;
	Psize = 3;

	for (int i = 0; i < Psize; i++) {
		cout << (i + 1) << "번째 포인터 배열" << endl;
		rList[i] = new Rectangle;
		rList[i]->set();
	}
}
void RectangleList::showList(void) const
{
	for (int i = 0; i < Psize; i++) {
		cout << (i + 1) << "번째 포인터 배열";
		rList[i]->show();
		cout << endl;
	}
}
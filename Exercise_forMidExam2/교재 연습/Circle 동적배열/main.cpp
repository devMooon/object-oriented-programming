#include <iostream>
#include "Circle.h"
#include "CircleList.h"

using std::cout;
using std::cin;
using std::endl;

int main(void) 
{
	CircleList Clist1;
	int size, r;

	cout << "생성하고자 하는 원의 개수?";
	cin >> size;

	Clist1.setSize(size);
	for (int i = 0; i < size; i++) {
		cout << "원" << (i + 1) << ": ";
		cin >> r;
		Clist1.setcList(i, r);
	}
	Clist1.show();

	return 0;
}
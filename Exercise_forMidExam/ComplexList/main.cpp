#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	ComplexList cl1(5);
	ComplexList cl2(10);

	for (int i = 0; i < 10; i++) {
		cl1.Set(i, 2, 5);
	}
	for (int i = 0; i < 10; i++) {
		cl2.Set(i, 3, 4);
	}

	cout << "레퍼런스 반환값 연습" << endl;
	for (int i = 0; i < cl1.Length(); i++) {
		cout << (i + 1) << "번 요소"; cl1.Get(i).showInfo();
	}
	cout << endl;

	cout << "포인터 반환값 연습" << endl;
	for (int i = 0; i < cl2.Length(); i++) {
		cout << (i + 1) << "번 요소"; cl2.pGet(i)->showInfo();
	}

	return 0;
}
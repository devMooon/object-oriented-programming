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

	cout << "�����ϰ��� �ϴ� ���� ����?";
	cin >> size;

	Clist1.setSize(size);
	for (int i = 0; i < size; i++) {
		cout << "��" << (i + 1) << ": ";
		cin >> r;
		Clist1.setcList(i, r);
	}
	Clist1.show();

	return 0;
}
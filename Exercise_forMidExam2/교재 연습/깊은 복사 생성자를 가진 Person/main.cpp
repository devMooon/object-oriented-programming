#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Person father(1, "Kitea");
	Person dougter(father);

	cout << "dougter ��ü ���� ���� -----" << endl;

	father.show();
	dougter.show();

	dougter.changeName("Grace");

	cout << "dougter �̸��� Grace�� ������ �� -----" << endl;

	father.show();
	dougter.show();
	return 0;
}
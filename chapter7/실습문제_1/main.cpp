#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);

	a += 500;
	b -= 500;

	cout << a;
	cout << b;

	Book c("��ǰ C++", 30000, 500), d("��ǰ C++", 30000, 500);
	if (c == 30000) cout << "���� 30000��" << endl;
	if (c == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (c == d) cout << "�� å�� ���� å�Դϴ�." << endl;

	cout << endl;
	c = d;
	if (c == d) cout << "�� å�� ���� å�Դϴ�." << endl;

	return 0;
}
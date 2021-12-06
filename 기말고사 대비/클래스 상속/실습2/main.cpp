#include "NamedCircle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	NamedCircle waffle(3, "waffle");

	waffle.show();

	NamedCircle pizza[5];

	int max = 0;
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> pizza[i];

		if (pizza[max] < pizza[i]) max = i;
	}

	cout << "���� ������ ū ���� " << pizza[max] << "�Դϴ�!" << endl;


	return 0;
}
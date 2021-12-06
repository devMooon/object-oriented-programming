#include <iostream>
#include "Power.h"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	Power p1(1, 1);
	Power p2(2, 2);
	Power p3 = p1 + p2;

	cout << "p1: " << p1 << endl;
	cout << "p2: " << p2 << endl;
	cout << "p3: " << p3 << endl;

	Power p4 = p1 += p3;
	cout << "p4: " << p4 << endl;

	Power p5 = p4 + 4;
	cout << "p5: " << p5 << endl;

	++p5;
	cout << "++p5: " << p5 << endl;
	cout << "p5++: " << p5++ << endl;
	cout << "p5: " << p5 << endl;

	Power p6;

	if (!p5) cout << "p5�� �Ŀ��� 0�� �ƴϴ�." << endl;
	else cout << "p5�� �Ŀ��� 0�̴�." << endl;

	if (!p6) cout << "p6�� �Ŀ��� 0�� �ƴϴ�." << endl;
	else cout << "p6�� �Ŀ��� 0�̴�." << endl;

	cout << "3 + p5: " << 3 + p5 << endl;

	cout << "p6: " << p6 << endl;
	cout << "kick�� punch�� ������ �̿��� �Է� ���ּ���. : ";
	cin >> p6;
	cout << "p6: " << p6 << endl;

 	return 0;
}
#include "Power.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void) 
{
	Power power1(1, 2);
	Power power2(2, 3);
	Power power3;
	Power power4 = power1;

	power3 = power1 + power2; //��ü �ȿ� �����Ͱ� �����Ƿ� ���� ������ �����ε��� �ʿ����.

	cout << "power1 : " << power1 << endl;
	cout << "power2 : " << power2 << endl;
	cout << "power3 : " << power3 << endl;
	cout << "power4 : " << power4 << endl;

	cout << endl;

	Power* power[3]; //������ �迭
	for (int i = 0; i < 3; i++) {
		power[i] = new Power(i * 2, i * 2);
		cout << "power[" << i << "] : " << *power[i] << endl;
	}

	cout << endl;

	if (power1 == power3) cout << "power1�� power3�� �����ϴ�." << endl;
	else cout << "power1�� power3�� �ٸ��ϴ�." << endl;
	if (power1 == power4) cout << "power1�� power4�� �����ϴ�." << endl;
	else cout << "power1�� power4�� �ٸ��ϴ�." << endl;

	cout << endl;

	Power p1(1, 2);
	Power p2(2, 3);
	Power p3;
	cout << "p1 : " << p1 << endl;
	cout << "p2 : " << p2 << endl;
	cout << "p3 : " << p3 << endl;

	cout << endl;

	p3 = p1 += p2;
	cout << "p1 : " << p1 << endl;
	cout << "p2 : " << p2 << endl;
	cout << "p3 : " << p3 << endl;

	Power p4;
	cout << "p4 : " << p4 << endl;

	p4 = p3 + 3;

	cout << "p4 : " << p4 << endl;

	++p4;
	cout << "p4 : " << p4 << endl;
	cout << "p4++ : " << p4++ << endl;
	cout << "p4 : " << p4 << endl;
	
	Power p5;
	if (!p4)	cout << "p4�� �Ŀ��� 0�Դϴ�." << endl;
	else		cout << "p4�� �Ŀ��� 0�� �ƴմϴ�." << endl;
	if (!p5)	cout << "p5�� �Ŀ��� 0�Դϴ�." << endl;
	else		cout << "p5�� �Ŀ��� 0�� �ƴմϴ�." << endl;

	Power p6 = 2 + p5;
	cout << "p6 : " << p6 << endl;

	return 0;
}
#include <iostream>
#include "Sample.h"

using std::cout;
using std::cin;
using std::endl;

void Sample::read() //�����Ҵ� ���� ���� �迭 p���� ����ڷκ��� ������ �Է¹���
{
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() //���� �迭�� ȭ�鿡 ���
{
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
int Sample::big() //���� �迭���� ���� ū �� ����
{
	int big;
	big = p[0];
	for (int i = 1; i < size; i++) {
		if(big < p[i]) big = p[i];
	}
	return big;
}
Sample::~Sample() //�Ҹ���
{
	cout << "��ü �Ҹ� �� ���� �Ҵ� ����.." << endl;
	delete[] p;
	cout << "��ü �Ҹ�.." << endl;
}
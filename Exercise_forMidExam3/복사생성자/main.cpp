#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

void create1(ComplexList cl); //��������� ȣ�� 2
ComplexList create2(void); //��������� ȣ�� 3

int main(void)
{
	ComplexList cl1;
	cout << "�ʱ� ComplexList" << endl;
	cl1.showComplexList();

	cout << endl;

	cl1.setComplexList(9, 2);
	cout << "9�� ������ ������ ComplexList" << endl;
	cl1.showComplexList();

	cout << endl;

	cl1.setComplexList(15, 3);
	cout << "15�� ������ ������ ComplexList" << endl;
	cl1.showComplexList();

	cout << endl;

	ComplexList cl2(cl1); //��������� ȣ�� 1
	cl2.setComplexList(4, 50);
	cout << "��������ڷ� cl2 ��ü ���� �� cl2�� ������� ��� �� ����" << endl;
	cout << "cl1..." << endl;
	cl1.showComplexList();
	cout << "cl2..." << endl;
	cl2.showComplexList();

	create1(cl2); //��������� ȣ�� 2
	cl2.showComplexList();

	ComplexList cl3 = create2(); //��������� ȣ�� 3
	cl3.showComplexList();
	return 0;
}
void create1(ComplexList cl) //��������� ȣ�� 2
{
	cout << "����� ��ü.." << endl;
	cl.setComplexList(20, 4);
	cl.showComplexList();
}
ComplexList create2(void) //��������� ȣ�� 3
{
	ComplexList cl(5);
	cout << "���� ������ ��ü.." << endl;
	cl.setComplexList(5, 5);
	cl.showComplexList();

	return cl;
}
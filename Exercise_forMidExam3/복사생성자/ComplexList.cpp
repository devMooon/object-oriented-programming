#include "ComplexList.h"
#include <iostream>

#include "Complex.h"

using std::cout;
using std::endl;

int ComplexList::OBJECT = 0;

ComplexList::ComplexList(int size)//�����ڿ��� �����迭 ����
{
	OBJECT++;
	cout << "������ ȣ��" << endl;
	cList = new Complex[size];
	this->size = size;
}
ComplexList::ComplexList(const ComplexList& cl)//��������ڿ��� ����� �� �����迭 �Ҵ�
{
	OBJECT++;
	cout << "���� ������ ȣ��" << endl;
	size = cl.size;//�迭�� ũ�� �� �˾Ƴ���
	this->cList = new Complex[size];//ũ�⸸ŭ�� �����迭 ����
	for (int i = 0; i < size; i++) {//���� �� �����ϱ�
		cList[i] = cl.cList[i];
	}
}
ComplexList::~ComplexList()
{
	OBJECT--;
	cout << "�Ҹ��� ȣ��" << endl;
	delete[] cList;
}
void ComplexList::setComplexList(int size, int num) //�迭�� ��� ���� �ٲٴ� �Լ�
{
	for (int i = 0; i < size; i++) {
		
		if (this->size <= size) modify(size);
		cList[i].setComplex(i, i * num);
	}
}
void ComplexList::modify(int size)
{
	Complex* newCList = new Complex[size];

	for (int i = 0; i < this->size; i++) {
		newCList[i] = cList[i];
	}
	delete[] cList;
	cList = newCList;
	this->size = size;
}
void ComplexList::showComplexList(void)const
{
	cout << "OBJECT �� : " << OBJECT << endl;

	for (int i = 0; i < size; i++) {
		cout << (i + 1) << " ";
		cList[i].showComplex();
	}
}
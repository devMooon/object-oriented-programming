#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

ComplexList::ComplexList(int size)
{
	cl = new Complex[size];
	this->size = size;
}
void ComplexList::Set(int n, double r, double i) //�迭 ��� n�� ���Ҽ� ���� 0�� ��ҿ� 2 + 5i ����
{
	if (n >= size) {
		IncreaseInSize();
	}
	cl[n].setComplex(r, i);
}
Complex& ComplexList::Get(int n) const//�迭 ��� n�� ����� ���Ҽ� ��ü ��ȯ Complex c = cList.Get(0) 0�� ��Ұ� ��ȯ
{
	return cl[n];
}
Complex* ComplexList::pGet(int n) const//������ ��ȯ�� ����
{
	return &cl[n];
}
int ComplexList::Length() const //������ ���Ҽ� �迭�� ���� ��ȯ
{
	return size;
}
void ComplexList::IncreaseInSize(void)
{
	int newSize = size + 10;
	Complex* cl1 = new Complex[newSize];
	for (int i = 0; i < size; i++) {
		cl1[i] = cl[i];
	}
	delete[]cl;
	cl = cl1;
	size = newSize;
}
void ComplexList::ShowInfo(int n) const
{
	cl[n].showInfo();
}
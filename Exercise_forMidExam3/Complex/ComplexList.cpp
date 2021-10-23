#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

ComplexList::ComplexList(int size)
{
	cout << "������ ȣ��" << endl;
	cList = new Complex[size];
	this->size = size;
}
ComplexList::ComplexList(const ComplexList& cl)
{
	cout << "���� ������ ȣ��" << endl;
	size = cl.size;
	cList = new Complex[size];
	for (int i = 0; i < size; i++) {
		cList[i] = cl.cList[i];
	}
}
ComplexList::~ComplexList()
{
	cout << "�Ҹ��� ȣ��" << endl;
	delete[] cList;
}
void ComplexList::IsVaild(int n)
{
	if (size <= n) Modify();
	return;
}
void ComplexList::Modify()
{
	Complex* newCl = new Complex[size + 10];
	for (int i = 0; i < size + 10; i++) {
		newCl[i] = cList[i];
	}
	delete[]cList;
	cList = newCl;
	size += 10;
}
void ComplexList::Set(int n, double r, double i) //�迭 n�� ���Ҽ� ����
{
	IsVaild(n);
	cList[n].SetComplex(r, i);
}
Complex& ComplexList::Get(int n) // �迭 ��� n�� ����� ���Ҽ� ��ü ��ȯ
{
	return cList[n];
}
int ComplexList::Length() //������ ���Ҽ� �迭�� ���� ��ȯ
{
	return size;
}
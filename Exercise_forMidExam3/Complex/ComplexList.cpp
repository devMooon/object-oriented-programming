#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

ComplexList::ComplexList(int size)
{
	cout << "생성자 호출" << endl;
	cList = new Complex[size];
	this->size = size;
}
ComplexList::ComplexList(const ComplexList& cl)
{
	cout << "복사 생성자 호출" << endl;
	size = cl.size;
	cList = new Complex[size];
	for (int i = 0; i < size; i++) {
		cList[i] = cl.cList[i];
	}
}
ComplexList::~ComplexList()
{
	cout << "소멸자 호출" << endl;
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
void ComplexList::Set(int n, double r, double i) //배열 n에 복소수 설정
{
	IsVaild(n);
	cList[n].SetComplex(r, i);
}
Complex& ComplexList::Get(int n) // 배열 요소 n에 저장된 복소수 객체 반환
{
	return cList[n];
}
int ComplexList::Length() //생성된 복소수 배열의 길이 반환
{
	return size;
}
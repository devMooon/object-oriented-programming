#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

ComplexList::ComplexList(int size)
{
	cl = new Complex[size];
	this->size = size;
}
void ComplexList::Set(int n, double r, double i) //배열 요소 n에 복소수 설정 0번 요소에 2 + 5i 설정
{
	if (n >= size) {
		IncreaseInSize();
	}
	cl[n].setComplex(r, i);
}
Complex& ComplexList::Get(int n) const//배열 요소 n에 저장된 복소수 객체 반환 Complex c = cList.Get(0) 0번 요소값 반환
{
	return cl[n];
}
Complex* ComplexList::pGet(int n) const//포인터 반환도 연습
{
	return &cl[n];
}
int ComplexList::Length() const //생성된 복소수 배열의 길이 반환
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
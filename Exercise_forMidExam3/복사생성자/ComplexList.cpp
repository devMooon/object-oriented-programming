#include "ComplexList.h"
#include <iostream>

#include "Complex.h"

using std::cout;
using std::endl;

int ComplexList::OBJECT = 0;

ComplexList::ComplexList(int size)//생성자에서 동적배열 생성
{
	OBJECT++;
	cout << "생성자 호출" << endl;
	cList = new Complex[size];
	this->size = size;
}
ComplexList::ComplexList(const ComplexList& cl)//복사생성자에서 복사될 시 동적배열 할당
{
	OBJECT++;
	cout << "복사 생성자 호출" << endl;
	size = cl.size;//배열의 크기 값 알아내기
	this->cList = new Complex[size];//크기만큼의 동적배열 생성
	for (int i = 0; i < size; i++) {//원래 값 복사하기
		cList[i] = cl.cList[i];
	}
}
ComplexList::~ComplexList()
{
	OBJECT--;
	cout << "소멸자 호출" << endl;
	delete[] cList;
}
void ComplexList::setComplexList(int size, int num) //배열의 요소 값을 바꾸는 함수
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
	cout << "OBJECT 수 : " << OBJECT << endl;

	for (int i = 0; i < size; i++) {
		cout << (i + 1) << " ";
		cList[i].showComplex();
	}
}
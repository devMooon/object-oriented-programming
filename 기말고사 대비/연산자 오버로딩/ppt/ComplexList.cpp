#include <iostream>
#include "ComplexList.h"

using std::cout;
using std::cerr;
using std::endl;


ComplexList::ComplexList(const ComplexList& complexList)
{
	realSize = complexList.realSize;
	size = complexList.size;

	cl = new Complex[size];
	for (int i = 0; i < size; i++) {
		cl[i] = complexList.cl[i];
	}
}
ComplexList::ComplexList(int size) : size(size), realSize(0)
{
	if (size == 0) cl = NULL;
	else cl = new Complex[size];
}
ComplexList::~ComplexList() 
{
	if (cl != NULL) delete[] cl;
}
Complex& ComplexList::operator[](int i)
{
	if (i < 0 || i > realSize - 1) {
		cerr << "잘못된 접근입니다." << endl;
		exit(-1);
	}
	return cl[i];
}
ComplexList& ComplexList::operator=(const ComplexList& complexList)
{
	this->realSize = complexList.realSize;
	this->size = complexList.size;

	delete[] this->cl;
	this->cl = new Complex[size];
	for (int i = 0; i < this->size; i++) {
		this->cl[i] = complexList.cl[i];
	}

	return *this;
}
bool ComplexList::operator==(const ComplexList& complexList) const
{
	if (this->size != complexList.size) return false;
	if(this->realSize != complexList.realSize)  return false;
	
	for (int i = 0; i < this->size; i++) {
		if (this->cl[i] != complexList.cl[i]) return false;
	}

	return true;
}
void ComplexList::add(const Complex& complex)
{
	if (realSize >= size) {
		cerr << "배열의 범위를 벗어남" << endl;
		//배열 크기 늘리기..
	}
	else {
		cl[realSize] = complex;
		realSize++;
	}
}
void ComplexList::show()
{
	for (int i = 0; i < realSize; i++) {
		cout << i << ": ";
		cl[i].showInfo();
	}
}
#include "Complex.h"

#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H

class ComplexList {
	//멤버필드
	Complex* cl;
	int size; //배열 크기
	int validSize = 0; //유효한 요소가 들어있는 배열 크기

public:
	ComplexList(int size = 10) {
		this->size = size;
		cl = new Complex[size]; 
	};
	~ComplexList() {
		delete[] cl;
	};

	/*Complex& Get(int n) const { return cl[n]; };
	Complex* pGet(int n) const { return &cl[n]; };*/

	Complex getCl(int i) const { return cl[i]; };
	void setComplex(int i, double real, double image);
	void add(double real, double image);
	int length() { return size; };
	void modifySize();
};
#endif // !_COMPLEXLIST_H
#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H
#include "Complex.h"

class ComplexList {
	//¸â¹öÇÊµå
	Complex* cl;
	int size;

public:
	//»ý¼ºÀÚ
	inline ComplexList(int size = 10) {
		this->size = size;
		cl = new Complex[size]; 
	};
	//¼Ò¸êÀÚ
	inline ~ComplexList() {
		delete[] cl;
	}
	//¸â¹öÇÔ¼ö
	int getSize(void) const { return size; };
	void setSize(int n) { this->size = size; };

	void Set(int n, double r, double i);

	Complex& Get(int n)const { return cl[n]; };
	Complex* pGet(int n) const { return &cl[n]; };
	int Length() { return getSize(); };
	void modifySize(int n);
};
#endif // !_COMPLEXLIST_H
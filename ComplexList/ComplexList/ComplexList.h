#include "Complex.h"

#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H

class ComplexList {
	//����ʵ�
	Complex* cl;
	int size; //�迭 ũ��
	int validSize = 0; //��ȿ�� ��Ұ� ����ִ� �迭 ũ��

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
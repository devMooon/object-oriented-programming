#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H
#include "Complex.h"

class ComplexList {
	//����ʵ�
	Complex* cl;
	int size;

public:
	//������
	inline ComplexList(int size = 10) {
		this->size = size;
		cl = new Complex[size]; 
	};
	//�Ҹ���
	inline ~ComplexList() {
		delete[] cl;
	}
	//����Լ�
	void Set(int n, double r, double i);
	Complex& Get(int n);
	Complex* pGet(int n);
	int Length();
};
#endif // !_COMPLEXLIST_H

//�迭�� �ϳ� �� �����.
//���� �迭�� ���� �ϳ��� �����Ѵ�.
//���� �迭�� �Ҵ� �����Ѵ�.
//plist�� ū �迭�� ����Ų��.
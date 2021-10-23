#ifndef _ComplexList_h
#define _ComplexList_h

#include "Complex.h"

class ComplexList {
	Complex* cList;
	int size;
public:
	ComplexList(int size = 10);
	ComplexList(const ComplexList& cl);
	~ComplexList();

	void IsVaild(int n);
	void Modify();
	void Set(int n, double r, double i); //�迭 n�� ���Ҽ� ����
	Complex& Get(int n); // �迭 ��� n�� ����� ���Ҽ� ��ü ��ȯ
	int Length(); //������ ���Ҽ� �迭�� ���� ��ȯ
};
#endif // !_ComplexList_h

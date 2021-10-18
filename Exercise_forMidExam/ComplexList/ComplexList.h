#ifndef _ComplexList_h
#define _ComplexList_h

#include "Complex.h"

class ComplexList {
	Complex* cl;
	int size;

public:
	ComplexList(int size = 10);
	~ComplexList() { delete[] cl; };
	void Set(int n, double r, double i); //�迭 ��� n�� ���Ҽ� ���� 0�� ��ҿ� 2 + 5i ����
	Complex& Get(int n) const; //�迭 ��� n�� ����� ���Ҽ� ��ü ��ȯ Complex c = cList.Get(0) 0�� ��Ұ� ��ȯ
	Complex* pGet(int n) const; //������ ��ȯ�� ����
	int Length() const; //������ ���Ҽ� �迭�� ���� ��ȯ
	void IncreaseInSize(void); //�����Ҵ�� �迭�� ũ�⸦ �ø��� �Լ�
	void ShowInfo(int n) const;
};
#endif // !_ComplexList_h

#include "ComplexList.h"

//�迭 ��� n�� ���Ҽ� ���� r = real, i = image
void ComplexList::Set(int n, double r, double i) {
	cl[n].SetComplex(r, i);
};
//�迭 ��� n�� ����� ���Ҽ� ��ü ���۷��� ��ȯ
Complex&  ComplexList::Get(int n) {
	return cl[n];
};
//�迭 ��� n�� ����� ���Ҽ� ��ü ������ ��ȯ
Complex* ComplexList::pGet(int n) {
	return &cl[n];
};
//������ ���Ҽ� �迭�� ���� ��ȯ
int ComplexList::Length() {
	return size;
};
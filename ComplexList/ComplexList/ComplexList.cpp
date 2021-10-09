#include "ComplexList.h"

//배열 요소 n에 복소수 설정 r = real, i = image
void ComplexList::Set(int n, double r, double i) {
	cl[n].SetComplex(r, i);
};
//배열 요소 n에 저장된 복소수 객체 레퍼런스 반환
Complex&  ComplexList::Get(int n) {
	return cl[n];
};
//배열 요소 n에 저장된 복소수 객체 포인터 반환
Complex* ComplexList::pGet(int n) {
	return &cl[n];
};
//생성된 복소수 배열의 길이 반환
int ComplexList::Length() {
	return size;
};
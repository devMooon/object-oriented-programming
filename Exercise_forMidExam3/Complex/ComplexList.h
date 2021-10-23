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
	void Set(int n, double r, double i); //배열 n에 복소수 설정
	Complex& Get(int n); // 배열 요소 n에 저장된 복소수 객체 반환
	int Length(); //생성된 복소수 배열의 길이 반환
};
#endif // !_ComplexList_h

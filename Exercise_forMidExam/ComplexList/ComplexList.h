#ifndef _ComplexList_h
#define _ComplexList_h

#include "Complex.h"

class ComplexList {
	Complex* cl;
	int size;

public:
	ComplexList(int size = 10);
	~ComplexList() { delete[] cl; };
	void Set(int n, double r, double i); //배열 요소 n에 복소수 설정 0번 요소에 2 + 5i 설정
	Complex& Get(int n) const; //배열 요소 n에 저장된 복소수 객체 반환 Complex c = cList.Get(0) 0번 요소값 반환
	Complex* pGet(int n) const; //포인터 반환도 연습
	int Length() const; //생성된 복소수 배열의 길이 반환
	void IncreaseInSize(void); //동적할당된 배열의 크기를 늘리는 함수
	void ShowInfo(int n) const;
};
#endif // !_ComplexList_h

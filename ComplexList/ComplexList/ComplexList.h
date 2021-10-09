#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H
#include "Complex.h"

class ComplexList {
	//멤버필드
	Complex* cl;
	int size;

public:
	//생성자
	inline ComplexList(int size = 10) {
		this->size = size;
		cl = new Complex[size]; 
	};
	//소멸자
	inline ~ComplexList() {
		delete[] cl;
	}
	//멤버함수
	void Set(int n, double r, double i);
	Complex& Get(int n);
	Complex* pGet(int n);
	int Length();
};
#endif // !_COMPLEXLIST_H

//배열을 하나 더 만든다.
//작은 배열의 값을 하나씩 복사한다.
//작은 배열을 할당 해제한다.
//plist가 큰 배열을 가리킨다.
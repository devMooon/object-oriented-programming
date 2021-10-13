#include "ComplexList.h"

//배열 요소 n에 복소수 설정 r = real, i = image
void ComplexList::Set(int n, double r, double i) {
	if (n >= getSize()) {
		modifySize(n + 10);
	}
	cl[n].SetComplex(r, i);
};
void ComplexList::modifySize(int n) {
	Complex* newCl = new Complex[n]; //더 큰 새로운 배열 생성
	for (int i = 0; i < Length(); i++) { //기존 배열에 저장된 요소(객체)를 새 배열에 복사
		newCl[i] = cl[i]; //방법1.  기존 배열의 객체 자체를 새로운 배열 요소에 대입한다.
		//newCl[i].SetComplex(cl[i].GetReal(), cl[i].GetImage()); //방법 2. 기존 배열 요소인 객체의 real값과 imge값을 새로운 객체의 real과 image값으로 대입 시킨다.
	}
	delete[] cl; //cl이 가리키던 기존 배열 할당 해제
	cl = newCl; //멤버필드의 포인터가 새 배열을 가리키게 함
	setSize(n); //배열의 크기를 새로 지정함
};
#include <iostream>
#include "ComplexList.h"

int main(void)
{
	ComplexList cl1;
	ComplexList cl2(5);

	//배열 객체 초기화
	for (int i = 0; i < cl1.length(); i++) {
		cl1.setComplex((i + 1), (i + 1) * 10, i);		
	}

	for (int i = 0; i < cl2.length(); i++) {
		cl2.setComplex((i + 1) * 10, (i + 1) * 10 + 5, i);
	}

	//배열의 요소 출력
	std::cout << "cl1의 요소 값 출력...\n";
	for (int i = 0; i < cl1.length(); i++) {
		std::cout << i << "번 : ";
		cl1.getCl(i).ShowComplex();
	}
	std::cout << std::endl;

	std::cout << "cl2의 요소 값 출력...\n";
	for (int i = 0; i < cl2.length(); i++) {
		std::cout << i << "번 : ";
		cl2.getCl(i).ShowComplex();
	}

	std::cout << "\ncl1" <<cl1.length() + 1<< "에 요소 2개 추가...\n\n";
	cl1.add(2, 3);
	cl1.add(4, 5);

	cl2.add(2, 3);
	cl2.add(4, 5);

	//배열의 요소 출력
	std::cout << "cl1의 요소 값 출력...\n";
	for (int i = 0; i < cl1.length(); i++) {
		std::cout << i << "번 : ";
		cl1.getCl(i).ShowComplex();
	}
	std::cout << std::endl;

	std::cout << "cl2의 요소 값 출력...\n";
	for (int i = 0; i < cl2.length(); i++) {
		std::cout << i << "번 : ";
		cl2.getCl(i).ShowComplex();
	}

}
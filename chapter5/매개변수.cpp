#include <iostream>
void swap(int a, int b);
void swap1(int* a, int* b);
void swap2(int& a, int& b);

int main(void)
{
	int a, b;
	a = 10;
	b = 20;
	std::cout << "a : " << a << ", b : " << b << std::endl << std::endl;

	//값에 의한 호출
	swap(a, b);
	std::cout << "값에 의한 호출로 a, b 값은 변하지 않음" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	//주소에 의한 호출
	swap1(&a, &b);
	std::cout << "주소값에 의한 호출로 a, b 값이 변함" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	//레퍼런스에 의한 호출
	//별명이 하나 생기는 것이지, 메모리가 할당되는 것은 아님
	swap2(a, b);
	std::cout << "레퍼런스에 의한 호출로 a, b 값이 변함" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;

	return 0;
}
void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void swap1(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void swap2(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
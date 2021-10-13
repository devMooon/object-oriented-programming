#include <iostream>
#include "Complex.h"
#include "ComplexList.h"
Complex AddComplex(Complex c1, Complex c2);
void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);

int main(void)
{
	std::cout << "Complex 클래스 테스트\n";
	Complex c1;
	Complex c2;
	Complex c3;

	InputComplex(&c1);
	InputComplex(c2);
	c3 = InpAndRetComplex(c1);

	c1.ShowComplex();
	c2.ShowComplex();
	c3.ShowComplex();

	std::cout << "ComplexList 클래스 테스트\n";
	ComplexList cl1;
	ComplexList cl2(5);

	//배열 객체 초기화
	int repeat = cl1.Length() + 5;
	for (int i = 0; i < repeat; i++) {
		cl1.Set(i, 0, 0);
	}

	repeat = cl2.Length() + 5;
	for (int i = 0; i < repeat; i++) {
		cl2.Set(i, 5, 5);
	}
	



	//배열의 요소 출력
	std::cout << "cl1의 요소 값 출력...\n";
	for (int i = 0; i < cl1.Length(); i++) {
		std::cout << i << "번 : ";
		cl1.Get(i).ShowComplex();
		std::cout << std::endl;
	}

	std::cout << "cl2의 요소 값 출력...\n";
	for (int i = 0; i < cl2.Length(); i++) {
		std::cout << i << "번 : ";
		cl2.Get(i).ShowComplex();
		std::cout << std::endl;
	}
}
Complex AddComplex(Complex c1, Complex c2)
{
	Complex c3;

	c3.SetComplex((c1.GetReal() + c2.GetReal()), (c1.GetImage() + c2.GetImage()));
	return c3;
}
void InputComplex(Complex* c)
{
	double real;
	double image;
	std::cout << "real? : ";
	std::cin >> real;
	std::cout << "image? : ";
	std::cin >> image;
	c->SetComplex(real, image);
}
void InputComplex(Complex& c)
{
	double real;
	double image;
	std::cout << "real? : ";
	std::cin >> real;
	std::cout << "image? : ";
	std::cin >> image;
	c.SetComplex(real, image);
}
Complex& InpAndRetComplex(Complex& c)
{
	double real;
	double image;
	std::cout << "real? : ";
	std::cin >> real;
	std::cout << "image? : ";
	std::cin >> image;
	c.SetComplex(real, image);
	return c;
}
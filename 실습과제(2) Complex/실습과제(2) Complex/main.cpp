//컴퓨터공학전공 20200675 문서연
#include <iostream>
#include "Complex.h"

Complex AddComplex(const Complex&, const Complex&);

void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);

void InputComplex(Complex*);

int main(void)
{
	Complex c1;

	//레퍼런스 매개변수	
	InputComplex(c1);
	c1.ShowComplex();

	Complex c2;

	//포인터 매개변수
	InputComplex(&c2);
	c2.ShowComplex();

	Complex c3;

	//래퍼런스 반환값
	Complex& cr = InpAndRetComplex(c3);
	cr.ShowComplex();

	Complex c4;

	//복소수 덧셈
	c4 = AddComplex(c1, c2);
	c4.ShowComplex();

	return 0;
}
Complex AddComplex(const Complex& cr1, const Complex& cr2)
{
	Complex c;
	c.SetComplex(cr1.GetReal() + cr2.GetReal(), cr1.GetImage() + cr2.GetImage());

	return c;
}
void InputComplex(Complex* c)
{
	std::cout << "1. void InputComplex(Complex*)" << std::endl;
	double real; //실수부값
	double image; //허수부값

	std::cout << "실수부값 : ";
	std::cin >> real;

	std::cout << "허수부값 : ";
	std::cin >> image;
	
	c->SetComplex(real, image);
}
void InputComplex(Complex& cr)
{
	std::cout << "2. void InputComplex(Complex&);" << std::endl;
	double real; //실수부값
	double image; //허수부값

	std::cout << "실수부값 : ";
	std::cin >> real;

	std::cout << "허수부값 : ";
	std::cin >> image;

	cr.SetComplex(real, image);
}
Complex& InpAndRetComplex(Complex& cr)
{
	std::cout << "3. Complex& InputComplex(Complex&);" << std::endl;
	double real; //실수부값
	double image; //허수부값

	std::cout << "실수부값 : ";
	std::cin >> real;

	std::cout << "허수부값 : ";
	std::cin >> image;

	cr.SetComplex(real, image);

	return cr;
}
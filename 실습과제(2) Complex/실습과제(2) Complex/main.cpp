#include <iostream>
#include "Complex.h"

void InputComplex(Complex*);
void InputComplex(Complex&);
//Complex& InputComplex(Complex&); //반환 형식만으로만 구분되는 함수를 오버로드할 수 없습니다.

Complex AddComplex(Complex&, Complex&);

int main(void)
{
	Complex c1;
	Complex& cr1 = c1;
	InputComplex(&c1);
	c1.ShowComplex();

	//레퍼런스 값을 넘겨줄 때 포인터처럼 한번에 넘겨줄 순 없을까?
	Complex c2;
	Complex& cr2 = c2;
	InputComplex(cr2);
	c2.ShowComplex();

	Complex c3 = AddComplex(cr1, cr2);
	c3.ShowComplex();

	//3번 InputComplex함수 테스트
	//Complex& cr2 = InputComplex(cr);
	//cr2.ShowComplex();

	return 0;
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
/*Complex& InputComplex(Complex& cr)
{
	std::cout << "3. Complex& InputComplex(Complex&);" << std::endl;
	double real; //실수부값
	double image; //허수부값
	std::cout << "실수부값 : ";
	std::cin >> real;

	std::cout << "허수부값 : ";
	std::cin >> image;

	cr.SetComplex(real, image);
	Complex& cr2 = cr;

	return cr2;
}*/

Complex AddComplex(Complex& cr1, Complex& cr2)
{
	Complex c;
	c.SetComplex(cr1.GetReal() + cr2.GetReal(), cr1.GetImage() + cr2.GetImage());

	return c;
}
//컴퓨터공학전공 20200675 문서연
#include <iostream>
#include "Complex.h"

Complex::Complex(void)
	:Complex(0, 0) {};
Complex::Complex(double real, double image)
{
	Complex::real = real;
	Complex::image = image;
};

void Complex::ShowComplex(void) //복소수값 출력
{
	std::cout << std::endl << "***복소수값 출력***" << std::endl;
	std::cout << GetReal() << " + " << GetImage() << "i" << std::endl << std::endl;
};
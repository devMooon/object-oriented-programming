//컴퓨터공학전공 20200675 문서연
#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double image)
{
	this->real = real;
	this->image = image;
};
void Complex::SetComplex(double real, double image)
{
	this->real = real;
	this->image = image;
};
void Complex::ShowComplex(void) const
{
	std::cout << std::endl << "***복소수값 출력***" << std::endl;
	std::cout << GetReal() << " + " << GetImage() << "i" << std::endl << std::endl;
};
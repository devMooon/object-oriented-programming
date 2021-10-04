#include <iostream>
#include "Complex.h"

void Complex::SetComplex(double real, double image) //복소수값 설정
{
	Complex::real = real;
	Complex::image = image;
};
double Complex::GetReal(void) //실수부값 반환
{
	return real;
};
double Complex::GetImage(void) //허수부값 반환
{
	return image;
};
void Complex::ShowComplex(void) //복소수값 출력
{
	std::cout << std::endl << "***복소수값 출력***" << std::endl;
	std::cout << GetReal() << " + " << GetImage() << "i" << std::endl << std::endl;
};
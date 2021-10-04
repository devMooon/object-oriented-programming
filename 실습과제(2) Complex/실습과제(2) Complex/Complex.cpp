#include <iostream>
#include "Complex.h"

Complex::Complex(void)
	:Complex(0, 0) {};
Complex::Complex(double real, double image)
{
	Complex::real = real;
	Complex::image = image;
};

void Complex::SetComplex(double real, double image) //���Ҽ��� ����
{
	Complex::real = real;
	Complex::image = image;
};
double Complex::GetReal(void) //�Ǽ��ΰ� ��ȯ
{
	return real;
};
double Complex::GetImage(void) //����ΰ� ��ȯ
{
	return image;
};
void Complex::ShowComplex(void) //���Ҽ��� ���
{
	std::cout << std::endl << "***���Ҽ��� ���***" << std::endl;
	std::cout << GetReal() << " + " << GetImage() << "i" << std::endl << std::endl;
};
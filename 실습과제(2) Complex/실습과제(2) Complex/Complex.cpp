#include <iostream>
#include "Complex.h"

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
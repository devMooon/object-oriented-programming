//��ǻ�Ͱ������� 20200675 ������
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
	std::cout << std::endl << "***���Ҽ��� ���***" << std::endl;
	std::cout << GetReal() << " + " << GetImage() << "i" << std::endl << std::endl;
};
//��ǻ�Ͱ������� 20200675 ������
#include <iostream>
#include "Complex.h"

Complex::Complex(void)
	:Complex(0, 0) {};
Complex::Complex(double real, double image)
{
	Complex::real = real;
	Complex::image = image;
};

void Complex::ShowComplex(void) //���Ҽ��� ���
{
	std::cout << std::endl << "***���Ҽ��� ���***" << std::endl;
	std::cout << GetReal() << " + " << GetImage() << "i" << std::endl << std::endl;
};
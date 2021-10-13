//��ǻ�Ͱ������� 20200675 ������
#include <iostream>
#include "Complex.h"

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);
Complex AddComplex(Complex&, Complex&);

int main(void)
{
	Complex c1, c2, c3, c4;
	
	InputComplex(&c1);
	c1.ShowComplex();

	InputComplex(c2);
	c2.ShowComplex();

	Complex& cr = InpAndRetComplex(c3);
	cr.ShowComplex();

	c4 = AddComplex(c1, c2);
	c4.ShowComplex();

	return 0;
}
void InputComplex(Complex* c)
{
	std::cout << "1. void InputComplex(Complex*)" << std::endl;
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�
	std::cout << "�Ǽ��ΰ� : ";
	std::cin >> real;
	std::cout << "����ΰ� : ";
	std::cin >> image;
	
	c->SetComplex(real, image);
}
void InputComplex(Complex& cr)
{
	std::cout << "2. void InputComplex(Complex&);" << std::endl;
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�
	std::cout << "�Ǽ��ΰ� : ";
	std::cin >> real;

	std::cout << "����ΰ� : ";
	std::cin >> image;

	cr.SetComplex(real, image);
}
Complex& InpAndRetComplex(Complex& cr)
{
	std::cout << "3. Complex& InputComplex(Complex&);" << std::endl;
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�
	std::cout << "�Ǽ��ΰ� : ";
	std::cin >> real;
	std::cout << "����ΰ� : ";
	std::cin >> image;

	cr.SetComplex(real, image);

	return cr;
}

Complex AddComplex(Complex& cr1, Complex& cr2)
{
	Complex c;
	c.SetComplex(cr1.GetReal() + cr2.GetReal(), cr1.GetImage() + cr2.GetImage());

	return c;
}
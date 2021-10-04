#include <iostream>
#include "Complex.h"

void InputComplex(Complex*);
void InputComplex(Complex&);
//Complex& InputComplex(Complex&); //��ȯ ���ĸ����θ� ���еǴ� �Լ��� �����ε��� �� �����ϴ�.

Complex AddComplex(Complex&, Complex&);

int main(void)
{
	Complex c1;
	Complex& cr1 = c1;
	InputComplex(&c1);
	c1.ShowComplex();

	//���۷��� ���� �Ѱ��� �� ������ó�� �ѹ��� �Ѱ��� �� ������?
	Complex c2;
	Complex& cr2 = c2;
	InputComplex(cr2);
	c2.ShowComplex();

	Complex c3 = AddComplex(cr1, cr2);
	c3.ShowComplex();

	//3�� InputComplex�Լ� �׽�Ʈ
	//Complex& cr2 = InputComplex(cr);
	//cr2.ShowComplex();

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
/*Complex& InputComplex(Complex& cr)
{
	std::cout << "3. Complex& InputComplex(Complex&);" << std::endl;
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�
	std::cout << "�Ǽ��ΰ� : ";
	std::cin >> real;

	std::cout << "����ΰ� : ";
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
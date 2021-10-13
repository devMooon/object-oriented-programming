#include <iostream>
#include "Complex.h"
#include "ComplexList.h"
Complex AddComplex(Complex c1, Complex c2);
void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);

int main(void)
{
	std::cout << "Complex Ŭ���� �׽�Ʈ\n";
	Complex c1;
	Complex c2;
	Complex c3;

	InputComplex(&c1);
	InputComplex(c2);
	c3 = InpAndRetComplex(c1);

	c1.ShowComplex();
	c2.ShowComplex();
	c3.ShowComplex();

	std::cout << "ComplexList Ŭ���� �׽�Ʈ\n";
	ComplexList cl1;
	ComplexList cl2(5);

	//�迭 ��ü �ʱ�ȭ
	int repeat = cl1.Length() + 5;
	for (int i = 0; i < repeat; i++) {
		cl1.Set(i, 0, 0);
	}

	repeat = cl2.Length() + 5;
	for (int i = 0; i < repeat; i++) {
		cl2.Set(i, 5, 5);
	}
	



	//�迭�� ��� ���
	std::cout << "cl1�� ��� �� ���...\n";
	for (int i = 0; i < cl1.Length(); i++) {
		std::cout << i << "�� : ";
		cl1.Get(i).ShowComplex();
		std::cout << std::endl;
	}

	std::cout << "cl2�� ��� �� ���...\n";
	for (int i = 0; i < cl2.Length(); i++) {
		std::cout << i << "�� : ";
		cl2.Get(i).ShowComplex();
		std::cout << std::endl;
	}
}
Complex AddComplex(Complex c1, Complex c2)
{
	Complex c3;

	c3.SetComplex((c1.GetReal() + c2.GetReal()), (c1.GetImage() + c2.GetImage()));
	return c3;
}
void InputComplex(Complex* c)
{
	double real;
	double image;
	std::cout << "real? : ";
	std::cin >> real;
	std::cout << "image? : ";
	std::cin >> image;
	c->SetComplex(real, image);
}
void InputComplex(Complex& c)
{
	double real;
	double image;
	std::cout << "real? : ";
	std::cin >> real;
	std::cout << "image? : ";
	std::cin >> image;
	c.SetComplex(real, image);
}
Complex& InpAndRetComplex(Complex& c)
{
	double real;
	double image;
	std::cout << "real? : ";
	std::cin >> real;
	std::cout << "image? : ";
	std::cin >> image;
	c.SetComplex(real, image);
	return c;
}
#ifndef _Complex_h
#define _Complex_h
#include <iostream>

using std::ostream;

class Complex
{
	double real; //�Ǽ��ΰ�
	double image; //����ΰ�

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {};
	//���׿����� �����ε�
	Complex operator+(const Complex& complex) const;
	Complex operator-(const Complex& complex) const;
	//Complex& operator=(const Complex& complex); ���� ������ ���� ������ ����
	bool operator==(const Complex& complex) const;
	bool operator!=(const Complex& complex) const;
	bool operator<(const Complex& complex) const;
	bool operator<=(const Complex& complex) const;

	//���׿����� �����ε�
	Complex operator-() const;
	Complex& operator++();
	//Complex operator++(int notused);

	void showInfo();

	//�������Լ�
	friend Complex operator+(int real, const Complex& complex);
	friend Complex operator++(Complex& complex, int notused);
	friend ostream& operator<<(ostream& os, const Complex& complex);
};

#endif // !_Complex_h
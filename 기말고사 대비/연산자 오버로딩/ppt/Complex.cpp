#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;
using std::ostream;

Complex Complex::operator+(const Complex& complex) const
{
	Complex c;

	c.real = this->real + complex.real;
	c.image = this->image + complex.image;

	return c;
}
Complex Complex::operator-(const Complex& complex) const
{
	Complex c;

	c.real = this->real - complex.real;
	c.image = this->image - complex.image;

	return c;
}
/*Complex& Complex::operator=(const Complex& complex)
{
	this->real = complex.real;
	this->image = complex.image;

	return *this;
}*/
bool Complex::operator==(const Complex& complex) const
{
	return this->image == complex.image && this->real == complex.real;
}
bool Complex::operator!=(const Complex& complex) const
{
	return this->image != complex.image && this->real != complex.real;
}
bool Complex::operator<(const Complex& complex) const
{
	return this->image < complex.image && this->real < complex.real;
}
bool Complex::operator<=(const Complex& complex) const
{
	return this->image <= complex.image && this->real <= complex.real;
}
Complex Complex::operator-() const
{
	Complex c;
	c.image = -this->image;
	c.real = -this->real;

	return c;
}
Complex& Complex::operator++()
{
	++this->image;
	++this->real;

	return *this;
}
/*Complex Complex::operator++(int notused)
{
	Complex res = *this;

	++this->image;
	++this->real;

	return res;
}*/
void Complex::showInfo()
{
	cout << "(" << real << ", " << image << ")" << endl;
}
Complex operator+(int real, const Complex& complex)
{
	Complex c;
	c.image = complex.image;
	c.real = real + complex.real;

	return c;
}
Complex operator++(Complex& complex, int notused)
{
	Complex res = complex;

	++complex.image;
	++complex.real;

	return res;

}
ostream& operator<<(ostream& os, const Complex& complex)
{
	return os << "(" << complex.real << ", " << complex.image << ")";
}
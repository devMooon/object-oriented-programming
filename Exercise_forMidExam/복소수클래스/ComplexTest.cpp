#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);

Complex& AddComplex(Complex, Complex);
int main(void)
{
	Complex c1;
	Complex c2;
	Complex c3;

	InputComplex(&c1);
	InputComplex(c2);
	Complex& c4 = InpAndRetComplex(c3);

	cout << "c1 按眉 : "; c1.ShowComplex();
	cout << "c2 按眉 : "; c2.ShowComplex();
	cout << "c3 按眉 : "; c3.ShowComplex();
	cout << "c4 按眉 : "; c4.ShowComplex();

	cout << endl;

	Complex& c5 = AddComplex(c1, c2);
	cout << "c1 按眉 + c2 按眉: "; c5.ShowComplex();
}
void InputComplex(Complex* c)
{
	c->SetComplex(1, 2);
}
void InputComplex(Complex& c)
{
	c.SetComplex(3, 4);
}
Complex& InpAndRetComplex(Complex& c)
{
	c.SetComplex(5, 6);
	return c;
}
Complex& AddComplex(Complex c1, Complex c2)
{
	Complex* c3 = new Complex();
	c3->SetComplex((c1.GetReal() + c2.GetReal()), (c1.GetImage() + c2.GetImage()));
	return *c3;
}
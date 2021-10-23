#include <iostream>
#include "Complex.h"
#include "ComplexList.h"

using std::cout;
using std::cin;
using std::endl;

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);
Complex& AddComplex(Complex&, Complex&);

int main(void)
{
	//실험1
	/*Complex complexA; Complex complexB; Complex complexC;

	InputComplex(&complexA);
	InputComplex(complexB);

	cout << "ComplexA >> ";  complexA.ShowComplex();
	cout << "ComplexB >> ";  complexB.ShowComplex();

	cout << endl;

	Complex& complexD = InpAndRetComplex(complexC);
	cout << "ComplexC >> ";  complexC.ShowComplex();
	cout << "ComplexD >> ";  complexD.ShowComplex();

	cout << endl;

	Complex& complexE = AddComplex(complexA, complexB);
	cout << "ComplexA >> ";  complexA.ShowComplex();
	cout << "ComplexB >> ";  complexB.ShowComplex();
	cout << "ComplexE >> ";  complexE.ShowComplex();*/

	//실험2
	ComplexList cl1; ComplexList cl2(5);

	for (int i = 0; i < cl1.Length(); i++) {
		cl1.Set(i, i, i * 2);
	}
	for (int i = 0; i < cl2.Length(); i++) {
		cl2.Set(i, i, i * 3);
	}

	cout << "CL1 >> " << endl;
	for (int i = 0; i < cl1.Length(); i++) {
		cl1.Get(i).ShowComplex();
	}
	cout << "CL2 >> " << endl;
	for (int i = 0; i < cl2.Length(); i++) {
		cl2.Get(i).ShowComplex();
	}


	cout << "복사생성자 실험1" << endl;
	ComplexList cl3(cl2); //복사생성자 실험1

	for (int i = 0; i < 7; i++) {
		cl2.Set(i, i, i * 2);
	}
	cout << "CL2 >> " << endl;
	for (int i = 0; i < cl2.Length(); i++) {
		cl2.Get(i).ShowComplex();
	}
	cout << "CL3 >> " << endl;
	for (int i = 0; i < cl2.Length(); i++) {
		cl2.Get(i).ShowComplex();
	}

	return 0;
}

void InputComplex(Complex* c)
{
	double real; double image;

	cout << "복소수 값을 입력 받는 함수 입니다.." << endl;
	cout << "실수>> ";
	cin >> real;
	cout << "허수>> ";
	cin >> image;

	c->SetComplex(real, image);
}
void InputComplex(Complex& c)
{
	double real; double image;

	cout << "복소수 값을 입력 받는 함수 입니다.." << endl;
	cout << "실수>> ";
	cin >> real;
	cout << "허수>> ";
	cin >> image;

	c.SetComplex(real, image);
}
Complex& InpAndRetComplex(Complex& c)
{
	double real; double image;

	cout << "복소수 값을 입력 받는 함수 입니다.." << endl;
	cout << "실수>> ";
	cin >> real;
	cout << "허수>> ";
	cin >> image;

	c.SetComplex(real, image);

	return c;
}
Complex& AddComplex(Complex& a, Complex& b)
{
	Complex* c = new Complex();
	c->SetComplex(a.GetReal() + b.GetReal(), a.GetImage() + b.GetImage());

	return *c;
}
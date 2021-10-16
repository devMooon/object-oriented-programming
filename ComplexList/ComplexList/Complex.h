#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

class Complex {
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {}; //inline Ű����� �Լ� ���ǿ� ������ ���� �ִ� ��쿡 ���� �κп� ���ִ� ��

	void SetComplex(double real, double image);

	double GetReal(void) const { return real; };
	inline double GetImage(void) const { return image; };
	void ShowComplex(void) const;
};
#endif // !_COMPLEX_H
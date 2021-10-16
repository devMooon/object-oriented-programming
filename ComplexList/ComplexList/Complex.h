#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

class Complex {
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {}; //inline 키워드는 함수 정의와 선언이 따로 있는 경우에 정의 부분에 써주는 것

	void SetComplex(double real, double image);

	double GetReal(void) const { return real; };
	inline double GetImage(void) const { return image; };
	void ShowComplex(void) const;
};
#endif // !_COMPLEX_H
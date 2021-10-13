#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

class Complex {
	double real;
	double image;

public:
	inline Complex(double real = 0, double image = 0) :real(real), image(image) {};

	void SetComplex(double real, double image);

	inline double GetReal(void) const { return real;  };
	inline double GetImage(void) const { return image; };
	void ShowComplex(void) const;
};
#endif // !_COMPLEX_H
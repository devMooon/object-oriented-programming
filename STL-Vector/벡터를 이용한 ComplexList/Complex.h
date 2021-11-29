#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

class Complex {
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0);

	void SetComplex(double real, double image);
	bool isVaild(double real, double image);
	bool isVaild();
	inline double GetReal(void) const;
	inline double GetImage(void) const;
	void ShowComplex(void) const;
};
#endif // !_COMPLEX_H
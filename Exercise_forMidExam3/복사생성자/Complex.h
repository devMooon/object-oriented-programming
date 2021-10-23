#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real;
	double image;
public:
	Complex(double real = 0, double image = 0) : real(real), image(image) {}
	void showComplex(void)const;
	void setComplex(double real = 0, double image = 0);
};
#endif // !_Complex_h


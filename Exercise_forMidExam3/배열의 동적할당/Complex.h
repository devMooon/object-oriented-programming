#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {}

	double getReal()const { return real; };
	double getImage()const { return image; };
	void setComplex(double real, double image);
	void showComplex(void)const;
};
#endif // !_Complex_h


#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {};
	
	double getReal(void) { return real; };
	double getImage(void) { return image; };

	void setComplex(double real, double image);
	void showInfo(void);
};

#endif // !_Complex_h


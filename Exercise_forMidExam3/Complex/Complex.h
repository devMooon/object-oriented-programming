#ifndef _Complex_h
#define _Complex_h

class Complex {
	double real;
	double image;
public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {}
	void SetComplex(double, double);
	double GetReal(void) { return real; }
	double GetImage(void) { return image; }
	void ShowComplex(void);
};
#endif // !_Complex_h

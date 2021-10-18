#ifndef _Complex_h
#define _Comlex_h
class Complex {
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {};
	double GetReal(void) const { return real; };
	double GetImage(void) const { return image; };
	void SetComplex(double, double);
	
	void ShowComplex(void) const;
};
#endif // !_Complex_h
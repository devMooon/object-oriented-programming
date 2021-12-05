#ifndef _Complex_h
#define _Complex_h
#include <iostream>

using std::ostream;

class Complex
{
	double real; //실수부값
	double image; //허수부값

public:
	Complex(double real = 0, double image = 0) :real(real), image(image) {};
	//이항연산자 오버로딩
	Complex operator+(const Complex& complex) const;
	Complex operator-(const Complex& complex) const;
	//Complex& operator=(const Complex& complex); 얕은 복사일 때는 있으나 마나
	bool operator==(const Complex& complex) const;
	bool operator!=(const Complex& complex) const;
	bool operator<(const Complex& complex) const;
	bool operator<=(const Complex& complex) const;

	//단항연산자 오버로딩
	Complex operator-() const;
	Complex& operator++();
	//Complex operator++(int notused);

	void showInfo();

	//프렌드함수
	friend Complex operator+(int real, const Complex& complex);
	friend Complex operator++(Complex& complex, int notused);
	friend ostream& operator<<(ostream& os, const Complex& complex);
};

#endif // !_Complex_h
#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

void Complex::showComplex(void)const
{
	cout << real << " + " << image << "i" << endl;
}
void Complex::setComplex(double real, double image)
{
	this->real = real;
	this->image = image;
}
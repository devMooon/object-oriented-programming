#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

void Complex::setComplex(double real, double image)
{
	this->real = real;
	this->image = image;
}
void Complex::showInfo(void)
{
	cout << real << " + " << image << "i" << endl;
}
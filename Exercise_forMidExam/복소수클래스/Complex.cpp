#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

void Complex::SetComplex(double real, double image)
{
	this->real = real;
	this->image = image;
}
void Complex::ShowComplex(void) const
{
	cout << real << " + " << image << "i" << endl;
}

#include "Complex.h"
#include <iostream>

void Complex::SetComplex(double real, double image)
{
	if (real < 0 || image < 0) {
		std::cout << "����� �Է� �����մϴ�.\n";
		return;
	}
	this->real = real;
	this->image = image;
};
void Complex::ShowComplex(void) const 
{ 
	if (real == 0 && image == 0) {
		std::cout << 0;
	}
	std::cout << real << " + " << image << "i" << std::endl; 

};
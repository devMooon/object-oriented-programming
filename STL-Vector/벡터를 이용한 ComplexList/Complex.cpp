#include "Complex.h"
#include <iostream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;

Complex::Complex(double real, double image){
	SetComplex(real, image);
};

void Complex::SetComplex(double real, double image)
{
	if (isVaild(real, image)) {
		this->real = real;
		this->image = image;
		cout << "값 재설정 완료: ";  ShowComplex();
	}
};
bool Complex::isVaild(double real, double image) {
	try {
		if (real < 0 || image < 0) throw "오류! 양수만 입력 가능합니다.";
		return true;
	}
	catch (const char* s) {
		cerr << s << endl;
		return false;
	}
}
bool Complex::isVaild() {
	if (this->real < 0 || this->image < 0) return false;
	else return true;
}
double Complex::GetReal(void) const { 
	return real; 
};
double Complex::GetImage(void) const {
	return image; 
};
void Complex::ShowComplex(void) const 
{ 
	if (real == 0 && image == 0) {
		cout << 0 << endl;
	}
	else if (real == 0) {
		cout << image << "i" << endl;
	}
	else if (image == 0) {
		cout << real << endl;
	}
	else {
		cout << real << " + " << image << "i" << endl;
	}
};
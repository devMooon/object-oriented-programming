#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

void Complex::SetComplex(double r, double i)
{
	if (r >= 0 || i >= 0) {
		real = r;
		image = i;
	}
	else {
		cout << "오류 : 잘못된 범위의 값입니다.";
	}
}
void Complex::ShowComplex(void)
{
	if (real == 0 && image == 0) cout << 0 << endl;
	else if (real == 0) cout << image << "i" << endl;
	else if (image == 0) cout << real << endl;
	else cout << real << " + " << image << "i" << endl;
}
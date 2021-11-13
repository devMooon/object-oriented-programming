#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);

	a += 500;
	b -= 500;

	cout << a;
	cout << b;

	Book c("명품 C++", 30000, 500), d("고품 C++", 30000, 500);
	if (c == 30000) cout << "정가 30000원" << endl;
	if (c == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (c == d) cout << "두 책이 같은 책입니다." << endl;

	cout << endl;
	c = d;
	if (c == d) cout << "두 책이 같은 책입니다." << endl;

	return 0;
}
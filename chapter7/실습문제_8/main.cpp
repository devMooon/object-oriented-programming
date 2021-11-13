#include "Circle.h"
#include <iostream>

using std::cout;

int main(void)
{
	Circle a(5), b(4);
	++a;
	b = a++;
	
	cout << a;
	cout << b;

	Circle c(5), d(4);
	d = 1 + c;
	cout << c;
	cout << d;
	return 0;
}
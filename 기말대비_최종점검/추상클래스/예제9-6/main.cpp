#include "GoodCalc.h"
#include "Calculator.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Calculator* c = new GoodCalc;
	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	cout << "2 + 3: " << c->add(2, 3) << endl;
	cout << "2 - 3: " << c->subtract(2, 3) << endl;
	cout << "1~10ÀÇ aver: " << c->average(list, size) << endl;

	return 0;
}
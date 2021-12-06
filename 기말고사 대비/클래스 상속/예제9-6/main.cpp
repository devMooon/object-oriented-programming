#include "GoodCalc.h"
#include "Calculator.h"
#include "NewCalculator.h"
#include "Adder.h"
#include "Subtractor.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Calculator* p = new GoodCalc();
	int a[] = { 1, 2, 3, 4, 5 };

	cout << "1 + 2 = " << p->add(1, 2) << endl;
	cout << "1 - 2 = " << p->subtract(1, 2) << endl;
	cout << "{ 1, 2, 3, 4, 5 }ÀÇ Æò±Õ = " << p->average(a, 5) << endl;

	delete p;
	
	NewCalculator* pCalcus[3];
	pCalcus[0] = new Adder;
	pCalcus[1] = new Subtractor;

	pCalcus[0]->run();
	pCalcus[1]->run();

	delete pCalcus[0];
	delete pCalcus[1];

	return 0;
}
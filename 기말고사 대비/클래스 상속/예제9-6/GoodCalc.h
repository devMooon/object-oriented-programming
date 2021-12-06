#pragma once
#include "Calculator.h"
class GoodCalc :
    public Calculator
{
public:
	int add(int a, int b);
	int subtract(int a, int b);
	double average(int a[], int size);
};


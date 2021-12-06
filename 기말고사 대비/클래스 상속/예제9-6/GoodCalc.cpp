#include "GoodCalc.h"

int GoodCalc::add(int a, int b)
{
	return a + b;
}
int GoodCalc::subtract(int a, int b)
{
	return a - b;
}
double GoodCalc::average(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return sum / size;
}
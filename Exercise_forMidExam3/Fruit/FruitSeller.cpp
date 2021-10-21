#include "FruitSeller.h"
#include <iostream>

using std::cout;
using std::endl;

int FruitSeller::saleApple(int m)
{
	int num = m / APPLE_UNITCOST;

	numOfApple -= num;
	money += m;

	return num;
}
void FruitSeller::showResult() const
{
	cout << "남은 사과: " << numOfApple << "개" << endl;
	cout << "판매 수익: " << money << "원" << endl;
}
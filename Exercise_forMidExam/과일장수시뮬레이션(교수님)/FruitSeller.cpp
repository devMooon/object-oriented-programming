#include <iostream>
#include "FruitSeller.h"

using std::cout;
using std::endl;

int FruitSeller::SaleApple(int m)
{
	const int APPLE_UNITCOST = 1000;

	int num = m / APPLE_UNITCOST;

	numofApple -= num;
	money += m;

	return num;
}
void FruitSeller::ShowResult() const
{
	cout << "남은 사과: " << numofApple << "개" << endl;
	cout << "판매 수익: " << money<< "원" << endl;
}
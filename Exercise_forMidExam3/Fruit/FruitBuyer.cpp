#include "FruitBuyer.h"
#include "FruitSeller.h"
#include <iostream>

using std::cout;
using std::endl;

void FruitBuyer::buyApple(FruitSeller &seller, int money)
{
	int num = seller.saleApple(money);

	numOfApple += num;
	this->money -= money;
}
void FruitBuyer::showResult(void) const
{
	cout << "보유 사과: " << numOfApple << "개" << endl;
	cout << "보유 현금: " << money << "원" << endl;
}
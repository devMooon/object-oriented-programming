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
	cout << "���� ���: " << numOfApple << "��" << endl;
	cout << "���� ����: " << money << "��" << endl;
}
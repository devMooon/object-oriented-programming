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
	cout << "���� ���: " << numOfApple << "��" << endl;
	cout << "�Ǹ� ����: " << money << "��" << endl;
}
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
	cout << "���� ���: " << numofApple << "��" << endl;
	cout << "�Ǹ� ����: " << money<< "��" << endl;
}
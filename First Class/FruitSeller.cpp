#include <iostream>
#include "FruitSeller.h"

int FruitSeller::saleApple(int m)
{
	const int APPLE_PRICE = 1000;

	int num = m / APPLE_PRICE;

	numOfApple -= num;
	money += m;

	return num;
}
void FruitSeller::showResult(void)
{
	std::cout << "���� ���" << numOfApple << "��" << std::endl;
	std::cout << "�Ǹ� ����" << money << "��" << std::endl;
}
#include <iostream>
#include "FruitBuyer.h"

int FruitBuyer::buyApple(int n)
{
	const int APPLE_PRICE = 1000;

	numOfApple += n;
	money -= (n * APPLE_PRICE);

	return n;
}
void FruitBuyer::showStatus(void)
{
	std::cout << "������ ���" << numOfApple << "��" << std::endl;
	std::cout << "���� ����" << money << "��" << std::endl;
}
#include <iostream>
#include <string>
#include "FruitBuyer.h"
#include "FruitSeller.h"

void FruitBuyer::buyApple(FruitSeller& s ,int m)
{
	int num = s.saleApple(m);

	numOfApple += num;
	money -= m;
}
void FruitBuyer::showResult(void)
{
	std::cout << "������ ���" << numOfApple << "��" << std::endl;
	std::cout << "���� ����" << money << "��" << std::endl;
}
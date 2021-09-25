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
	std::cout << "남은 사과" << numOfApple << "개" << std::endl;
	std::cout << "판매 수익" << money << "원" << std::endl;
}
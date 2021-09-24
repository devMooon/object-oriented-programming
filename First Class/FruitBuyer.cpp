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
	std::cout << "구매한 사과" << numOfApple << "개" << std::endl;
	std::cout << "보유 현금" << money << "원" << std::endl;
}
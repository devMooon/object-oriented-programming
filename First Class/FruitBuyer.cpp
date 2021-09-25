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
	std::cout << "구매한 사과" << numOfApple << "개" << std::endl;
	std::cout << "보유 현금" << money << "원" << std::endl;
}
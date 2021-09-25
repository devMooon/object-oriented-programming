#include <iostream>
#include "FruitSeller.h"
#include "FruitBuyer.h"

int main(void)
{
	FruitSeller seller;
	FruitBuyer buyer;

	seller.numOfApple = 20;
	seller.money = 0;

	buyer.numOfApple = 0;
	buyer.money = 5000;

	buyer.buyApple(seller, 2000);

	std::cout << "seller : " << std::endl;
	seller.showResult();

	std::cout << std::endl;

	std::cout << "buyer : " << std::endl;
	buyer.showResult();

	return 0;
}
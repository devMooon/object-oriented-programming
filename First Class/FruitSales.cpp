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

	buyer.buyApple(seller.saleApple(2000));

	seller.showResult();
	buyer.showStatus();

	return 0;
}
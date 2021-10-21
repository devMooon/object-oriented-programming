#include "FruitSeller.h"
#include "FruitBuyer.h"

#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	FruitSeller seller;
	FruitBuyer buyer;

	cout << "* 판매 전 *" << endl;
	cout << "seller.." << endl; seller.showResult();
	cout << "buyer.." << endl; buyer.showResult();

	buyer.buyApple(seller, 4000);

	cout << "* 판매 후 *" << endl;
	cout << "seller.." << endl; seller.showResult();
	cout << "buyer.." << endl; buyer.showResult();
	return 0;
}
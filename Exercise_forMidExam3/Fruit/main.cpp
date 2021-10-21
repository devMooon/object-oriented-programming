#include "FruitSeller.h"
#include "FruitBuyer.h"

#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	FruitSeller seller;
	FruitBuyer buyer;

	cout << "* �Ǹ� �� *" << endl;
	cout << "seller.." << endl; seller.showResult();
	cout << "buyer.." << endl; buyer.showResult();

	buyer.buyApple(seller, 4000);

	cout << "* �Ǹ� �� *" << endl;
	cout << "seller.." << endl; seller.showResult();
	cout << "buyer.." << endl; buyer.showResult();
	return 0;
}
#ifndef _FruitBuyer_h
#define _FruitBuyer_h

#include "FruitSeller.h"

class FruitBuyer {
	int numOfApple;
	int money;
public:
	FruitBuyer(int numOfApple = 0, int money = 5000) :numOfApple(numOfApple), money(money) {}
	void buyApple(FruitSeller& seller, int money);
	void showResult(void) const;
};

#endif // !_FruitBuyer_h

#ifndef _FruitBuyer_h
#define _FruitBuyer_h

#include "FruitSeller.h"

class FruitBuyer {
	int money;
	int numOfApple;

public:
	void SetMoney(int m) { money = m; };
	void SetNumOfApple(int n) { numOfApple = n; };

	void BuyApple(FruitSeller& seller, int money);
	void ShowResult() const;

};
#endif // !_FruitBuyer_h

#include <string>
#include "FruitSeller.h"

#ifndef _FruitBuyer_h
#define _FruitBuyer_h

class FruitBuyer {
public :
	int numOfApple;
	int money;

	void buyApple(FruitSeller&, int);
	void showResult(void);
};

#endif //_FruitBuyer_h
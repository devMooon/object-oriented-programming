#include "AppleSeller.h"

#ifndef _PERSON_H
#define _PERSON_H

class Person {
	int appleNum = 0;
	int cash;

public:
	Person(int cash = 5000) { this->cash = cash; };

	void buyApple(AppleSeller&, int);
	
	void setAppleNum(int num) { appleNum = num; };
	int getAppleNum() { return appleNum; };
	void setCash(int money) { cash = money; };
	int getCash() { return cash; };

	void show();
};
#endif //_PERSON_H
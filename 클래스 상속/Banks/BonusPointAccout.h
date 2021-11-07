#pragma once
#include "Account.h"
class BonusPointAccout: public Account
{
	int bonusPoint;

public:
	BonusPointAccout(int accountNo, String name, int balance) :Account(accountNo, name, balance), bonusPoint(0) {}
	void deposit(int amount);
	void check();
};


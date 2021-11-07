#include "BonusPointAccout.h"
#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

void BonusPointAccout::deposit(int amount)
{
	Account::deposit(amount);
	bonusPoint += amount / 100;
}

void BonusPointAccout::check()
{
	Account::check();
	cout << " Æ÷ÀÎÆ®:\t" << bonusPoint << endl;
}
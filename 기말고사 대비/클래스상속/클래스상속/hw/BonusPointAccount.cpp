#include "BonusPointAccount.h"
#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

BonusPointAccount::BonusPointAccount(int accountNo, string name, int balance)
	:Account(accountNo, name, balance)
{
	this->bonusPoint = 0;
	this->bonusPoint += balance / 1000;
}
void BonusPointAccount::deposit(int amount)
{
	int b = this->balance;

	Account::deposit(amount);
	if (b != this->balance) {
		this->bonusPoint += amount / 1000;
	}
}
void BonusPointAccount::check()
{
	Account::check();
	cout << "Æ÷ÀÎÆ®: " << this->bonusPoint << endl;
}
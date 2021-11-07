#ifndef _CreditLineAccount_h
#define _CreditLineAccount_h

#include "Account.h"
class CreditLineAccount: public Account
{
	int creditLine;

public:
	CreditLineAccount(int accountNo, String name, int balance, int creditLine) :Account(accountNo, name, balance), creditLine(creditLine) {}
	int withdraw(int amount);
};


#endif // !_CreditLineAccount_h
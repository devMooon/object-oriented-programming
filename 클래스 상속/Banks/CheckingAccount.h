#ifndef _CheckingAccount_h_
#define _CheckingAccount_h_

#include "Account.h"
#include "String.h"

class CheckingAccount : public Account
{
	String cardNo;

public:
	CheckingAccount(int accountNo, String name, int balance, String cardNo);
	int pay(String cardNo, int amount);
};

#endif //!_CheckingAccount_h_
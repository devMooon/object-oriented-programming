#ifndef _CheckingTrafficCardAccount_h_
#define _CheckingTrafficCardAccount_h_

#include "CheckingAccount.h"
#include "String.h"

class CheckingTrafficCardAccount : public CheckingAccount
{
	bool hasTrafficCard;

public:
	CheckingTrafficCardAccount(int accountNo, String name, int balance, String cardNo, bool hasTrafficCard);
	int payTrafficCard(String cdNo, int amount);
	void registration(void);
};

#endif //!_CheckingTrafficCardAccount_h_

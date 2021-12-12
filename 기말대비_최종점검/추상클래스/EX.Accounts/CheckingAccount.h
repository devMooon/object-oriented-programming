#ifndef _CheckingAccount_h
#define _CheckingAccount_h
#include "Account.h"
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class CheckingAccount : public Account
{
private:
	string cardNo;
public:
	CheckingAccount(int accountNo, string name, int balance, string cardNo)
		:Account(accountNo, name, balance), cardNo(cardNo) {}
	int pay(string cardNo, int mount);

	friend ostream& operator<<(ostream& os, const CheckingAccount& account);
};
#endif // !_CheckingAccount_h




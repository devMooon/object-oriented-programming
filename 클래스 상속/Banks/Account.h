#ifndef _Account_h_
#define _Account_h_

#include "String.h"

class Account
{
protected:
	int accountNo;
	String name;
	int balance;

public:
	Account(int accountNo, String name, int balance);
	void deposit(int amount);
	int withdraw(int amount);
	void check();

};

#endif // !_Account_h_


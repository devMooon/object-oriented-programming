#ifndef _Account_h
#define _Account_h
#include <string>

using std::string;

class Account
{
protected:
	int accountNo;
	string name;
	int balance;

public:
	Account() {};
	Account(int accountNo, string name, int balance);

	virtual void deposit(int amount);
	virtual int withdraw(int amount);
	virtual void check();
};

#endif // !_Account_h
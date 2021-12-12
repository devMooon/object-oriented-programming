#ifndef _Account_h
#define _Account_h
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Account
{
protected:
	int accountNo;
	string name;
	int balance;

public:
	Account(int accountNo, string name, int balance);
	void deposit(int amount);
	int withdraw(int amount);
	
	friend ostream& operator<<(ostream& os, const Account& account);
};

#endif // !_Account_h
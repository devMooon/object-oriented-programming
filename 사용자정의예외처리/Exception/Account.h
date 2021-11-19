#ifndef _Account_h
#define _Account_h
#include <iostream>
#include <string>

using std::string;

class Account
{
	int accountNo; //계좌번호
	string name; //예금주 이름
	int balance; //잔액

public:
	Account(int accountNo, string name);

	void deposit(int amount);
	int withdraw(int amount);
	void check();
};

#endif // !_Accoutn_h




#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

Account::Account(int accountNo, string name, int balance)
	:accountNo(accountNo), name(name), balance(balance)
{

}
void Account::deposit(int amount)
{
	if (amount < 0) {
		cout << "À½¼ö ÀÔ±Ý" << endl;
		exit(-1);
	}
	else {
		balance += amount;
	}
}
int Account::withdraw(int amount)
{
	if (amount < 0) {
		cout << "À½¼ö ÀÔ±Ý" << endl;
		exit(-1);
	}
	else if(balance < amount) {
		cout << "ÀÜ¾× ºÎÁ·" << endl;
		exit(-1);
	}
	else {
		balance -= amount;
	}
}
ostream& operator<<(ostream& os, const Account& account)
{
	return os << account.name << "´ÔÀÇ " << account.accountNo << "°èÁÂÀÇ ÀÜ¾×: " << account.balance;
}
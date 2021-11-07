#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

Account::Account(int accountNo, String name, int balance): accountNo(accountNo), name(name), balance(balance){}
void Account::deposit(int amount)
{
	balance += amount;
}
int Account::withdraw(int amount)
{
	if (amount <= balance) {
		balance -= amount;
		return amount;
	}
	else {
		cout << "ÀÜ¾× ºÎÁ·" << endl;
		return 0;
	}
}
void Account::check()
{
	cout << endl;
	cout << "****** °èÁÂ Á¤º¸ ******" << endl;
	cout << " ¿¹±ÝÁÖ:\t" << name << endl;
	cout << " °èÁÂ¹øÈ£:\t" << accountNo << endl;
	cout << " ÀÜ¾×:\t\t" << balance << endl;
}

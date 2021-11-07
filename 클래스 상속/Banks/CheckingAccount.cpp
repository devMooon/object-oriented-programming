#include "CheckingAccount.h"
#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

CheckingAccount::CheckingAccount(int accountNo, String name, int balance, String cardNo) :Account(accountNo, name, balance), cardNo(cardNo) {}
int CheckingAccount::pay(String cardNo, int amount)
{
	if (this->cardNo == cardNo) return Account::withdraw(amount);
	else {
		cout << "ī���ȣ ����" << endl;
		return 0;
	}
}
